/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "BasicSafetyMessage"
 * 	found in "J2735-BasicSafetyMessage-v4.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -fincludes-quoted -no-gen-JER`
 */

#ifndef	_ObstacleDetection_H_
#define	_ObstacleDetection_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ObstacleDistance.h"
#include "ObstacleDirection.h"
#include "ITIScodes.h"
#include "GenericLocations.h"
#include "DDateTime.h"
#include "VerticalAccelerationThreshold.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ObstacleDetection */
typedef struct ObstacleDetection {
	ObstacleDistance_t	 obDist;
	ObstacleDirection_t	 obDirect;
	ITIScodes_t	*description;	/* OPTIONAL */
	GenericLocations_t	*locationDetails;	/* OPTIONAL */
	DDateTime_t	 dateTime;
	VerticalAccelerationThreshold_t	*vertEvent;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ObstacleDetection_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ObstacleDetection;
extern asn_SEQUENCE_specifics_t asn_SPC_ObstacleDetection_specs_1;
extern asn_TYPE_member_t asn_MBR_ObstacleDetection_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _ObstacleDetection_H_ */
#include "asn_internal.h"
