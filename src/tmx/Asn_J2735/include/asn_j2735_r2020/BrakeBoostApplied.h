/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Common"
 * 	found in "J2735-Common.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -fincludes-quoted -no-gen-JER`
 */

#ifndef	_BrakeBoostApplied_H_
#define	_BrakeBoostApplied_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum BrakeBoostApplied {
	BrakeBoostApplied_unavailable	= 0,
	BrakeBoostApplied_off	= 1,
	BrakeBoostApplied_on	= 2
} e_BrakeBoostApplied;

/* BrakeBoostApplied */
typedef long	 BrakeBoostApplied_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_BrakeBoostApplied_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_BrakeBoostApplied;
extern const asn_INTEGER_specifics_t asn_SPC_BrakeBoostApplied_specs_1;
asn_struct_free_f BrakeBoostApplied_free;
asn_struct_print_f BrakeBoostApplied_print;
asn_constr_check_f BrakeBoostApplied_constraint;
ber_type_decoder_f BrakeBoostApplied_decode_ber;
der_type_encoder_f BrakeBoostApplied_encode_der;
xer_type_decoder_f BrakeBoostApplied_decode_xer;
xer_type_encoder_f BrakeBoostApplied_encode_xer;
oer_type_decoder_f BrakeBoostApplied_decode_oer;
oer_type_encoder_f BrakeBoostApplied_encode_oer;
per_type_decoder_f BrakeBoostApplied_decode_uper;
per_type_encoder_f BrakeBoostApplied_encode_uper;
per_type_decoder_f BrakeBoostApplied_decode_aper;
per_type_encoder_f BrakeBoostApplied_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _BrakeBoostApplied_H_ */
#include "asn_internal.h"
