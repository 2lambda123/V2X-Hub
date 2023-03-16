#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "include/CARMASimulationConnection.hpp"
#include <WGS84Point.h>
#include <kafka/mock_kafka_producer_worker.h>
#include <MockUdpClient.h>
#include <MockUdpServer.h>

using testing::_;
using testing::Return;
using testing::Throw;
using testing::DoDefault;
using testing::SetArgPointee;

namespace CARMASimulationAdapter {

    class TestCARMASimulationConnection : public ::testing::Test {
        protected:
            void SetUp() override {
                // Initialize CARMA Simulation connection with (0,0,0) location and mock kafka producer.
                tmx::utils::WGS84Point location; 
                std::shared_ptr<kafka_clients::mock_kafka_producer_worker> producer = std::make_shared<kafka_clients::mock_kafka_producer_worker>();
                connection = std::make_shared<CARMASimulationConnection>("127.0.0.1", 1212, "127.0.0.1", 1213, 1214, location, producer);

            }
            void TearDown() override {

            }
        public:
            std::shared_ptr<CARMASimulationConnection> connection;
        

    };
    TEST_F( TestCARMASimulationConnection, initialize) {
        ASSERT_FALSE(connection->is_connected());
    }

    TEST_F( TestCARMASimulationConnection, forward_message) {
        std::shared_ptr<MockUpdClient> client = std::make_shared<MockUpdClient>();
        std::string test_message = "message";
        EXPECT_CALL( *client, Send(test_message) ).Times(2).WillOnce(testing::DoAll(Return(-1))).WillRepeatedly(testing::DoAll(Return(test_message.size())));
        ASSERT_THROW(connection->forward_message(test_message, client), UdpClientRuntimeError);
        connection->forward_message(test_message, client);
    }

    TEST_F( TestCARMASimulationConnection, consume_msg){
        std::shared_ptr<MockUpdServer> server = std::make_shared<MockUpdServer>();
        char *msg_data;
        std::string test_string = "Test Message";
        const char *test_msg = test_string.c_str();
        EXPECT_CALL( *server, TimedReceive(msg_data, 1000, 5) ).Times(2).WillOnce(testing::DoAll(Return(-1))).WillRepeatedly( testing::DoAll( SetArgPointee<0>(*test_msg),Return(100)));
        ASSERT_THROW(connection->consume_server_message(server), UdpServerRuntimeError);
        std::string msg = connection->consume_server_message(server);
        ASSERT_EQ(test_string.compare( msg) , 0);
    }
}