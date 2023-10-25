/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Common"
 * 	found in "J2735-Common.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -fincludes-quoted -no-gen-JER`
 */

#ifndef	_AuxiliaryBrakeStatus_H_
#define	_AuxiliaryBrakeStatus_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AuxiliaryBrakeStatus {
	AuxiliaryBrakeStatus_unavailable	= 0,
	AuxiliaryBrakeStatus_off	= 1,
	AuxiliaryBrakeStatus_on	= 2,
	AuxiliaryBrakeStatus_reserved	= 3
} e_AuxiliaryBrakeStatus;

/* AuxiliaryBrakeStatus */
typedef long	 AuxiliaryBrakeStatus_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_AuxiliaryBrakeStatus_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_AuxiliaryBrakeStatus;
extern const asn_INTEGER_specifics_t asn_SPC_AuxiliaryBrakeStatus_specs_1;
asn_struct_free_f AuxiliaryBrakeStatus_free;
asn_struct_print_f AuxiliaryBrakeStatus_print;
asn_constr_check_f AuxiliaryBrakeStatus_constraint;
ber_type_decoder_f AuxiliaryBrakeStatus_decode_ber;
der_type_encoder_f AuxiliaryBrakeStatus_encode_der;
xer_type_decoder_f AuxiliaryBrakeStatus_decode_xer;
xer_type_encoder_f AuxiliaryBrakeStatus_encode_xer;
oer_type_decoder_f AuxiliaryBrakeStatus_decode_oer;
oer_type_encoder_f AuxiliaryBrakeStatus_encode_oer;
per_type_decoder_f AuxiliaryBrakeStatus_decode_uper;
per_type_encoder_f AuxiliaryBrakeStatus_encode_uper;
per_type_decoder_f AuxiliaryBrakeStatus_decode_aper;
per_type_encoder_f AuxiliaryBrakeStatus_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _AuxiliaryBrakeStatus_H_ */
#include "asn_internal.h"
