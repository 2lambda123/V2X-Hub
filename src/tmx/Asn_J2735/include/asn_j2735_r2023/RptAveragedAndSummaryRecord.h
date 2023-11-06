/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ProbeDataReport"
 * 	found in "ProbeDataReport-v0.30.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -fincludes-quoted -no-gen-JER`
 */

#ifndef	_RptAveragedAndSummaryRecord_H_
#define	_RptAveragedAndSummaryRecord_H_


#include "asn_application.h"

/* Including external dependencies */
#include "DDateTime.h"
#include "Position3D.h"
#include "PositionalAccuracy.h"
#include "RptAvgAndSummaryRecordData.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* RptAveragedAndSummaryRecord */
typedef struct RptAveragedAndSummaryRecord {
	DDateTime_t	 startTime;
	Position3D_t	 startLoc;
	PositionalAccuracy_t	 startAccOfPos;
	DDateTime_t	 endTime;
	Position3D_t	 endLoc;
	PositionalAccuracy_t	 endAccOfPos;
	RptAvgAndSummaryRecordData_t	 record;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RptAveragedAndSummaryRecord_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RptAveragedAndSummaryRecord;
extern asn_SEQUENCE_specifics_t asn_SPC_RptAveragedAndSummaryRecord_specs_1;
extern asn_TYPE_member_t asn_MBR_RptAveragedAndSummaryRecord_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _RptAveragedAndSummaryRecord_H_ */
#include "asn_internal.h"
