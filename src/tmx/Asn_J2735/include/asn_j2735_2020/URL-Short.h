/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TravelerInformation"
 * 	found in "J2735-TravelerInformation.asn"
 * 	`asn1c -gen-UPER -fcompound-names -fincludes-quoted -fno-include-deps`
 */

#ifndef	_URL_Short_H_
#define	_URL_Short_H_


#include "asn_application.h"

/* Including external dependencies */
#include "IA5String.h"

#ifdef __cplusplus
extern "C" {
#endif

/* URL-Short */
typedef IA5String_t	 URL_Short_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_URL_Short_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_URL_Short;
asn_struct_free_f URL_Short_free;
asn_struct_print_f URL_Short_print;
asn_constr_check_f URL_Short_constraint;
ber_type_decoder_f URL_Short_decode_ber;
der_type_encoder_f URL_Short_encode_der;
xer_type_decoder_f URL_Short_decode_xer;
xer_type_encoder_f URL_Short_encode_xer;
jer_type_encoder_f URL_Short_encode_jer;
oer_type_decoder_f URL_Short_decode_oer;
oer_type_encoder_f URL_Short_encode_oer;
per_type_decoder_f URL_Short_decode_uper;
per_type_encoder_f URL_Short_encode_uper;
per_type_decoder_f URL_Short_decode_aper;
per_type_encoder_f URL_Short_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _URL_Short_H_ */
#include "asn_internal.h"
