/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RoadWeatherMessage"
 * 	found in "RoadWeatherMessage.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -fincludes-quoted -no-gen-JER`
 */

#include "NtcipAirTemperature.h"

asn_TYPE_member_t asn_MBR_NtcipAirTemperature_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NtcipAirTemperature, temperature),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NTCIPEssAirTemperature,
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
		"temperature"
		},
	{ ATF_POINTER, 2, offsetof(struct NtcipAirTemperature, measurementStdDev),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TemperatureMeasurementStdDev,
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
		"measurementStdDev"
		},
	{ ATF_POINTER, 1, offsetof(struct NtcipAirTemperature, tempSensorHeight),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NTCIPEssTemperatureSensorHeight,
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
		"tempSensorHeight"
		},
};
static const int asn_MAP_NtcipAirTemperature_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_NtcipAirTemperature_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NtcipAirTemperature_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* temperature */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measurementStdDev */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* tempSensorHeight */
};
asn_SEQUENCE_specifics_t asn_SPC_NtcipAirTemperature_specs_1 = {
	sizeof(struct NtcipAirTemperature),
	offsetof(struct NtcipAirTemperature, _asn_ctx),
	asn_MAP_NtcipAirTemperature_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_NtcipAirTemperature_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NtcipAirTemperature = {
	"NtcipAirTemperature",
	"NtcipAirTemperature",
	&asn_OP_SEQUENCE,
	asn_DEF_NtcipAirTemperature_tags_1,
	sizeof(asn_DEF_NtcipAirTemperature_tags_1)
		/sizeof(asn_DEF_NtcipAirTemperature_tags_1[0]), /* 1 */
	asn_DEF_NtcipAirTemperature_tags_1,	/* Same as above */
	sizeof(asn_DEF_NtcipAirTemperature_tags_1)
		/sizeof(asn_DEF_NtcipAirTemperature_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NtcipAirTemperature_1,
	3,	/* Elements count */
	&asn_SPC_NtcipAirTemperature_specs_1	/* Additional specs */
};

