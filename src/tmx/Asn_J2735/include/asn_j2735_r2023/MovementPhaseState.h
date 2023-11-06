/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SPAT"
 * 	found in "J2735-SPAT-v2.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -fincludes-quoted -no-gen-JER`
 */

#ifndef	_MovementPhaseState_H_
#define	_MovementPhaseState_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MovementPhaseState {
	MovementPhaseState_unavailable	= 0,
	MovementPhaseState_dark	= 1,
	MovementPhaseState_stop_Then_Proceed	= 2,
	MovementPhaseState_stop_And_Remain	= 3,
	MovementPhaseState_pre_Movement	= 4,
	MovementPhaseState_permissive_Movement_Allowed	= 5,
	MovementPhaseState_protected_Movement_Allowed	= 6,
	MovementPhaseState_permissive_clearance	= 7,
	MovementPhaseState_protected_clearance	= 8,
	MovementPhaseState_caution_Conflicting_Traffic	= 9
} e_MovementPhaseState;

/* MovementPhaseState */
typedef long	 MovementPhaseState_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_MovementPhaseState_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_MovementPhaseState;
extern const asn_INTEGER_specifics_t asn_SPC_MovementPhaseState_specs_1;
asn_struct_free_f MovementPhaseState_free;
asn_struct_print_f MovementPhaseState_print;
asn_constr_check_f MovementPhaseState_constraint;
ber_type_decoder_f MovementPhaseState_decode_ber;
der_type_encoder_f MovementPhaseState_encode_der;
xer_type_decoder_f MovementPhaseState_decode_xer;
xer_type_encoder_f MovementPhaseState_encode_xer;
oer_type_decoder_f MovementPhaseState_decode_oer;
oer_type_encoder_f MovementPhaseState_encode_oer;
per_type_decoder_f MovementPhaseState_decode_uper;
per_type_encoder_f MovementPhaseState_encode_uper;
per_type_decoder_f MovementPhaseState_decode_aper;
per_type_encoder_f MovementPhaseState_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _MovementPhaseState_H_ */
#include "asn_internal.h"
