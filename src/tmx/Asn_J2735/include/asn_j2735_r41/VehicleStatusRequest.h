/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../J2735_R41_Source_mod.ASN"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#ifndef	_VehicleStatusRequest_H_
#define	_VehicleStatusRequest_H_


#include "asn_application.h"

/* Including external dependencies */
#include "VehicleStatusDeviceTypeTag.h"
#include "NativeInteger.h"
#include "BOOLEAN.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* VehicleStatusRequest */
typedef struct VehicleStatusRequest {
	VehicleStatusDeviceTypeTag_t	 dataType;
	long	*subType	/* OPTIONAL */;
	long	*sendOnLessThenValue	/* OPTIONAL */;
	long	*sendOnMoreThenValue	/* OPTIONAL */;
	BOOLEAN_t	*sendAll	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VehicleStatusRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VehicleStatusRequest;

#ifdef __cplusplus
}
#endif

#endif	/* _VehicleStatusRequest_H_ */
#include "asn_internal.h"
