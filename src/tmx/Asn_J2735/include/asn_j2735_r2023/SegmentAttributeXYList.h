/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Common"
 * 	found in "J2735-Common-v7.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -fincludes-quoted -no-gen-JER`
 */

#ifndef	_SegmentAttributeXYList_H_
#define	_SegmentAttributeXYList_H_


#include "asn_application.h"

/* Including external dependencies */
#include "SegmentAttributeXY.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SegmentAttributeXYList */
typedef struct SegmentAttributeXYList {
	A_SEQUENCE_OF(SegmentAttributeXY_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SegmentAttributeXYList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SegmentAttributeXYList;
extern asn_SET_OF_specifics_t asn_SPC_SegmentAttributeXYList_specs_1;
extern asn_TYPE_member_t asn_MBR_SegmentAttributeXYList_1[1];
extern asn_per_constraints_t asn_PER_type_SegmentAttributeXYList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SegmentAttributeXYList_H_ */
#include "asn_internal.h"
