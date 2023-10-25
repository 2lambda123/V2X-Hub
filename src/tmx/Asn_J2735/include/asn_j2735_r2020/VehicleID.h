/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Common"
 * 	found in "J2735-Common.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -fincludes-quoted -no-gen-JER`
 */

#ifndef	_VehicleID_H_
#define	_VehicleID_H_


#include "asn_application.h"

/* Including external dependencies */
#include "TemporaryID.h"
#include "StationID.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum VehicleID_PR {
	VehicleID_PR_NOTHING,	/* No components present */
	VehicleID_PR_entityID,
	VehicleID_PR_stationID
} VehicleID_PR;

/* VehicleID */
typedef struct VehicleID {
	VehicleID_PR present;
	union VehicleID_u {
		TemporaryID_t	 entityID;
		StationID_t	 stationID;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VehicleID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VehicleID;
extern asn_CHOICE_specifics_t asn_SPC_VehicleID_specs_1;
extern asn_TYPE_member_t asn_MBR_VehicleID_1[2];
extern asn_per_constraints_t asn_PER_type_VehicleID_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _VehicleID_H_ */
#include "asn_internal.h"
