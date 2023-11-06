/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ProbeDataConfig"
 * 	found in "ProbeDataConfig-v0.30.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -fincludes-quoted -no-gen-JER`
 */

#ifndef	_ProbeDataConfigMessage_H_
#define	_ProbeDataConfigMessage_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProbeDataConfig;

/* ProbeDataConfigMessage */
typedef struct ProbeDataConfigMessage {
	A_SEQUENCE_OF(struct ProbeDataConfig) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProbeDataConfigMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ProbeDataConfigMessage;
extern asn_SET_OF_specifics_t asn_SPC_ProbeDataConfigMessage_specs_1;
extern asn_TYPE_member_t asn_MBR_ProbeDataConfigMessage_1[1];
extern asn_per_constraints_t asn_PER_type_ProbeDataConfigMessage_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ProbeDataConfig.h"

#endif	/* _ProbeDataConfigMessage_H_ */
#include "asn_internal.h"
