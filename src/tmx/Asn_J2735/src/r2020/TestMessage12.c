/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TestMessage12"
 * 	found in "J2735-TestMessage12.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -fincludes-quoted -no-gen-JER`
 */

#include "TestMessage12.h"

asn_TYPE_member_t asn_MBR_TestMessage12_1[] = {
	{ ATF_POINTER, 2, offsetof(struct TestMessage12, header),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Header,
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
		"header"
		},
	{ ATF_POINTER, 1, offsetof(struct TestMessage12, regional),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Reg_TestMessage12,
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
		"regional"
		},
};
static const int asn_MAP_TestMessage12_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_TestMessage12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TestMessage12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* header */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* regional */
};
asn_SEQUENCE_specifics_t asn_SPC_TestMessage12_specs_1 = {
	sizeof(struct TestMessage12),
	offsetof(struct TestMessage12, _asn_ctx),
	asn_MAP_TestMessage12_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_TestMessage12_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_TestMessage12 = {
	"TestMessage12",
	"TestMessage12",
	&asn_OP_SEQUENCE,
	asn_DEF_TestMessage12_tags_1,
	sizeof(asn_DEF_TestMessage12_tags_1)
		/sizeof(asn_DEF_TestMessage12_tags_1[0]), /* 1 */
	asn_DEF_TestMessage12_tags_1,	/* Same as above */
	sizeof(asn_DEF_TestMessage12_tags_1)
		/sizeof(asn_DEF_TestMessage12_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_TestMessage12_1,
	2,	/* Elements count */
	&asn_SPC_TestMessage12_specs_1	/* Additional specs */
};

