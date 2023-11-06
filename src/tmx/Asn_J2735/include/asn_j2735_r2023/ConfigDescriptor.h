/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ProbeDataConfig"
 * 	found in "ProbeDataConfig-v0.30.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -fincludes-quoted -no-gen-JER`
 */

#ifndef	_ConfigDescriptor_H_
#define	_ConfigDescriptor_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ConfigId.h"
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CfgVehicleClass;
struct RoadAuthorityID;

/* ConfigDescriptor */
typedef struct ConfigDescriptor {
	ConfigId_t	 identifier;
	struct CfgVehicleClass	*vehClass;	/* OPTIONAL */
	struct RoadAuthorityID	*roadAuthorityID;	/* OPTIONAL */
	long	*percentOfResp;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ConfigDescriptor_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ConfigDescriptor;
extern asn_SEQUENCE_specifics_t asn_SPC_ConfigDescriptor_specs_1;
extern asn_TYPE_member_t asn_MBR_ConfigDescriptor_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CfgVehicleClass.h"
#include "RoadAuthorityID.h"

#endif	/* _ConfigDescriptor_H_ */
#include "asn_internal.h"
