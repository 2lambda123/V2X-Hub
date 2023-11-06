/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RoadWeatherMessage"
 * 	found in "RoadWeatherMessage.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -fincludes-quoted -no-gen-JER`
 */

#ifndef	_NTCIPEssPaveTreatProductType_H_
#define	_NTCIPEssPaveTreatProductType_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NTCIPEssPaveTreatProductType {
	NTCIPEssPaveTreatProductType_other	= 1,
	NTCIPEssPaveTreatProductType_sand	= 2,
	NTCIPEssPaveTreatProductType_dirt	= 3,
	NTCIPEssPaveTreatProductType_gravel	= 4,
	NTCIPEssPaveTreatProductType_cinders	= 5,
	NTCIPEssPaveTreatProductType_water	= 6,
	NTCIPEssPaveTreatProductType_enhancedSalts	= 7,
	NTCIPEssPaveTreatProductType_naCl	= 8,
	NTCIPEssPaveTreatProductType_caCl	= 9,
	NTCIPEssPaveTreatProductType_mgCl	= 10,
	NTCIPEssPaveTreatProductType_cMA	= 11,
	NTCIPEssPaveTreatProductType_kAC	= 12,
	NTCIPEssPaveTreatProductType_naFormate	= 13,
	NTCIPEssPaveTreatProductType_naA	= 14
	/*
	 * Enumeration is extensible
	 */
} e_NTCIPEssPaveTreatProductType;

/* NTCIPEssPaveTreatProductType */
typedef long	 NTCIPEssPaveTreatProductType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NTCIPEssPaveTreatProductType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NTCIPEssPaveTreatProductType;
extern const asn_INTEGER_specifics_t asn_SPC_NTCIPEssPaveTreatProductType_specs_1;
asn_struct_free_f NTCIPEssPaveTreatProductType_free;
asn_struct_print_f NTCIPEssPaveTreatProductType_print;
asn_constr_check_f NTCIPEssPaveTreatProductType_constraint;
ber_type_decoder_f NTCIPEssPaveTreatProductType_decode_ber;
der_type_encoder_f NTCIPEssPaveTreatProductType_encode_der;
xer_type_decoder_f NTCIPEssPaveTreatProductType_decode_xer;
xer_type_encoder_f NTCIPEssPaveTreatProductType_encode_xer;
oer_type_decoder_f NTCIPEssPaveTreatProductType_decode_oer;
oer_type_encoder_f NTCIPEssPaveTreatProductType_encode_oer;
per_type_decoder_f NTCIPEssPaveTreatProductType_decode_uper;
per_type_encoder_f NTCIPEssPaveTreatProductType_encode_uper;
per_type_decoder_f NTCIPEssPaveTreatProductType_decode_aper;
per_type_encoder_f NTCIPEssPaveTreatProductType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NTCIPEssPaveTreatProductType_H_ */
#include "asn_internal.h"
