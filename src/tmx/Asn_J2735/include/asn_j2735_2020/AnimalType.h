/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PersonalSafetyMessage"
 * 	found in "J2735-PersonalSafetyMessage.asn"
 * 	`asn1c -gen-UPER -fcompound-names -fincludes-quoted -fno-include-deps`
 */

#ifndef	_AnimalType_H_
#define	_AnimalType_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AnimalType {
	AnimalType_unavailable	= 0,
	AnimalType_serviceUse	= 1,
	AnimalType_pet	= 2,
	AnimalType_farm	= 3
	/*
	 * Enumeration is extensible
	 */
} e_AnimalType;

/* AnimalType */
typedef long	 AnimalType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_AnimalType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_AnimalType;
extern const asn_INTEGER_specifics_t asn_SPC_AnimalType_specs_1;
asn_struct_free_f AnimalType_free;
asn_struct_print_f AnimalType_print;
asn_constr_check_f AnimalType_constraint;
ber_type_decoder_f AnimalType_decode_ber;
der_type_encoder_f AnimalType_encode_der;
xer_type_decoder_f AnimalType_decode_xer;
xer_type_encoder_f AnimalType_encode_xer;
jer_type_encoder_f AnimalType_encode_jer;
oer_type_decoder_f AnimalType_decode_oer;
oer_type_encoder_f AnimalType_encode_oer;
per_type_decoder_f AnimalType_decode_uper;
per_type_encoder_f AnimalType_encode_uper;
per_type_decoder_f AnimalType_decode_aper;
per_type_encoder_f AnimalType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _AnimalType_H_ */
#include "asn_internal.h"
