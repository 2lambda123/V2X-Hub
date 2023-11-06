/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Common"
 * 	found in "J2735-Common-v7.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -fincludes-quoted -no-gen-JER`
 */

#ifndef	_AsphaltOrTarType_H_
#define	_AsphaltOrTarType_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AsphaltOrTarType {
	AsphaltOrTarType_newSharp	= 0,
	AsphaltOrTarType_traveled	= 1,
	AsphaltOrTarType_trafficPolished	= 2,
	AsphaltOrTarType_excessTar	= 3
	/*
	 * Enumeration is extensible
	 */
} e_AsphaltOrTarType;

/* AsphaltOrTarType */
typedef long	 AsphaltOrTarType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_AsphaltOrTarType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_AsphaltOrTarType;
extern const asn_INTEGER_specifics_t asn_SPC_AsphaltOrTarType_specs_1;
asn_struct_free_f AsphaltOrTarType_free;
asn_struct_print_f AsphaltOrTarType_print;
asn_constr_check_f AsphaltOrTarType_constraint;
ber_type_decoder_f AsphaltOrTarType_decode_ber;
der_type_encoder_f AsphaltOrTarType_encode_der;
xer_type_decoder_f AsphaltOrTarType_decode_xer;
xer_type_encoder_f AsphaltOrTarType_encode_xer;
oer_type_decoder_f AsphaltOrTarType_decode_oer;
oer_type_encoder_f AsphaltOrTarType_encode_oer;
per_type_decoder_f AsphaltOrTarType_decode_uper;
per_type_encoder_f AsphaltOrTarType_encode_uper;
per_type_decoder_f AsphaltOrTarType_decode_aper;
per_type_encoder_f AsphaltOrTarType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _AsphaltOrTarType_H_ */
#include "asn_internal.h"
