/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../J2735_R41_Source_mod.ASN"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#ifndef	_RestrictionUserType_H_
#define	_RestrictionUserType_H_


#include "asn_application.h"

/* Including external dependencies */
#include "RestrictionAppliesTo.h"
#include "RegionalRestrictionUserType.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RestrictionUserType_PR {
	RestrictionUserType_PR_NOTHING,	/* No components present */
	RestrictionUserType_PR_basicType,
	RestrictionUserType_PR_regional
} RestrictionUserType_PR;

/* RestrictionUserType */
typedef struct RestrictionUserType {
	RestrictionUserType_PR present;
	union RestrictionUserType_u {
		RestrictionAppliesTo_t	 basicType;
		RegionalRestrictionUserType_t	 regional;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RestrictionUserType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RestrictionUserType;

#ifdef __cplusplus
}
#endif

#endif	/* _RestrictionUserType_H_ */
#include "asn_internal.h"
