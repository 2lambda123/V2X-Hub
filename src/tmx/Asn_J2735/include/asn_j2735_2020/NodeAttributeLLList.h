/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TravelerInformation"
 * 	found in "J2735-TravelerInformation.asn"
 * 	`asn1c -gen-UPER -fcompound-names -fincludes-quoted -fno-include-deps`
 */

#ifndef	_NodeAttributeLLList_H_
#define	_NodeAttributeLLList_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NodeAttributeLL.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* NodeAttributeLLList */
typedef struct NodeAttributeLLList {
	A_SEQUENCE_OF(NodeAttributeLL_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NodeAttributeLLList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NodeAttributeLLList;
extern asn_SET_OF_specifics_t asn_SPC_NodeAttributeLLList_specs_1;
extern asn_TYPE_member_t asn_MBR_NodeAttributeLLList_1[1];
extern asn_per_constraints_t asn_PER_type_NodeAttributeLLList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NodeAttributeLLList_H_ */
#include "asn_internal.h"
