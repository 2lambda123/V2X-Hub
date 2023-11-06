/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AddGrpB"
 * 	found in "J2735_201603_ASN_CC.asn"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted -fskeletons-copy`
 */

#ifndef	_Holiday_H_
#define	_Holiday_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Holiday {
	Holiday_weekday	= 0,
	Holiday_holiday	= 1
} e_Holiday;

/* Holiday */
typedef long	 Holiday_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Holiday_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Holiday;
extern const asn_INTEGER_specifics_t asn_SPC_Holiday_specs_1;
asn_struct_free_f Holiday_free;
asn_struct_print_f Holiday_print;
asn_constr_check_f Holiday_constraint;
ber_type_decoder_f Holiday_decode_ber;
der_type_encoder_f Holiday_encode_der;
xer_type_decoder_f Holiday_decode_xer;
xer_type_encoder_f Holiday_encode_xer;
oer_type_decoder_f Holiday_decode_oer;
oer_type_encoder_f Holiday_encode_oer;
per_type_decoder_f Holiday_decode_uper;
per_type_encoder_f Holiday_encode_uper;
per_type_decoder_f Holiday_decode_aper;
per_type_encoder_f Holiday_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Holiday_H_ */
#include "asn_internal.h"