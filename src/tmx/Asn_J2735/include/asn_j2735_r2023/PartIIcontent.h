/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "BasicSafetyMessage"
 * 	found in "J2735-BasicSafetyMessage-v4.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -fincludes-quoted -no-gen-JER`
 */

#ifndef	_PartIIcontent_H_
#define	_PartIIcontent_H_


#include "asn_application.h"

/* Including external dependencies */
#include "PartII-Id.h"
#include "ANY.h"
#include "asn_ioc.h"
#include "VehicleSafetyExtensions.h"
#include "SpecialVehicleExtensions.h"
#include "SupplementalVehicleExtensions.h"
#include "OPEN_TYPE.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum BSMpartIIExtension__partII_Value_PR {
	BSMpartIIExtension__partII_Value_PR_NOTHING,	/* No components present */
	BSMpartIIExtension__partII_Value_PR_VehicleSafetyExtensions,
	BSMpartIIExtension__partII_Value_PR_SpecialVehicleExtensions,
	BSMpartIIExtension__partII_Value_PR_SupplementalVehicleExtensions
} BSMpartIIExtension__partII_Value_PR;

/* PartIIcontent */
typedef struct BSMpartIIExtension {
	PartII_Id_t	 partII_Id;
	struct BSMpartIIExtension__partII_Value {
		BSMpartIIExtension__partII_Value_PR present;
		union BSMpartIIExtension__partII_Value_u {
			VehicleSafetyExtensions_t	 VehicleSafetyExtensions;
			SpecialVehicleExtensions_t	 SpecialVehicleExtensions;
			SupplementalVehicleExtensions_t	 SupplementalVehicleExtensions;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} partII_Value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BSMpartIIExtension_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BSMpartIIExtension;
extern asn_SEQUENCE_specifics_t asn_SPC_BSMpartIIExtension_specs_1;
extern asn_TYPE_member_t asn_MBR_BSMpartIIExtension_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PartIIcontent_H_ */
#include "asn_internal.h"
