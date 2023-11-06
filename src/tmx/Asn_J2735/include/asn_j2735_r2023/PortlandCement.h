/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Common"
 * 	found in "J2735-Common-v7.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -fincludes-quoted -no-gen-JER`
 */

#ifndef	_PortlandCement_H_
#define	_PortlandCement_H_


#include "asn_application.h"

/* Including external dependencies */
#include "PortlandCementType.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* PortlandCement */
typedef struct PortlandCement {
	PortlandCementType_t	 type;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PortlandCement_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PortlandCement;
extern asn_SEQUENCE_specifics_t asn_SPC_PortlandCement_specs_1;
extern asn_TYPE_member_t asn_MBR_PortlandCement_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _PortlandCement_H_ */
#include "asn_internal.h"
