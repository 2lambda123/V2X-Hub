/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TestMessage13"
 * 	found in "J2735-TestMessage13.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -fincludes-quoted -no-gen-JER`
 */

#ifndef	_TestMessage13_H_
#define	_TestMessage13_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Header;
struct Reg_TestMessage13;

/* TestMessage13 */
typedef struct TestMessage13 {
	struct Header	*header;	/* OPTIONAL */
	struct Reg_TestMessage13	*regional;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TestMessage13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TestMessage13;
extern asn_SEQUENCE_specifics_t asn_SPC_TestMessage13_specs_1;
extern asn_TYPE_member_t asn_MBR_TestMessage13_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Header.h"
#include "RegionalExtension.h"

#endif	/* _TestMessage13_H_ */
#include "asn_internal.h"
