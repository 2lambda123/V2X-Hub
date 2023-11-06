/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TravelerInformation"
 * 	found in "J2735-TravelerInformation-v2.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -fincludes-quoted -no-gen-JER`
 */

#ifndef	_TravelerInfoType_H_
#define	_TravelerInfoType_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TravelerInfoType {
	TravelerInfoType_unknown	= 0,
	TravelerInfoType_advisory	= 1,
	TravelerInfoType_roadSignage	= 2,
	TravelerInfoType_commercialSignage	= 3
	/*
	 * Enumeration is extensible
	 */
} e_TravelerInfoType;

/* TravelerInfoType */
typedef long	 TravelerInfoType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_TravelerInfoType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_TravelerInfoType;
extern const asn_INTEGER_specifics_t asn_SPC_TravelerInfoType_specs_1;
asn_struct_free_f TravelerInfoType_free;
asn_struct_print_f TravelerInfoType_print;
asn_constr_check_f TravelerInfoType_constraint;
ber_type_decoder_f TravelerInfoType_decode_ber;
der_type_encoder_f TravelerInfoType_encode_der;
xer_type_decoder_f TravelerInfoType_decode_xer;
xer_type_encoder_f TravelerInfoType_encode_xer;
oer_type_decoder_f TravelerInfoType_decode_oer;
oer_type_encoder_f TravelerInfoType_encode_oer;
per_type_decoder_f TravelerInfoType_decode_uper;
per_type_encoder_f TravelerInfoType_encode_uper;
per_type_decoder_f TravelerInfoType_decode_aper;
per_type_encoder_f TravelerInfoType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _TravelerInfoType_H_ */
#include "asn_internal.h"
