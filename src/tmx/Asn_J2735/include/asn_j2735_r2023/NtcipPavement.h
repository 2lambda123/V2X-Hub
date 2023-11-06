/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RoadWeatherMessage"
 * 	found in "RoadWeatherMessage.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -fincludes-quoted -no-gen-JER`
 */

#ifndef	_NtcipPavement_H_
#define	_NtcipPavement_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NTCIPEssSurfaceTemperature.h"
#include "SurfaceTempMeasurementStdDev.h"
#include "NTCIPPavementSensorSurfaceCondition.h"
#include "NTCIPEssSurfaceIceOrWaterDepth.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RoadRoughness;

/* NtcipPavement */
typedef struct NtcipPavement {
	NTCIPEssSurfaceTemperature_t	*surfaceTemp;	/* OPTIONAL */
	SurfaceTempMeasurementStdDev_t	*tempStdDev;	/* OPTIONAL */
	NTCIPPavementSensorSurfaceCondition_t	*condition;	/* OPTIONAL */
	NTCIPEssSurfaceIceOrWaterDepth_t	*moistureDepth;	/* OPTIONAL */
	struct RoadRoughness	*roadRoughness;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NtcipPavement_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NtcipPavement;
extern asn_SEQUENCE_specifics_t asn_SPC_NtcipPavement_specs_1;
extern asn_TYPE_member_t asn_MBR_NtcipPavement_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RoadRoughness.h"

#endif	/* _NtcipPavement_H_ */
#include "asn_internal.h"
