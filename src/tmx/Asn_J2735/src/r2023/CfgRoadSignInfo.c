/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ProbeDataConfig"
 * 	found in "ProbeDataConfig-v0.30.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -fincludes-quoted -no-gen-JER`
 */

#include "CfgRoadSignInfo.h"

static int
memb_lowRoadsignReflect1_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 250L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_lowRoadsignReflect2_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 250L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_memb_lowRoadsignReflect1_constr_3 CC_NOTUSED = {
	{ 1, 1 }	/* (1..250) */,
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_lowRoadsignReflect1_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  1,  250 }	/* (1..250) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_memb_lowRoadsignReflect2_constr_4 CC_NOTUSED = {
	{ 1, 1 }	/* (1..250) */,
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_lowRoadsignReflect2_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  1,  250 }	/* (1..250) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_CfgRoadSignInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CfgRoadSignInfo, roadsignDetection),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CfgRoadSignTypes,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"roadsignDetection"
		},
	{ ATF_POINTER, 2, offsetof(struct CfgRoadSignInfo, lowRoadsignReflect1),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			&asn_OER_memb_lowRoadsignReflect1_constr_3,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_lowRoadsignReflect1_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_lowRoadsignReflect1_constraint_1
		},
		0, 0, /* No default value */
		"lowRoadsignReflect1"
		},
	{ ATF_POINTER, 1, offsetof(struct CfgRoadSignInfo, lowRoadsignReflect2),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			&asn_OER_memb_lowRoadsignReflect2_constr_4,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_lowRoadsignReflect2_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_lowRoadsignReflect2_constraint_1
		},
		0, 0, /* No default value */
		"lowRoadsignReflect2"
		},
};
static const int asn_MAP_CfgRoadSignInfo_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_CfgRoadSignInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CfgRoadSignInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* roadsignDetection */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* lowRoadsignReflect1 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* lowRoadsignReflect2 */
};
asn_SEQUENCE_specifics_t asn_SPC_CfgRoadSignInfo_specs_1 = {
	sizeof(struct CfgRoadSignInfo),
	offsetof(struct CfgRoadSignInfo, _asn_ctx),
	asn_MAP_CfgRoadSignInfo_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_CfgRoadSignInfo_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CfgRoadSignInfo = {
	"CfgRoadSignInfo",
	"CfgRoadSignInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_CfgRoadSignInfo_tags_1,
	sizeof(asn_DEF_CfgRoadSignInfo_tags_1)
		/sizeof(asn_DEF_CfgRoadSignInfo_tags_1[0]), /* 1 */
	asn_DEF_CfgRoadSignInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_CfgRoadSignInfo_tags_1)
		/sizeof(asn_DEF_CfgRoadSignInfo_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_CfgRoadSignInfo_1,
	3,	/* Elements count */
	&asn_SPC_CfgRoadSignInfo_specs_1	/* Additional specs */
};
