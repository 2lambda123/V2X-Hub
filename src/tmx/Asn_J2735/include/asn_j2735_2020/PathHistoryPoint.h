/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Common"
 * 	found in "J2735-Common.asn"
 * 	`asn1c -gen-UPER -fcompound-names -fincludes-quoted -fno-include-deps`
 */

#ifndef	_PathHistoryPoint_H_
#define	_PathHistoryPoint_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OffsetLL-B18.h"
#include "VertOffset-B12.h"
#include "TimeOffset.h"
#include "Speed.h"
#include "CoarseHeading.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PositionalAccuracy;

/* PathHistoryPoint */
typedef struct PathHistoryPoint {
	OffsetLL_B18_t	 latOffset;
	OffsetLL_B18_t	 lonOffset;
	VertOffset_B12_t	 elevationOffset;
	TimeOffset_t	 timeOffset;
	Speed_t	*speed;	/* OPTIONAL */
	struct PositionalAccuracy	*posAccuracy;	/* OPTIONAL */
	CoarseHeading_t	*heading;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PathHistoryPoint_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PathHistoryPoint;
extern asn_SEQUENCE_specifics_t asn_SPC_PathHistoryPoint_specs_1;
extern asn_TYPE_member_t asn_MBR_PathHistoryPoint_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _PathHistoryPoint_H_ */
#include "asn_internal.h"
