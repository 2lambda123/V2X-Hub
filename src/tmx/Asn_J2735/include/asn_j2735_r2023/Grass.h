/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Common"
 * 	found in "J2735-Common-v7.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -fincludes-quoted -no-gen-JER`
 */

#ifndef	_Grass_H_
#define	_Grass_H_


#include "asn_application.h"

/* Including external dependencies */
#include "GrassType.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Grass */
typedef struct Grass {
	GrassType_t	 type;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Grass_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Grass;
extern asn_SEQUENCE_specifics_t asn_SPC_Grass_specs_1;
extern asn_TYPE_member_t asn_MBR_Grass_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _Grass_H_ */
#include "asn_internal.h"
