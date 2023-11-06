/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TestMessage09"
 * 	found in "J2735-TestMessage09.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -fincludes-quoted -no-gen-JER`
 */

#ifndef	_TestMessage09_H_
#define	_TestMessage09_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Header;
struct Reg_TestMessage09;

/* TestMessage09 */
typedef struct TestMessage09 {
	struct Header	*header;	/* OPTIONAL */
	struct Reg_TestMessage09	*regional;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TestMessage09_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TestMessage09;
extern asn_SEQUENCE_specifics_t asn_SPC_TestMessage09_specs_1;
extern asn_TYPE_member_t asn_MBR_TestMessage09_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Header.h"
#include "RegionalExtension.h"

#endif	/* _TestMessage09_H_ */
#include "asn_internal.h"
