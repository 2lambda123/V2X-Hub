/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AddGrpC"
 * 	found in "J2735_201603_ASN_CC.asn"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted -fskeletons-copy`
 */

#ifndef	_SignalHeadLocationList_H_
#define	_SignalHeadLocationList_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SignalHeadLocation;

/* SignalHeadLocationList */
typedef struct SignalHeadLocationList {
	A_SEQUENCE_OF(struct SignalHeadLocation) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SignalHeadLocationList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SignalHeadLocationList;
extern asn_SET_OF_specifics_t asn_SPC_SignalHeadLocationList_specs_1;
extern asn_TYPE_member_t asn_MBR_SignalHeadLocationList_1[1];
extern asn_per_constraints_t asn_PER_type_SignalHeadLocationList_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SignalHeadLocation.h"

#endif	/* _SignalHeadLocationList_H_ */
#include "asn_internal.h"
