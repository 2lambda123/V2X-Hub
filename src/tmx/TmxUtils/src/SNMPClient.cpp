#include "SNMPClient.h"

// add a way to default to V1 functionality
namespace tmx::utils {

// SNMPClient::SNMPClient(const std::string &rsuIP, uint16_t snmp_port, const std::string &snmp_user, const std::string &securityLevel, const std::string &authPassPhrase)
//     : _snmp_port(snmp_port)
//     , _rsuIP(rsuIP)
    
    snmp_client::snmp_client(const std::string& ip, const int& port, const std::string& community, 
        const std::string &snmp_user, const std::string &securityLevel, const std::string &authPassPhrase, int snmp_version, int timeout)

        : ip_(ip), port_(port), community_(community),snmp_version_(snmp_version), timeout_(timeout)
    {
        
        // SPDLOG_DEBUG("Starting SNMP Client");
        // SPDLOG_DEBUG("Target device IP address: {0}", ip_);
        // SPDLOG_INFO("Target device NTCIP port: {0}", port_);
        PLOG(logDEBUG1) << "Starting SNMP Client";
        PLOG(logDEBUG1) << "Target device IP address: " << ip_;
        PLOG(logINFO) << "Target device NTCIP port: ", port_;

        // Bring the IP address and port of the target SNMP device in the required form, which is "IPADDRESS:PORT":
        std::string ip_port_string = ip_ + ":" + std::to_string(port_);    
        char* ip_port = &ip_port_string[0];
        
        init_snmp("carma_snmp");
        snmp_sess_init(&session);
        session.peername = ip_port;
        session.version = snmp_version_; // SNMP_VERSION_3
        session.securityName = (char *)snmp_user.c_str();
        session.securityNameLen = snmp_user.length();

        // Establish the session parameters.
        if(snmp_version_ != 3){
            char community_char[community_.length()];
            std::copy(community_.begin(), community_.end(), community_char);
            unsigned char* comm = reinterpret_cast<unsigned char*>(community_char);
        
            session.community = comm;
            session.community_len = community_.length();
        }


        if (securityLevel == "authPriv") {
            session.securityLevel = SNMP_SEC_LEVEL_AUTHPRIV;
        }

        else if (securityLevel == "authNoPriv") {
            session.securityLevel = SNMP_SEC_LEVEL_AUTHNOPRIV;
        }

        else session.securityLevel = SNMP_SEC_LEVEL_NOAUTH;
        session.securityAuthProto = snmp_duplicate_objid(usmHMACSHA1AuthProtocol, USM_AUTH_PROTO_SHA_LEN);
        session.securityAuthProtoLen = USM_AUTH_PROTO_SHA_LEN;
        session.securityAuthKeyLen = USM_AUTH_KU_LEN;

        if (generate_Ku(session.securityAuthProto,
                        session.securityAuthProtoLen,
                        (u_char *)authPassPhrase.c_str(),authPassPhrase.length(),
                        session.securityAuthKey,
                        &session.securityAuthKeyLen) != SNMPERR_SUCCESS)
        {
            std::string errMsg = "Error generating Ku from authentication pass phrase. \n";
            throw snmp_client_exception(errMsg);
        }


        session.timeout = timeout_;

        ss = snmp_open(&session);

        if (ss == nullptr)
        {
            // SPDLOG_ERROR("Failed to establish session with target device");
            PLOG(logERROR) << "Failed to establish session with target device";
            snmp_sess_perror("snmpget", &session);
            throw snmp_client_exception("Failed to establish session with target device");
        }
        else
        {
            // SPDLOG_INFO("Established session with device at {0}", ip_);
            PLOG(logINFO) << "Established session with device at ", ip_;
        }
        
    }
    
    snmp_client::~snmp_client(){
        // SPDLOG_INFO("Closing snmp session");
        PLOG(logINFO) << "Closing SNMP session";
        snmp_close(ss);
    }




    bool snmp_client::process_snmp_request(const std::string& input_oid, const request_type& request_type, snmp_response_obj& val){


        /*Structure to hold response from the remote host*/
        snmp_pdu *response;

        // Create pdu for the data
        if (request_type == request_type::GET)
        {
            // SPDLOG_DEBUG("Attemping to GET value for: {0}", input_oid);
            PLOG(logDEBUG1) << "Attempting to GET value for: " << input_oid;
            pdu = snmp_pdu_create(SNMP_MSG_GET);
        }
        else if (request_type == request_type::SET)
        {
            // SPDLOG_DEBUG("Attemping to SET value for {0}", input_oid, " to {1}", val.val_int);
            PLOG(logDEBUG1) << "Attempting to SET value for " << input_oid << " to " << val.val_int;
            pdu = snmp_pdu_create(SNMP_MSG_SET);
        }
        else{
            // SPDLOG_ERROR("Invalid request type, method accepts only GET and SET");
            PLOG(logERROR) << "Invalid request type, method accpets only GET and SET";
        }

        // Read input OID into an OID variable:
        // net-snmp has several methods for creating an OID object
        // their documentation suggests using get_node. read_objid seems like a simpler approach
        // TO DO: investigate update to get_node
        if(!read_objid(input_oid.c_str(), OID, &OID_len)){
            // If oid cannot be created
            // SPDLOG_ERROR("OID could not be created from input: {0}", input_oid);
            PLOG(logERROR) << "OID could not be created from input: " << input_oid;
            return false;
            
        }
        else{
            
            if(request_type == request_type::GET)
            {
                // Add OID to pdu for get request
                snmp_add_null_var(pdu, OID, OID_len);
            }
            else if(request_type == request_type::SET)
            {
                if(val.type == snmp_response_obj::response_type::INTEGER){
                    snmp_add_var(pdu, OID, OID_len, 'i', (std::to_string(val.val_int)).c_str());
                }
                else if(val.type == snmp_response_obj::response_type::STRING){
                    // SPDLOG_ERROR("Setting string value is currently not supported");
                    PLOG(logERROR) << "Setting string value is currently not supported";
                    return false;
                }
            }

            // SPDLOG_INFO("Created OID for input: {0}", input_oid);
            PLOG(logERROR) << "Created OID for input: " << input_oid;
        }
        // Send the request
        int status = snmp_synch_response(ss, pdu, &response);

        // Check response
        if(status == STAT_SUCCESS && response->errstat == SNMP_ERR_NOERROR) {
            
            // SPDLOG_INFO("STAT_SUCCESS, received a response");
            PLOG(logINFO) << "STAT_SUCCESS, received a response";
            
            if(request_type == request_type::GET){
                for(auto vars = response->variables; vars; vars = vars->next_variable){
                    // Get value of variable depending on ASN.1 type
                    // Variable could be a integer, string, bitstring, ojbid, counter : defined here https://github.com/net-snmp/net-snmp/blob/master/include/net-snmp/types.h
                    // get Integer value
                    if(vars->type == ASN_INTEGER){
                        if(vars->val.integer){
                            val.val_int = *vars->val.integer;
                            // SPDLOG_DEBUG("Integer value in object: {0}", val.val_int);
                            PLOG(logDEBUG1) << "Integer value in object: ", val.val_int;
                        }
                        else{
                            // SPDLOG_ERROR("Response specifies type integer, but no integer value found");
                            PLOG(logERROR) << "Response specifies type integer, but no integer value found";
                            return false;
                        }
                        
                    }
                    else if(vars->type == ASN_OCTET_STR){
                        if(vars->val.string){
                            size_t str_len = vars->val_len;
                            for(size_t i = 0; i < str_len; ++i)
                            {
                                val.val_string.push_back(vars->val.string[i]);   
                            }
                            
                        }
                        else{
                            // SPDLOG_ERROR("Response specifies type string, but no string value found");
                            PLOG(logERROR) << "Response specifies type string, but no string value found";
                            return false;
                        }
                    }
                    else{
                        // SPDLOG_ERROR("Received a message type which isn't an integer or string");
                        PLOG(logERROR) << "Received a message type which isn't an integer or string";
                        return false;
                    }
                }
            }
            else if(request_type == request_type::SET){
                
                if(val.type == snmp_response_obj::response_type::INTEGER){
                    // SPDLOG_DEBUG("Success in SET for OID: {0} Value: {1}", input_oid ,val.val_int);
                    PLOG(logDEBUG1) << "Success in SET for OID: " << input_oid << " Value: " << val.val_int;
                }

                else if(val.type == snmp_response_obj::response_type::STRING){
                    // SPDLOG_DEBUG("Success in SET for OID: {0} Value:", input_oid);
                    PLOG(logDEBUG1) << "Success in SET for OID: " << input_oid << " Value: ";
                    for(auto data : val.val_string){
                        // SPDLOG_DEBUG("{0}", data);
                        PLOG(logDEBUG1) << data;
                    }
                }
            }
        
        }
        else 
        {
            log_error(status, request_type, response);
            return false;
        }

        if (response){
            snmp_free_pdu(response);
            OID_len = MAX_OID_LEN;
        }
        
        return true;
    }

    std::string snmp_client::SNMPGet(const std::string &req_oid)
    {
        snmp_pdu *response;

        std::string result = "";
        auto pdu = snmp_pdu_create(SNMP_MSG_GET);
        
        if (!snmp_parse_oid(req_oid.c_str(), OID, &OID_len))
        {
            snmp_perror(req_oid.c_str());
            std::string errMsg = "OID could not be created from input:" + req_oid;
            throw snmp_client_exception(errMsg);
            SOCK_CLEANUP;
        }

        snmp_add_null_var(pdu, OID, OID_len);
        int status = snmp_synch_response(ss, pdu, &response);
        
        if (!response)
        {
            throw snmp_client_exception("No response for SNMP Get request!");
        }
        else if (status == STAT_SUCCESS && response->errstat == SNMP_ERR_NOERROR)
        {
            // SUCCESS: Return the response as result
            for (auto vars = response->variables; vars; vars = vars->next_variable)
            {
                if (vars->type == ASN_OCTET_STR)
                {
                    result = reinterpret_cast<char *>(vars->val.string);
                }
                else
                {
                    throw snmp_client_exception("Received respones type is not a string");
                }
            }
        }
        else
        {
            // FAILURE: Print what went wrong!
            std::string errMsg = snmp_errstring(response->errstat);
            throw snmp_client_exception("Error in packet. Reason:" + errMsg);
        }
        if (response)
            snmp_free_pdu(response);
        return result;
    }    


    int snmp_client::get_port() const
    {
        return port_;
    }


    void snmp_client::log_error(const int& status, const request_type& request_type, snmp_pdu *response) const
    {

        if (status == STAT_SUCCESS)
        {
            // SPDLOG_ERROR("Variable type: {0}",response->variables->type);
            // SPDLOG_ERROR("Error in packet.{0} ", static_cast<std::string>(snmp_errstring(static_cast<int>(response->errstat))));

            PLOG(logERROR) << "Variable type: " << response->variables->type;
            PLOG(logERROR) << "Error in packet " << static_cast<std::string>(snmp_errstring(static_cast<int>(response->errstat)));
        }
        else if (status == STAT_TIMEOUT){ 
        
            // SPDLOG_ERROR("Timeout, no response from server");
            PLOG(logERROR) << "Timeout, no response from server";
        }
        else{
            if(request_type == request_type::GET){
                // SPDLOG_ERROR("Unknown SNMP Error for {0}", "GET");
                PLOG(logERROR) << "Unknown SNMP Error for GET";
            }
            else if(request_type == request_type::SET){
                // SPDLOG_ERROR("Unknown SNMP Error for {0}", "SET");
                PLOG(logERROR) << "Unknown SNMP Error for SET";
            }
        }
        
    }

} // namespace









// #include "SNMPClient.h"

// namespace tmx {
// namespace utils {

// SNMPClient::SNMPClient(const std::string &rsuIP, uint16_t snmp_port, const std::string &snmp_user, const std::string &securityLevel, const std::string &authPassPhrase)
//     : _snmp_port(snmp_port)
//     , _rsuIP(rsuIP)
// {
//     std::string ip_port_string = rsuIP + ":" + std::to_string(snmp_port);
//     char *ip_port = &ip_port_string[0];
//     init_snmp("snmpclient");
//     snmp_sess_init(&session);
//     session.peername = ip_port;
//     session.version = SNMP_VERSION_3;
//     session.securityName = (char *)snmp_user.c_str();
//     session.securityNameLen = snmp_user.length();


//     if (securityLevel == "authPriv") {
//         session.securityLevel = SNMP_SEC_LEVEL_AUTHPRIV;
//     }

//     else if (securityLevel == "authNoPriv") {
//         session.securityLevel = SNMP_SEC_LEVEL_AUTHNOPRIV;
//     }

//     else session.securityLevel = SNMP_SEC_LEVEL_NOAUTH;
//     session.securityAuthProto = snmp_duplicate_objid(usmHMACSHA1AuthProtocol, USM_AUTH_PROTO_SHA_LEN);
//     session.securityAuthProtoLen = USM_AUTH_PROTO_SHA_LEN;
//     session.securityAuthKeyLen = USM_AUTH_KU_LEN;

//     if (generate_Ku(session.securityAuthProto,
//                     session.securityAuthProtoLen,
//                     (u_char *)authPassPhrase.c_str(),authPassPhrase.length(),
//                     session.securityAuthKey,
//                     &session.securityAuthKeyLen) != SNMPERR_SUCCESS)
//     {
//         std::string errMsg = "Error generating Ku from authentication pass phrase. \n";
//         throw SNMPClientException(errMsg);
//     }

//     ss = snmp_open(&session);

//     if (!ss)
//     {
//         std::string errMsg = "Cannot open SNMP session. \n";
//         throw SNMPClientException(errMsg);
//     }
//     else
//     {
//         fprintf(stdout, "snmp session is open.\n");
//     }
// }

// std::string SNMPClient::SNMPGet(const std::string &req_oid)
// {
//     std::string result = "";
//     auto pdu = snmp_pdu_create(SNMP_MSG_GET);
    
//     if (!snmp_parse_oid(req_oid.c_str(), anOID, &anOID_len))
//     {
//         snmp_perror(req_oid.c_str());
//         std::string errMsg = "OID could not be created from input:" + req_oid;
//         throw SNMPClientException(errMsg);
//         SOCK_CLEANUP;
//     }

//     snmp_add_null_var(pdu, anOID, anOID_len);
//     int status = snmp_synch_response(ss, pdu, &response);
    
//     if (!response)
//     {
//         throw SNMPClientException("No response for SNMP Get request!");
//     }
//     else if (status == STAT_SUCCESS && response->errstat == SNMP_ERR_NOERROR)
//     {
//         // SUCCESS: Return the response as result
//         for (auto vars = response->variables; vars; vars = vars->next_variable)
//         {
//             if (vars->type == ASN_OCTET_STR)
//             {
//                 result = reinterpret_cast<char *>(vars->val.string);
//             }
//             else
//             {
//                 throw SNMPClientException("Received respones type is not a string");
//             }
//         }
//     }
//     else
//     {
//         // FAILURE: Print what went wrong!
//         std::string errMsg = snmp_errstring(response->errstat);
//         throw SNMPClientException("Error in packet. Reason:" + errMsg);
//     }
//     if (response)
//         snmp_free_pdu(response);
//     return result;
// }   

// bool SNMPClient::SNMPSet(const std::string &oid, int32_t value)
// {
//     // considering handling as a string here or creating a struct like in TSC
// 	return SNMPClient::SNMPSet(oid, ASN_INTEGER, (const void *)&value, sizeof(value));
// }

// bool SNMPClient::SNMPSet(const std::string &oid, u_char type, const void *value, size_t len)
// {
//     bool rc = true;
//     static int quiet = 0;
//     int             arg;
//     int             count;
//     int             current_name = 0;
//     int             current_type = 0;
//     int             current_value = 0;
//     char           *names[SNMP_MAX_CMDLINE_OIDS];
//     char            types[SNMP_MAX_CMDLINE_OIDS];
//     char           *values[SNMP_MAX_CMDLINE_OIDS];
//     int             status;
//     int             failures = 0;
//     int             exitval = 0;
//     auto pdu = snmp_pdu_create(SNMP_MSG_SET);

//     // if (!snmp_parse_oid(oid.c_str(), anOID, &anOID_len))
//     // {
//     //     snmp_perror(oid.c_str());
//     //     std::string errMsg = "OID could not be created from input:" + oid;
//     //     throw SNMPClientException(errMsg);
//     //     SOCK_CLEANUP;
//     // }
//     for (count = 0; count < current_name; count++) {
//         if (snmp_parse_oid(names[count], anOID, &anOID_len) == NULL) {
//             snmp_perror(names[count]);
//             failures++;
//         } else
//             if (snmp_add_var
//                 (pdu, anOID, anOID_len, types[count], values[count])) {
//             snmp_perror(names[count]);
//             failures++;
//         }
//     }

//     if (failures) {
//         snmp_close(ss);
//         SOCK_CLEANUP;
//         exit(1);
//     }
    
//     //snmp_add_null_var(pdu, anOID, anOID_len);
//     //snmp_pdu_add_variable(pdu, anOID, anOID_len, type, value, len);
//     //snmp_add_var(pdu, anOID, anOID_len, 'i', (std::to_string(current_value).c_str()));

// 	int status = snmp_synch_response(ss, pdu, &response);

//     if (status == STAT_SUCCESS) {
//         if (response->errstat == SNMP_ERR_NOERROR) {
//             if (!quiet) {
//                 for (vars = response->variables; vars;
//                      vars = vars->next_variable)
//                     print_variable(vars->name, vars->name_length, vars);
//             }
//         } else {
//             fprintf(stderr, "Error in packet.\nReason: %s\n",
//                     snmp_errstring(response->errstat));
//             if (response->errindex != 0) {
//                 fprintf(stderr, "Failed object: ");
//                 for (count = 1, vars = response->variables;
//                      vars && (count != response->errindex);
//                      vars = vars->next_variable, count++);
//                 if (vars)
//                     fprint_objid(stderr, vars->name, vars->name_length);
//                 fprintf(stderr, "\n");
//             }
//             exitval = 2;
//         }
//     } else if (status == STAT_TIMEOUT) {
//         fprintf(stderr, "Timeout: No Response from %s\n",
//                 session.peername);
//         exitval = 1;
//     } else {                    /* status == STAT_ERROR */
//         snmp_sess_perror("snmpset", ss);
//         exitval = 1;
//     }

//     if (response)
//         snmp_free_pdu(response);
//     snmp_close(ss);
//     SOCK_CLEANUP;
//     return exitval;
// }

// int SNMPClient::GetPort() const
// {
//     return _snmp_port;
// }

// std::string SNMPClient::GetAddress() const
// {
//     return _rsuIP;
// }

// SNMPClient::~SNMPClient()
// {
//     fprintf(stdout, "Closing snmp session\n");
//     snmp_close(ss);
// }

// }} // namespace tmx::utils
