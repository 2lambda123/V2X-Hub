/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "BasicSafetyMessage"
 * 	found in "J2735-BasicSafetyMessage.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -fincludes-quoted -no-gen-JER`
 */

#ifndef	_PivotPointDescription_H_
#define	_PivotPointDescription_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Offset-B11.h"
#include "Common_Angle.h"
#include "PivotingAllowed.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* PivotPointDescription */
typedef struct PivotPointDescription {
	Offset_B11_t	 pivotOffset;
	Common_Angle_t	 pivotAngle;
	PivotingAllowed_t	 pivots;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PivotPointDescription_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PivotPointDescription;
extern asn_SEQUENCE_specifics_t asn_SPC_PivotPointDescription_specs_1;
extern asn_TYPE_member_t asn_MBR_PivotPointDescription_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _PivotPointDescription_H_ */
#include "asn_internal.h"
