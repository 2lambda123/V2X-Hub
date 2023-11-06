/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ProbeDataReport"
 * 	found in "ProbeDataReport-v0.30.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -fincludes-quoted -no-gen-JER`
 */

#ifndef	_RptRoadRoughness_H_
#define	_RptRoadRoughness_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ProbeDataReport_MeanVariation.h"
#include "StdDev.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* RptRoadRoughness */
typedef struct RptRoadRoughness {
	ProbeDataReport_MeanVariation_t	 meanVerticalVariation;
	StdDev_t	*verticalVariationStdDev;	/* OPTIONAL */
	ProbeDataReport_MeanVariation_t	*meanHorizontalVariation;	/* OPTIONAL */
	StdDev_t	*horizontalVariationStdDev;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RptRoadRoughness_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RptRoadRoughness;
extern asn_SEQUENCE_specifics_t asn_SPC_RptRoadRoughness_specs_1;
extern asn_TYPE_member_t asn_MBR_RptRoadRoughness_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _RptRoadRoughness_H_ */
#include "asn_internal.h"
