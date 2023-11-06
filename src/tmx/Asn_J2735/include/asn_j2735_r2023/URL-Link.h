/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Common"
 * 	found in "J2735-Common-v7.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -fincludes-quoted -no-gen-JER`
 */

#ifndef	_URL_Link_H_
#define	_URL_Link_H_


#include "asn_application.h"

/* Including external dependencies */
#include "IA5String.h"

#ifdef __cplusplus
extern "C" {
#endif

/* URL-Link */
typedef IA5String_t	 URL_Link_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_URL_Link;
asn_struct_free_f URL_Link_free;
asn_struct_print_f URL_Link_print;
asn_constr_check_f URL_Link_constraint;
ber_type_decoder_f URL_Link_decode_ber;
der_type_encoder_f URL_Link_encode_der;
xer_type_decoder_f URL_Link_decode_xer;
xer_type_encoder_f URL_Link_encode_xer;
oer_type_decoder_f URL_Link_decode_oer;
oer_type_encoder_f URL_Link_encode_oer;
per_type_decoder_f URL_Link_decode_uper;
per_type_encoder_f URL_Link_encode_uper;
per_type_decoder_f URL_Link_decode_aper;
per_type_encoder_f URL_Link_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _URL_Link_H_ */
#include "asn_internal.h"
