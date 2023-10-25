/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SDSM"
 * 	found in "J2735_201603_2023-06-22.asn"
 * 	`asn1c -fcompound-names `
 */

#include "DetectedObjectOptionalData.h"

static asn_oer_constraints_t asn_OER_type_DetectedObjectOptionalData_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_DetectedObjectOptionalData_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_DetectedObjectOptionalData_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DetectedObjectOptionalData, choice.detVeh),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DetectedVehicleData,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"detVeh"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DetectedObjectOptionalData, choice.detVRU),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DetectedVRUData,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"detVRU"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DetectedObjectOptionalData, choice.detObst),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DetectedObstacleData,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"detObst"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_DetectedObjectOptionalData_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* detVeh */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* detVRU */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* detObst */
};
asn_CHOICE_specifics_t asn_SPC_DetectedObjectOptionalData_specs_1 = {
	sizeof(struct DetectedObjectOptionalData),
	offsetof(struct DetectedObjectOptionalData, _asn_ctx),
	offsetof(struct DetectedObjectOptionalData, present),
	sizeof(((struct DetectedObjectOptionalData *)0)->present),
	asn_MAP_DetectedObjectOptionalData_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_DetectedObjectOptionalData = {
	"DetectedObjectOptionalData",
	"DetectedObjectOptionalData",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_DetectedObjectOptionalData_constr_1, &asn_PER_type_DetectedObjectOptionalData_constr_1, CHOICE_constraint },
	asn_MBR_DetectedObjectOptionalData_1,
	3,	/* Elements count */
	&asn_SPC_DetectedObjectOptionalData_specs_1	/* Additional specs */
};

