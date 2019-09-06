/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../J2735_201603DA.ASN"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted -S/home/gmb/TMX-OAM/Build/asn1c/skeletons`
 */

#include "PartIIcontent.h"

static const long asn_VAL_1_vehicleSafetyExt = 0;
static const long asn_VAL_2_specialVehicleExt = 1;
static const long asn_VAL_3_supplementalVehicleExt = 2;
static const asn_ioc_cell_t asn_IOS_BSMpartIIExtension_1_rows[] = {
	{ "&id", aioc__value, &asn_DEF_PartII_Id, &asn_VAL_1_vehicleSafetyExt },
	{ "&Type", aioc__type, &asn_DEF_VehicleSafetyExtensions },
	{ "&id", aioc__value, &asn_DEF_PartII_Id, &asn_VAL_2_specialVehicleExt },
	{ "&Type", aioc__type, &asn_DEF_SpecialVehicleExtensions },
	{ "&id", aioc__value, &asn_DEF_PartII_Id, &asn_VAL_3_supplementalVehicleExt },
	{ "&Type", aioc__type, &asn_DEF_SupplementalVehicleExtensions }
};
static const asn_ioc_set_t asn_IOS_BSMpartIIExtension_1[] = {
	3, 2, asn_IOS_BSMpartIIExtension_1_rows
};
static int
memb_partII_Id_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 63)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_type_selector_result_t
select_partII_Value_type(const asn_TYPE_descriptor_t *parent_type, const void *parent_sptr) {
	asn_type_selector_result_t result = {0, 0};
	const asn_ioc_set_t *itable = asn_IOS_BSMpartIIExtension_1;
	size_t constraining_column = 0; /* &id */
	size_t for_column = 1; /* &Type */
	size_t row;
	const long *constraining_value = (const long *)((const char *)parent_sptr + offsetof(struct PartIIcontent_151P0, partII_Id));
	
	for(row=0; row < itable->rows_count; row++) {
	    const asn_ioc_cell_t *constraining_cell = &itable->rows[row * itable->columns_count + constraining_column];
	    const asn_ioc_cell_t *type_cell = &itable->rows[row * itable->columns_count + for_column];
	
	    if(constraining_cell->type_descriptor->op->compare_struct(constraining_cell->type_descriptor, constraining_value, constraining_cell->value_sptr) == 0) {
	        result.type_descriptor = type_cell->type_descriptor;
	        result.presence_index = row + 1;
	        break;
	    }
	}
	
	return result;
}

static int
memb_partII_Value_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		/* Nothing is here. See below */
	}
	
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

static asn_per_constraints_t asn_PER_memb_partII_Id_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (0..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_partII_Value_constr_3 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_partII_Value_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct partII_Value, choice.VehicleSafetyExtensions),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_VehicleSafetyExtensions,
		0,
		0,	/* Defer constraints checking to the member type */
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* No PER visible constraints */
		0,
		"VehicleSafetyExtensions"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct partII_Value, choice.SpecialVehicleExtensions),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_SpecialVehicleExtensions,
		0,
		0,	/* Defer constraints checking to the member type */
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* No PER visible constraints */
		0,
		"SpecialVehicleExtensions"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct partII_Value, choice.SupplementalVehicleExtensions),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_SupplementalVehicleExtensions,
		0,
		0,	/* Defer constraints checking to the member type */
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* No PER visible constraints */
		0,
		"SupplementalVehicleExtensions"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_partII_Value_tag2el_3[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 2 }, /* VehicleSafetyExtensions */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, -1, 1 }, /* SpecialVehicleExtensions */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 2, -2, 0 } /* SupplementalVehicleExtensions */
};
static asn_CHOICE_specifics_t asn_SPC_partII_Value_specs_3 = {
	sizeof(struct partII_Value),
	offsetof(struct partII_Value, _asn_ctx),
	offsetof(struct partII_Value, present),
	sizeof(((struct partII_Value *)0)->present),
	asn_MAP_partII_Value_tag2el_3,
	3,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_partII_Value_3 = {
	"partII-Value",
	"partII-Value",
	&asn_OP_OPEN_TYPE,
	OPEN_TYPE_constraint,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	0,	/* No OER visible constraints */
	0,	/* No PER visible constraints */
	asn_MBR_partII_Value_3,
	3,	/* Elements count */
	&asn_SPC_partII_Value_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PartIIcontent_151P0_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PartIIcontent_151P0, partII_Id),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PartII_Id,
		0,
		memb_partII_Id_constraint_1,
		0,	/* OER is not compiled, use -gen-OER */
		&asn_PER_memb_partII_Id_constr_2,
		0,
		"partII-Id"
		},
	{ ATF_OPEN_TYPE | ATF_NOFLAGS, 0, offsetof(struct PartIIcontent_151P0, partII_Value),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_partII_Value_3,
		select_partII_Value_type,
		memb_partII_Value_constraint_1,
		0,	/* OER is not compiled, use -gen-OER */
		&asn_PER_memb_partII_Value_constr_3,
		0,
		"partII-Value"
		},
};
static const ber_tlv_tag_t asn_DEF_PartIIcontent_151P0_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PartIIcontent_151P0_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* partII-Id */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* partII-Value */
};
asn_SEQUENCE_specifics_t asn_SPC_PartIIcontent_151P0_specs_1 = {
	sizeof(struct PartIIcontent_151P0),
	offsetof(struct PartIIcontent_151P0, _asn_ctx),
	asn_MAP_PartIIcontent_151P0_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PartIIcontent_151P0 = {
	"PartIIcontent",
	"PartIIcontent",
	&asn_OP_SEQUENCE,
	SEQUENCE_constraint,
	asn_DEF_PartIIcontent_151P0_tags_1,
	sizeof(asn_DEF_PartIIcontent_151P0_tags_1)
		/sizeof(asn_DEF_PartIIcontent_151P0_tags_1[0]), /* 1 */
	asn_DEF_PartIIcontent_151P0_tags_1,	/* Same as above */
	sizeof(asn_DEF_PartIIcontent_151P0_tags_1)
		/sizeof(asn_DEF_PartIIcontent_151P0_tags_1[0]), /* 1 */
	0,	/* No OER visible constraints */
	0,	/* No PER visible constraints */
	asn_MBR_PartIIcontent_151P0_1,
	2,	/* Elements count */
	&asn_SPC_PartIIcontent_151P0_specs_1	/* Additional specs */
};
