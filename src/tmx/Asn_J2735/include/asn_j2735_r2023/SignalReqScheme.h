/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Common"
 * 	found in "J2735-Common-v7.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -fincludes-quoted -no-gen-JER`
 */

#ifndef	_SignalReqScheme_H_
#define	_SignalReqScheme_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SignalReqScheme */
typedef OCTET_STRING_t	 SignalReqScheme_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SignalReqScheme;
asn_struct_free_f SignalReqScheme_free;
asn_struct_print_f SignalReqScheme_print;
asn_constr_check_f SignalReqScheme_constraint;
ber_type_decoder_f SignalReqScheme_decode_ber;
der_type_encoder_f SignalReqScheme_encode_der;
xer_type_decoder_f SignalReqScheme_decode_xer;
xer_type_encoder_f SignalReqScheme_encode_xer;
oer_type_decoder_f SignalReqScheme_decode_oer;
oer_type_encoder_f SignalReqScheme_encode_oer;
per_type_decoder_f SignalReqScheme_decode_uper;
per_type_encoder_f SignalReqScheme_encode_uper;
per_type_decoder_f SignalReqScheme_decode_aper;
per_type_encoder_f SignalReqScheme_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _SignalReqScheme_H_ */
#include "asn_internal.h"
