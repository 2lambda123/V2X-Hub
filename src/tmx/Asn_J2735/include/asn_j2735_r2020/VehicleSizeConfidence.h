/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SDSM"
 * 	found in "J2735_201603_2023-06-22.asn"
 * 	`asn1c -fcompound-names `
 */

#ifndef	_VehicleSizeConfidence_H_
#define	_VehicleSizeConfidence_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SizeValueConfidence.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* VehicleSizeConfidence */
typedef struct VehicleSizeConfidence {
	SizeValueConfidence_t	 vehicleWidthConfidence;
	SizeValueConfidence_t	 vehicleLengthConfidence;
	SizeValueConfidence_t	*vehicleHeightConfidence	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VehicleSizeConfidence_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VehicleSizeConfidence;
extern asn_SEQUENCE_specifics_t asn_SPC_VehicleSizeConfidence_specs_1;
extern asn_TYPE_member_t asn_MBR_VehicleSizeConfidence_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _VehicleSizeConfidence_H_ */
#include <asn_internal.h>
