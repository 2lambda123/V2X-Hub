/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TestMessage12"
 * 	found in "J2735-TestMessage12.asn"
 * 	`asn1c -gen-UPER -fcompound-names -fincludes-quoted -fno-include-deps`
 */

#ifndef	_TestMessage12_H_
#define	_TestMessage12_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Header;
struct Reg_TestMessage12;

/* TestMessage12 */
typedef struct TestMessage12 {
	struct Header	*header;	/* OPTIONAL */
	struct Reg_TestMessage12	*regional;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TestMessage12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TestMessage12;
extern asn_SEQUENCE_specifics_t asn_SPC_TestMessage12_specs_1;
extern asn_TYPE_member_t asn_MBR_TestMessage12_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _TestMessage12_H_ */
#include "asn_internal.h"
