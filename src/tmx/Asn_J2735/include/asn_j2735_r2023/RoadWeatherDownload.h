/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RoadWeatherMessage"
 * 	found in "RoadWeatherMessage.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -fincludes-quoted -no-gen-JER`
 */

#ifndef	_RoadWeatherDownload_H_
#define	_RoadWeatherDownload_H_


#include "asn_application.h"

/* Including external dependencies */
#include "TravelerDataFrameList.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct WDMSFleetData;

/* RoadWeatherDownload */
typedef struct RoadWeatherDownload {
	TravelerDataFrameList_t	 travelerData;
	struct WDMSFleetData	*wdmsFleetData;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RoadWeatherDownload_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RoadWeatherDownload;
extern asn_SEQUENCE_specifics_t asn_SPC_RoadWeatherDownload_specs_1;
extern asn_TYPE_member_t asn_MBR_RoadWeatherDownload_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "WDMSFleetData.h"

#endif	/* _RoadWeatherDownload_H_ */
#include "asn_internal.h"
