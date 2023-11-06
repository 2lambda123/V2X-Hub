/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Common"
 * 	found in "J2735-Common-v7.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -fincludes-quoted -no-gen-JER`
 */

#ifndef	_VehicleEventFlags_H_
#define	_VehicleEventFlags_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BIT_STRING.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum VehicleEventFlags {
	VehicleEventFlags_eventHazardLights	= 0,
	VehicleEventFlags_eventStopLineViolation	= 1,
	VehicleEventFlags_eventABSactivated	= 2,
	VehicleEventFlags_eventTractionControlLoss	= 3,
	VehicleEventFlags_eventStabilityControlactivated	= 4,
	VehicleEventFlags_eventHazardousMaterials	= 5,
	VehicleEventFlags_eventReserved1	= 6,
	VehicleEventFlags_eventHardBraking	= 7,
	VehicleEventFlags_eventLightsChanged	= 8,
	VehicleEventFlags_eventWipersChanged	= 9,
	VehicleEventFlags_eventFlatTire	= 10,
	VehicleEventFlags_eventDisabledVehicle	= 11,
	VehicleEventFlags_eventAirBagDeployment	= 12,
	VehicleEventFlags_eventJackKnife	= 13
} e_VehicleEventFlags;

/* VehicleEventFlags */
typedef BIT_STRING_t	 VehicleEventFlags_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_VehicleEventFlags_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_VehicleEventFlags;
asn_struct_free_f VehicleEventFlags_free;
asn_struct_print_f VehicleEventFlags_print;
asn_constr_check_f VehicleEventFlags_constraint;
ber_type_decoder_f VehicleEventFlags_decode_ber;
der_type_encoder_f VehicleEventFlags_encode_der;
xer_type_decoder_f VehicleEventFlags_decode_xer;
xer_type_encoder_f VehicleEventFlags_encode_xer;
oer_type_decoder_f VehicleEventFlags_decode_oer;
oer_type_encoder_f VehicleEventFlags_encode_oer;
per_type_decoder_f VehicleEventFlags_decode_uper;
per_type_encoder_f VehicleEventFlags_encode_uper;
per_type_decoder_f VehicleEventFlags_decode_aper;
per_type_encoder_f VehicleEventFlags_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _VehicleEventFlags_H_ */
#include "asn_internal.h"
