/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_ASN_CC.asn"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted -fskeletons-copy`
 */

#ifndef	_TrafficControlSchedule_H_
#define	_TrafficControlSchedule_H_


#include "asn_application.h"

/* Including external dependencies */
#include "EpochMins.h"
#include "DayOfWeek.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RepeatParams;
struct DailySchedule;

/* TrafficControlSchedule */
typedef struct TrafficControlSchedule {
	EpochMins_t	 start;
	EpochMins_t	*end;	/* OPTIONAL */
	DayOfWeek_t	*dow;	/* OPTIONAL */
	struct TrafficControlSchedule__between {
		A_SEQUENCE_OF(struct DailySchedule) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *between;
	struct RepeatParams	*repeat;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TrafficControlSchedule_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TrafficControlSchedule;
extern asn_SEQUENCE_specifics_t asn_SPC_TrafficControlSchedule_specs_1;
extern asn_TYPE_member_t asn_MBR_TrafficControlSchedule_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RepeatParams.h"
#include "DailySchedule.h"

#endif	/* _TrafficControlSchedule_H_ */
#include "asn_internal.h"
