/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CARMA-CLOUD"
 * 	found in "voices_custom_7.2.3_v2xhub_7.1_ccplugin.asn"
 * 	`asn1c -gen-PER -fcompound-names`
 */

#include "TrafficControlGeometry.h"

static int check_permitted_alphabet_2(const void *sptr) {
	/* The underlying type is IA5String */
	const IA5String_t *st = (const IA5String_t *)sptr;
	const uint8_t *ch = st->buf;
	const uint8_t *end = ch + st->size;
	
	for(; ch < end; ch++) {
		uint8_t cv = *ch;
		if(!(cv <= 127)) return -1;
	}
	return 0;
}

static int check_permitted_alphabet_3(const void *sptr) {
	/* The underlying type is IA5String */
	const IA5String_t *st = (const IA5String_t *)sptr;
	const uint8_t *ch = st->buf;
	const uint8_t *end = ch + st->size;
	
	for(; ch < end; ch++) {
		uint8_t cv = *ch;
		if(!(cv <= 127)) return -1;
	}
	return 0;
}

static int
memb_proj_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const IA5String_t *st = (const IA5String_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size <= 63)
		 && !check_permitted_alphabet_2(st)) {
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
memb_datum_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const IA5String_t *st = (const IA5String_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size <= 63)
		 && !check_permitted_alphabet_3(st)) {
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
memb_heading_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 3599)) {
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
memb_nodes_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 255)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_nodes_constr_9 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..255)) */};
static asn_per_constraints_t asn_PER_type_nodes_constr_9 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  255 }	/* (SIZE(1..255)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_proj_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..63)) */};
static asn_per_constraints_t asn_PER_memb_proj_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  127 }	/* (0..127) */,
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (SIZE(0..63)) */,
	0, 0	/* No PER character map necessary */
};
static asn_oer_constraints_t asn_OER_memb_datum_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..63)) */};
static asn_per_constraints_t asn_PER_memb_datum_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  127 }	/* (0..127) */,
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (SIZE(0..63)) */,
	0, 0	/* No PER character map necessary */
};
static asn_oer_constraints_t asn_OER_memb_heading_constr_8 CC_NOTUSED = {
	{ 2, 1 }	/* (0..3599) */,
	-1};
static asn_per_constraints_t asn_PER_memb_heading_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 12,  12,  0,  3599 }	/* (0..3599) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_nodes_constr_9 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..255)) */};
static asn_per_constraints_t asn_PER_memb_nodes_constr_9 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  255 }	/* (SIZE(1..255)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_nodes_9[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_PathNode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_nodes_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_nodes_specs_9 = {
	sizeof(struct TrafficControlGeometry__nodes),
	offsetof(struct TrafficControlGeometry__nodes, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nodes_9 = {
	"nodes",
	"nodes",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_nodes_tags_9,
	sizeof(asn_DEF_nodes_tags_9)
		/sizeof(asn_DEF_nodes_tags_9[0]) - 1, /* 1 */
	asn_DEF_nodes_tags_9,	/* Same as above */
	sizeof(asn_DEF_nodes_tags_9)
		/sizeof(asn_DEF_nodes_tags_9[0]), /* 2 */
	{ &asn_OER_type_nodes_constr_9, &asn_PER_type_nodes_constr_9, SEQUENCE_OF_constraint },
	asn_MBR_nodes_9,
	1,	/* Single element */
	&asn_SPC_nodes_specs_9	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_TrafficControlGeometry_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TrafficControlGeometry, proj),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IA5String,
		0,
		{ &asn_OER_memb_proj_constr_2, &asn_PER_memb_proj_constr_2,  memb_proj_constraint_1 },
		0, 0, /* No default value */
		"proj"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TrafficControlGeometry, datum),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IA5String,
		0,
		{ &asn_OER_memb_datum_constr_3, &asn_PER_memb_datum_constr_3,  memb_datum_constraint_1 },
		0, 0, /* No default value */
		"datum"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TrafficControlGeometry, reftime),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EpochMins,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reftime"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TrafficControlGeometry, reflon),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Longitude,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reflon"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TrafficControlGeometry, reflat),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Latitude,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reflat"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TrafficControlGeometry, refelv),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Elevation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"refelv"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TrafficControlGeometry, heading),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_heading_constr_8, &asn_PER_memb_heading_constr_8,  memb_heading_constraint_1 },
		0, 0, /* No default value */
		"heading"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TrafficControlGeometry, nodes),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_nodes_9,
		0,
		{ &asn_OER_memb_nodes_constr_9, &asn_PER_memb_nodes_constr_9,  memb_nodes_constraint_1 },
		0, 0, /* No default value */
		"nodes"
		},
};
static const ber_tlv_tag_t asn_DEF_TrafficControlGeometry_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TrafficControlGeometry_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* proj */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* datum */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* reftime */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* reflon */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* reflat */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* refelv */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* heading */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* nodes */
};
asn_SEQUENCE_specifics_t asn_SPC_TrafficControlGeometry_specs_1 = {
	sizeof(struct TrafficControlGeometry),
	offsetof(struct TrafficControlGeometry, _asn_ctx),
	asn_MAP_TrafficControlGeometry_tag2el_1,
	8,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_TrafficControlGeometry = {
	"TrafficControlGeometry",
	"TrafficControlGeometry",
	&asn_OP_SEQUENCE,
	asn_DEF_TrafficControlGeometry_tags_1,
	sizeof(asn_DEF_TrafficControlGeometry_tags_1)
		/sizeof(asn_DEF_TrafficControlGeometry_tags_1[0]), /* 1 */
	asn_DEF_TrafficControlGeometry_tags_1,	/* Same as above */
	sizeof(asn_DEF_TrafficControlGeometry_tags_1)
		/sizeof(asn_DEF_TrafficControlGeometry_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_TrafficControlGeometry_1,
	8,	/* Elements count */
	&asn_SPC_TrafficControlGeometry_specs_1	/* Additional specs */
};
