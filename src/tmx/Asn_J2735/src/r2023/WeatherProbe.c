/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "BasicSafetyMessage"
 * 	found in "J2735-BasicSafetyMessage-v4.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -fincludes-quoted -no-gen-JER`
 */

#include "WeatherProbe.h"

asn_TYPE_member_t asn_MBR_WeatherProbe_1[] = {
	{ ATF_POINTER, 3, offsetof(struct WeatherProbe, airTemp),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AmbientAirTemperature,
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
		"airTemp"
		},
	{ ATF_POINTER, 2, offsetof(struct WeatherProbe, airPressure),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AmbientAirPressure,
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
		"airPressure"
		},
	{ ATF_POINTER, 1, offsetof(struct WeatherProbe, rainRates),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_WiperSet,
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
		"rainRates"
		},
};
static const int asn_MAP_WeatherProbe_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_WeatherProbe_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_WeatherProbe_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* airTemp */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* airPressure */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* rainRates */
};
asn_SEQUENCE_specifics_t asn_SPC_WeatherProbe_specs_1 = {
	sizeof(struct WeatherProbe),
	offsetof(struct WeatherProbe, _asn_ctx),
	asn_MAP_WeatherProbe_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_WeatherProbe_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_WeatherProbe = {
	"WeatherProbe",
	"WeatherProbe",
	&asn_OP_SEQUENCE,
	asn_DEF_WeatherProbe_tags_1,
	sizeof(asn_DEF_WeatherProbe_tags_1)
		/sizeof(asn_DEF_WeatherProbe_tags_1[0]), /* 1 */
	asn_DEF_WeatherProbe_tags_1,	/* Same as above */
	sizeof(asn_DEF_WeatherProbe_tags_1)
		/sizeof(asn_DEF_WeatherProbe_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_WeatherProbe_1,
	3,	/* Elements count */
	&asn_SPC_WeatherProbe_specs_1	/* Additional specs */
};

