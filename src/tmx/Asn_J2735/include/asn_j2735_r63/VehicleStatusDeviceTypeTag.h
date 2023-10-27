/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_ASN_CC.asn"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted -fskeletons-copy`
 */

#ifndef	_VehicleStatusDeviceTypeTag_H_
#define	_VehicleStatusDeviceTypeTag_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum VehicleStatusDeviceTypeTag {
	VehicleStatusDeviceTypeTag_unknown	= 0,
	VehicleStatusDeviceTypeTag_lights	= 1,
	VehicleStatusDeviceTypeTag_wipers	= 2,
	VehicleStatusDeviceTypeTag_brakes	= 3,
	VehicleStatusDeviceTypeTag_stab	= 4,
	VehicleStatusDeviceTypeTag_trac	= 5,
	VehicleStatusDeviceTypeTag_abs	= 6,
	VehicleStatusDeviceTypeTag_sunS	= 7,
	VehicleStatusDeviceTypeTag_rainS	= 8,
	VehicleStatusDeviceTypeTag_airTemp	= 9,
	VehicleStatusDeviceTypeTag_steering	= 10,
	VehicleStatusDeviceTypeTag_vertAccelThres	= 11,
	VehicleStatusDeviceTypeTag_vertAccel	= 12,
	VehicleStatusDeviceTypeTag_hozAccelLong	= 13,
	VehicleStatusDeviceTypeTag_hozAccelLat	= 14,
	VehicleStatusDeviceTypeTag_hozAccelCon	= 15,
	VehicleStatusDeviceTypeTag_accel4way	= 16,
	VehicleStatusDeviceTypeTag_confidenceSet	= 17,
	VehicleStatusDeviceTypeTag_obDist	= 18,
	VehicleStatusDeviceTypeTag_obDirect	= 19,
	VehicleStatusDeviceTypeTag_yaw	= 20,
	VehicleStatusDeviceTypeTag_yawRateCon	= 21,
	VehicleStatusDeviceTypeTag_dateTime	= 22,
	VehicleStatusDeviceTypeTag_fullPos	= 23,
	VehicleStatusDeviceTypeTag_position2D	= 24,
	VehicleStatusDeviceTypeTag_position3D	= 25,
	VehicleStatusDeviceTypeTag_vehicle	= 26,
	VehicleStatusDeviceTypeTag_speedHeadC	= 27,
	VehicleStatusDeviceTypeTag_speedC	= 28
	/*
	 * Enumeration is extensible
	 */
} e_VehicleStatusDeviceTypeTag;

/* VehicleStatusDeviceTypeTag */
typedef long	 VehicleStatusDeviceTypeTag_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_VehicleStatusDeviceTypeTag_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_VehicleStatusDeviceTypeTag;
extern const asn_INTEGER_specifics_t asn_SPC_VehicleStatusDeviceTypeTag_specs_1;
asn_struct_free_f VehicleStatusDeviceTypeTag_free;
asn_struct_print_f VehicleStatusDeviceTypeTag_print;
asn_constr_check_f VehicleStatusDeviceTypeTag_constraint;
ber_type_decoder_f VehicleStatusDeviceTypeTag_decode_ber;
der_type_encoder_f VehicleStatusDeviceTypeTag_encode_der;
xer_type_decoder_f VehicleStatusDeviceTypeTag_decode_xer;
xer_type_encoder_f VehicleStatusDeviceTypeTag_encode_xer;
oer_type_decoder_f VehicleStatusDeviceTypeTag_decode_oer;
oer_type_encoder_f VehicleStatusDeviceTypeTag_encode_oer;
per_type_decoder_f VehicleStatusDeviceTypeTag_decode_uper;
per_type_encoder_f VehicleStatusDeviceTypeTag_encode_uper;
per_type_decoder_f VehicleStatusDeviceTypeTag_decode_aper;
per_type_encoder_f VehicleStatusDeviceTypeTag_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _VehicleStatusDeviceTypeTag_H_ */
#include "asn_internal.h"
