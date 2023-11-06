/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ProbeDataConfig"
 * 	found in "ProbeDataConfig-v0.30.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -fincludes-quoted -no-gen-JER`
 */

#ifndef	_CfgEventRecurrence_H_
#define	_CfgEventRecurrence_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BOOLEAN.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct DTime;
struct DDate;

/* CfgEventRecurrence */
typedef struct CfgEventRecurrence {
	struct DTime	*startTime;	/* OPTIONAL */
	struct DTime	*endTime;	/* OPTIONAL */
	struct DDate	*startDate;	/* OPTIONAL */
	struct DDate	*endDate;	/* OPTIONAL */
	BOOLEAN_t	 monday;
	BOOLEAN_t	 tuesday;
	BOOLEAN_t	 wednesday;
	BOOLEAN_t	 thursday;
	BOOLEAN_t	 friday;
	BOOLEAN_t	 saturday;
	BOOLEAN_t	 sunday;
	BOOLEAN_t	*exclusion;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CfgEventRecurrence_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CfgEventRecurrence;
extern asn_SEQUENCE_specifics_t asn_SPC_CfgEventRecurrence_specs_1;
extern asn_TYPE_member_t asn_MBR_CfgEventRecurrence_1[12];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "DTime.h"
#include "DDate.h"

#endif	/* _CfgEventRecurrence_H_ */
#include "asn_internal.h"
