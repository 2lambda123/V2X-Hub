/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Common"
 * 	found in "J2735-Common-v7.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -fincludes-quoted -no-gen-JER`
 */

#ifndef	_Duration_H_
#define	_Duration_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Duration */
typedef long	 Duration_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Duration;
asn_struct_free_f Duration_free;
asn_struct_print_f Duration_print;
asn_constr_check_f Duration_constraint;
ber_type_decoder_f Duration_decode_ber;
der_type_encoder_f Duration_encode_der;
xer_type_decoder_f Duration_decode_xer;
xer_type_encoder_f Duration_encode_xer;
oer_type_decoder_f Duration_decode_oer;
oer_type_encoder_f Duration_encode_oer;
per_type_decoder_f Duration_decode_uper;
per_type_encoder_f Duration_encode_uper;
per_type_decoder_f Duration_decode_aper;
per_type_encoder_f Duration_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Duration_H_ */
#include "asn_internal.h"
