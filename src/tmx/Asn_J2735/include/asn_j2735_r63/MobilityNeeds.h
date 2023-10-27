/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../J2735_201603DA_with_PMM.ASN"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted -S/home/gmb/TMX-OAM/Build/asn1c/skeletons`
 */

#ifndef	_MobilityNeeds_H_
#define	_MobilityNeeds_H_


#include "asn_application.h"

/* Including external dependencies */
#include "MobilityNeedsType.h"
#include "SeatCount.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* MobilityNeeds */
typedef struct MobilityNeeds {
	MobilityNeedsType_t	 type;
	SeatCount_t	 count;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MobilityNeeds_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MobilityNeeds;
extern asn_SEQUENCE_specifics_t asn_SPC_MobilityNeeds_specs_1;
extern asn_TYPE_member_t asn_MBR_MobilityNeeds_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _MobilityNeeds_H_ */
#include "asn_internal.h"
