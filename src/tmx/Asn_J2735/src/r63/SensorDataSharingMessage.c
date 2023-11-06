/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SDSM"
 * 	found in "J2735_201603_2023-06-22.asn"
 * 	`asn1c -fcompound-names `
 */

#include "SensorDataSharingMessage.h"

asn_TYPE_member_t asn_MBR_SensorDataSharingMessage_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SensorDataSharingMessage, msgCnt),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DSRC_MsgCount,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"msgCnt"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SensorDataSharingMessage, sourceID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TemporaryID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sourceID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SensorDataSharingMessage, equipmentType),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EquipmentType,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"equipmentType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SensorDataSharingMessage, sDSMTimeStamp),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DDateTime,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sDSMTimeStamp"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SensorDataSharingMessage, refPos),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Position3D,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"refPos"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SensorDataSharingMessage, refPosXYConf),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PositionalAccuracy,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"refPosXYConf"
		},
	{ ATF_POINTER, 1, offsetof(struct SensorDataSharingMessage, refPosElConf),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ElevationConfidence,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"refPosElConf"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SensorDataSharingMessage, objects),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DetectedObjectList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"objects"
		},
};
static const int asn_MAP_SensorDataSharingMessage_oms_1[] = { 6 };
static const ber_tlv_tag_t asn_DEF_SensorDataSharingMessage_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SensorDataSharingMessage_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* msgCnt */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sourceID */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* equipmentType */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sDSMTimeStamp */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* refPos */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* refPosXYConf */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* refPosElConf */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* objects */
};
asn_SEQUENCE_specifics_t asn_SPC_SensorDataSharingMessage_specs_1 = {
	sizeof(struct SensorDataSharingMessage),
	offsetof(struct SensorDataSharingMessage, _asn_ctx),
	asn_MAP_SensorDataSharingMessage_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_SensorDataSharingMessage_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SensorDataSharingMessage = {
	"SensorDataSharingMessage",
	"SensorDataSharingMessage",
	&asn_OP_SEQUENCE,
	asn_DEF_SensorDataSharingMessage_tags_1,
	sizeof(asn_DEF_SensorDataSharingMessage_tags_1)
		/sizeof(asn_DEF_SensorDataSharingMessage_tags_1[0]), /* 1 */
	asn_DEF_SensorDataSharingMessage_tags_1,	/* Same as above */
	sizeof(asn_DEF_SensorDataSharingMessage_tags_1)
		/sizeof(asn_DEF_SensorDataSharingMessage_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SensorDataSharingMessage_1,
	8,	/* Elements count */
	&asn_SPC_SensorDataSharingMessage_specs_1	/* Additional specs */
};
