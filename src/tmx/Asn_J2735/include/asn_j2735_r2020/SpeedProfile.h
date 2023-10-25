/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "BasicSafetyMessage"
 * 	found in "J2735-BasicSafetyMessage.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -fincludes-quoted -no-gen-JER`
 */

#ifndef	_SpeedProfile_H_
#define	_SpeedProfile_H_


#include "asn_application.h"

/* Including external dependencies */
#include "SpeedProfileMeasurementList.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SpeedProfile */
typedef struct SpeedProfile {
	SpeedProfileMeasurementList_t	 speedReports;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SpeedProfile_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SpeedProfile;
extern asn_SEQUENCE_specifics_t asn_SPC_SpeedProfile_specs_1;
extern asn_TYPE_member_t asn_MBR_SpeedProfile_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _SpeedProfile_H_ */
#include "asn_internal.h"
