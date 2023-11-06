/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ProbeDataConfig"
 * 	found in "ProbeDataConfig-v0.30.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -fincludes-quoted -no-gen-JER`
 */

#ifndef	_ConfigTemporalBoundary_H_
#define	_ConfigTemporalBoundary_H_


#include "asn_application.h"

/* Including external dependencies */
#include "DDateTime.h"
#include "CfgEventRecurrence.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ConfigTemporalBoundary */
typedef struct ConfigTemporalBoundary {
	DDateTime_t	 beginTime;
	DDateTime_t	 endTime;
	CfgEventRecurrence_t	 recurring;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ConfigTemporalBoundary_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ConfigTemporalBoundary;
extern asn_SEQUENCE_specifics_t asn_SPC_ConfigTemporalBoundary_specs_1;
extern asn_TYPE_member_t asn_MBR_ConfigTemporalBoundary_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _ConfigTemporalBoundary_H_ */
#include "asn_internal.h"