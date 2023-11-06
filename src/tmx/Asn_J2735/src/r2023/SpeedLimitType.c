/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Common"
 * 	found in "J2735-Common-v7.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -fincludes-quoted -no-gen-JER`
 */

#include "SpeedLimitType.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_SpeedLimitType_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_SpeedLimitType_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  4,  4,  0,  12 }	/* (0..12,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_SpeedLimitType_value2enum_1[] = {
	{ 0,	7,	"unknown" },
	{ 1,	20,	"maxSpeedInSchoolZone" },
	{ 2,	42,	"maxSpeedInSchoolZoneWhenChildrenArePresent" },
	{ 3,	26,	"maxSpeedInConstructionZone" },
	{ 4,	15,	"vehicleMinSpeed" },
	{ 5,	15,	"vehicleMaxSpeed" },
	{ 6,	20,	"vehicleNightMaxSpeed" },
	{ 7,	13,	"truckMinSpeed" },
	{ 8,	13,	"truckMaxSpeed" },
	{ 9,	18,	"truckNightMaxSpeed" },
	{ 10,	28,	"vehiclesWithTrailersMinSpeed" },
	{ 11,	28,	"vehiclesWithTrailersMaxSpeed" },
	{ 12,	33,	"vehiclesWithTrailersNightMaxSpeed" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_SpeedLimitType_enum2value_1[] = {
	3,	/* maxSpeedInConstructionZone(3) */
	1,	/* maxSpeedInSchoolZone(1) */
	2,	/* maxSpeedInSchoolZoneWhenChildrenArePresent(2) */
	8,	/* truckMaxSpeed(8) */
	7,	/* truckMinSpeed(7) */
	9,	/* truckNightMaxSpeed(9) */
	0,	/* unknown(0) */
	5,	/* vehicleMaxSpeed(5) */
	4,	/* vehicleMinSpeed(4) */
	6,	/* vehicleNightMaxSpeed(6) */
	11,	/* vehiclesWithTrailersMaxSpeed(11) */
	10,	/* vehiclesWithTrailersMinSpeed(10) */
	12	/* vehiclesWithTrailersNightMaxSpeed(12) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_SpeedLimitType_specs_1 = {
	asn_MAP_SpeedLimitType_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_SpeedLimitType_enum2value_1,	/* N => "tag"; sorted by N */
	13,	/* Number of elements in the maps */
	14,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_SpeedLimitType_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_SpeedLimitType = {
	"SpeedLimitType",
	"SpeedLimitType",
	&asn_OP_NativeEnumerated,
	asn_DEF_SpeedLimitType_tags_1,
	sizeof(asn_DEF_SpeedLimitType_tags_1)
		/sizeof(asn_DEF_SpeedLimitType_tags_1[0]), /* 1 */
	asn_DEF_SpeedLimitType_tags_1,	/* Same as above */
	sizeof(asn_DEF_SpeedLimitType_tags_1)
		/sizeof(asn_DEF_SpeedLimitType_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_SpeedLimitType_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_SpeedLimitType_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_SpeedLimitType_specs_1	/* Additional specs */
};

