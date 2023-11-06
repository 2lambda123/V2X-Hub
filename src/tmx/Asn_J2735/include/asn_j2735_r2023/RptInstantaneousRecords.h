/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ProbeDataReport"
 * 	found in "ProbeDataReport-v0.30.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -fincludes-quoted -no-gen-JER`
 */

#ifndef	_RptInstantaneousRecords_H_
#define	_RptInstantaneousRecords_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RptInstantaneousRecord;

/* RptInstantaneousRecords */
typedef struct RptInstantaneousRecords {
	A_SEQUENCE_OF(struct RptInstantaneousRecord) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RptInstantaneousRecords_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RptInstantaneousRecords;
extern asn_SET_OF_specifics_t asn_SPC_RptInstantaneousRecords_specs_1;
extern asn_TYPE_member_t asn_MBR_RptInstantaneousRecords_1[1];
extern asn_per_constraints_t asn_PER_type_RptInstantaneousRecords_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RptInstantaneousRecord.h"

#endif	/* _RptInstantaneousRecords_H_ */
#include "asn_internal.h"
