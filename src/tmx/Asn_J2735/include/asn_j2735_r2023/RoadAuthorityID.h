/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Common"
 * 	found in "J2735-Common-v7.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -fincludes-quoted -no-gen-JER`
 */

#ifndef	_RoadAuthorityID_H_
#define	_RoadAuthorityID_H_


#include "asn_application.h"

/* Including external dependencies */
#include "FullRoadAuthorityID.h"
#include "RelativeRoadAuthorityID.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RoadAuthorityID_PR {
	RoadAuthorityID_PR_NOTHING,	/* No components present */
	RoadAuthorityID_PR_fullRdAuthID,
	RoadAuthorityID_PR_relRdAuthID
	/* Extensions may appear below */
	
} RoadAuthorityID_PR;

/* RoadAuthorityID */
typedef struct RoadAuthorityID {
	RoadAuthorityID_PR present;
	union RoadAuthorityID_u {
		FullRoadAuthorityID_t	 fullRdAuthID;
		RelativeRoadAuthorityID_t	 relRdAuthID;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RoadAuthorityID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RoadAuthorityID;
extern asn_CHOICE_specifics_t asn_SPC_RoadAuthorityID_specs_1;
extern asn_TYPE_member_t asn_MBR_RoadAuthorityID_1[2];
extern asn_per_constraints_t asn_PER_type_RoadAuthorityID_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _RoadAuthorityID_H_ */
#include "asn_internal.h"
