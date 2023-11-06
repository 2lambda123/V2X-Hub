/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Common"
 * 	found in "J2735-Common-v7.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -fincludes-quoted -no-gen-JER`
 */

#ifndef	_FuelType_H_
#define	_FuelType_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* FuelType */
typedef long	 FuelType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_FuelType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_FuelType;
asn_struct_free_f FuelType_free;
asn_struct_print_f FuelType_print;
asn_constr_check_f FuelType_constraint;
ber_type_decoder_f FuelType_decode_ber;
der_type_encoder_f FuelType_encode_der;
xer_type_decoder_f FuelType_decode_xer;
xer_type_encoder_f FuelType_encode_xer;
oer_type_decoder_f FuelType_decode_oer;
oer_type_encoder_f FuelType_encode_oer;
per_type_decoder_f FuelType_decode_uper;
per_type_encoder_f FuelType_encode_uper;
per_type_decoder_f FuelType_decode_aper;
per_type_encoder_f FuelType_encode_aper;
#define FuelType_unknownFuel	((FuelType_t)0)
#define FuelType_gasoline	((FuelType_t)1)
#define FuelType_ethanol	((FuelType_t)2)
#define FuelType_diesel	((FuelType_t)3)
#define FuelType_electric	((FuelType_t)4)
#define FuelType_hybrid	((FuelType_t)5)
#define FuelType_hydrogen	((FuelType_t)6)
#define FuelType_natGasLiquid	((FuelType_t)7)
#define FuelType_natGasComp	((FuelType_t)8)
#define FuelType_propane	((FuelType_t)9)

#ifdef __cplusplus
}
#endif

#endif	/* _FuelType_H_ */
#include "asn_internal.h"
