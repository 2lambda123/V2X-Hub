/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../J2735_R41_Source_mod.ASN"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#include "Circle.h"

static int
memb_radiusSteps_constraint_3(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 32767)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_miles_constraint_3(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 2000)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_km_constraint_3(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 5000)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_radiusSteps_constr_4 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 15,  15,  0,  32767 }	/* (0..32767) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_miles_constr_5 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11,  1,  2000 }	/* (1..2000) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_km_constr_6 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 13,  13,  1,  5000 }	/* (1..5000) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_raduis_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_raduis_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Circle__raduis, choice.radiusSteps),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_radiusSteps_constraint_3,
		&asn_PER_memb_radiusSteps_constr_4,
		0,
		"radiusSteps"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Circle__raduis, choice.miles),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_miles_constraint_3,
		&asn_PER_memb_miles_constr_5,
		0,
		"miles"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Circle__raduis, choice.km),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_km_constraint_3,
		&asn_PER_memb_km_constr_6,
		0,
		"km"
		},
};
static asn_TYPE_tag2member_t asn_MAP_raduis_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* radiusSteps */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* miles */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* km */
};
static asn_CHOICE_specifics_t asn_SPC_raduis_specs_3 = {
	sizeof(struct Circle__raduis),
	offsetof(struct Circle__raduis, _asn_ctx),
	offsetof(struct Circle__raduis, present),
	sizeof(((struct Circle__raduis *)0)->present),
	asn_MAP_raduis_tag2el_3,
	3,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_raduis_3 = {
	"raduis",
	"raduis",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_raduis_constr_3,
	asn_MBR_raduis_3,
	3,	/* Elements count */
	&asn_SPC_raduis_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_Circle_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Circle, center),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Position3D,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"center"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Circle, raduis),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_raduis_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"raduis"
		},
};
static ber_tlv_tag_t asn_DEF_Circle_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_Circle_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* center */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* raduis */
};
static asn_SEQUENCE_specifics_t asn_SPC_Circle_specs_1 = {
	sizeof(struct Circle),
	offsetof(struct Circle, _asn_ctx),
	asn_MAP_Circle_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Circle = {
	"Circle",
	"Circle",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_Circle_tags_1,
	sizeof(asn_DEF_Circle_tags_1)
		/sizeof(asn_DEF_Circle_tags_1[0]), /* 1 */
	asn_DEF_Circle_tags_1,	/* Same as above */
	sizeof(asn_DEF_Circle_tags_1)
		/sizeof(asn_DEF_Circle_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Circle_1,
	2,	/* Elements count */
	&asn_SPC_Circle_specs_1	/* Additional specs */
};

