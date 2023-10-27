/*
 * @file testmessage02.hpp
 *
 *  Created on: May 8, 2016
 *      Author: Gregory M. Baumgardner
 */

#ifndef TMX_J2735_MESSAGES_TESTMESSAGE02_HPP_
#define TMX_J2735_MESSAGES_TESTMESSAGE02_HPP_

#include <cmath>
#include <TestMessage02.h>
#include <tmx/messages/TmxJ2735.hpp>
#include <tmx/j2735_messages/J2735MessageTemplate.hpp>

#if SAEJ2735_SPEC >= 63
// TMX_J2735_DECLARE(tsm6, TestMessage06, api::basicSafetyMessage_D, api::MSGSUBTYPE_BASICSAFETYMESSAGE_STRING)
// #else
TMX_J2735_DECLARE(tsm2, TestMessage02, api::testMessage02, api::MSGSUBTYPE_TESTMESSAGE02_STRING)

// Specialize the unique key function
TMX_J2735_NAMESPACE_START(tmx)
TMX_J2735_NAMESPACE_START(messages)
TMX_J2735_NAMESPACE_START(j2735)

template <>
inline int get_j2735_message_key<tmx::messages::tsm2Message>(std::shared_ptr<TestMessage02> message) {
	// if (message && message->coreData.id.buf) {
	// 	tmx::byte_stream bytes(fmax(message->coreData.id.size, sizeof(int)));
	// 	::memcpy(bytes.data(), message->coreData.id.buf, bytes.size());
	// 	return *((int *)bytes.data());
	// }

	return 1;
}

TMX_J2735_NAMESPACE_END(j2735)
TMX_J2735_NAMESPACE_END(messages)
TMX_J2735_NAMESPACE_END(tmx)

#endif


#endif /* TMX_J2735_MESSAGES_TESTMESSAGE02_HPP_ */
