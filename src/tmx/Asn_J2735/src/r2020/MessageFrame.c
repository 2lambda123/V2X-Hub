/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MessageFrame"
 * 	found in "J2735-MessageFrame.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -fincludes-quoted -no-gen-JER`
 */

#include "MessageFrame.h"

static const long asn_VAL_1_basicSafetyMessage = 20;
static const long asn_VAL_2_mapData = 18;
static const long asn_VAL_3_signalPhaseAndTimingMessage = 19;
static const long asn_VAL_4_commonSafetyRequest = 21;
static const long asn_VAL_5_emergencyVehicleAlert = 22;
static const long asn_VAL_6_intersectionCollision = 23;
static const long asn_VAL_7_nmeaCorrections = 24;
static const long asn_VAL_8_probeDataManagement = 25;
static const long asn_VAL_9_probeVehicleData = 26;
static const long asn_VAL_10_roadSideAlert = 27;
static const long asn_VAL_11_rtcmCorrections = 28;
static const long asn_VAL_12_signalRequestMessage = 29;
static const long asn_VAL_13_signalStatusMessage = 30;
static const long asn_VAL_14_travelerInformation = 31;
static const long asn_VAL_15_personalSafetyMessage = 32;
static const long asn_VAL_16_testMessage00 = 240;
static const long asn_VAL_17_testMessage01 = 241;
static const long asn_VAL_18_testMessage02 = 242;
static const long asn_VAL_19_testMessage03 = 243;
static const long asn_VAL_20_testMessage04 = 244;
static const long asn_VAL_21_testMessage05 = 245;
static const long asn_VAL_22_testMessage06 = 246;
static const long asn_VAL_23_testMessage07 = 247;
static const long asn_VAL_24_testMessage08 = 248;
static const long asn_VAL_25_testMessage09 = 249;
static const long asn_VAL_26_testMessage10 = 250;
static const long asn_VAL_27_testMessage11 = 251;
static const long asn_VAL_28_testMessage12 = 252;
static const long asn_VAL_29_testMessage13 = 253;
static const long asn_VAL_30_testMessage14 = 254;
static const long asn_VAL_31_testMessage15 = 255;
static const long asn_VAL_32_sensorDataSharingMessage = 41;
static const asn_ioc_cell_t asn_IOS_MessageTypes_1_rows[] = {
	{ "&id", aioc__value, &asn_DEF_DSRCmsgID, &asn_VAL_1_basicSafetyMessage },
	{ "&Type", aioc__type, &asn_DEF_BasicSafetyMessage },
	{ "&id", aioc__value, &asn_DEF_DSRCmsgID, &asn_VAL_2_mapData },
	{ "&Type", aioc__type, &asn_DEF_MapData },
	{ "&id", aioc__value, &asn_DEF_DSRCmsgID, &asn_VAL_3_signalPhaseAndTimingMessage },
	{ "&Type", aioc__type, &asn_DEF_SPAT },
	{ "&id", aioc__value, &asn_DEF_DSRCmsgID, &asn_VAL_4_commonSafetyRequest },
	{ "&Type", aioc__type, &asn_DEF_CommonSafetyRequest },
	{ "&id", aioc__value, &asn_DEF_DSRCmsgID, &asn_VAL_5_emergencyVehicleAlert },
	{ "&Type", aioc__type, &asn_DEF_EmergencyVehicleAlert },
	{ "&id", aioc__value, &asn_DEF_DSRCmsgID, &asn_VAL_6_intersectionCollision },
	{ "&Type", aioc__type, &asn_DEF_IntersectionCollision },
	{ "&id", aioc__value, &asn_DEF_DSRCmsgID, &asn_VAL_7_nmeaCorrections },
	{ "&Type", aioc__type, &asn_DEF_NMEAcorrections },
	{ "&id", aioc__value, &asn_DEF_DSRCmsgID, &asn_VAL_8_probeDataManagement },
	{ "&Type", aioc__type, &asn_DEF_ProbeDataManagement },
	{ "&id", aioc__value, &asn_DEF_DSRCmsgID, &asn_VAL_9_probeVehicleData },
	{ "&Type", aioc__type, &asn_DEF_ProbeVehicleData },
	{ "&id", aioc__value, &asn_DEF_DSRCmsgID, &asn_VAL_10_roadSideAlert },
	{ "&Type", aioc__type, &asn_DEF_RoadSideAlert },
	{ "&id", aioc__value, &asn_DEF_DSRCmsgID, &asn_VAL_11_rtcmCorrections },
	{ "&Type", aioc__type, &asn_DEF_RTCMcorrections },
	{ "&id", aioc__value, &asn_DEF_DSRCmsgID, &asn_VAL_12_signalRequestMessage },
	{ "&Type", aioc__type, &asn_DEF_SignalRequestMessage },
	{ "&id", aioc__value, &asn_DEF_DSRCmsgID, &asn_VAL_13_signalStatusMessage },
	{ "&Type", aioc__type, &asn_DEF_SignalStatusMessage },
	{ "&id", aioc__value, &asn_DEF_DSRCmsgID, &asn_VAL_14_travelerInformation },
	{ "&Type", aioc__type, &asn_DEF_TravelerInformation },
	{ "&id", aioc__value, &asn_DEF_DSRCmsgID, &asn_VAL_15_personalSafetyMessage },
	{ "&Type", aioc__type, &asn_DEF_PersonalSafetyMessage },
	{ "&id", aioc__value, &asn_DEF_DSRCmsgID, &asn_VAL_16_testMessage00 },
	{ "&Type", aioc__type, &asn_DEF_TestMessage00 },
	{ "&id", aioc__value, &asn_DEF_DSRCmsgID, &asn_VAL_17_testMessage01 },
	{ "&Type", aioc__type, &asn_DEF_TestMessage01 },
	{ "&id", aioc__value, &asn_DEF_DSRCmsgID, &asn_VAL_18_testMessage02 },
	{ "&Type", aioc__type, &asn_DEF_TestMessage02 },
	{ "&id", aioc__value, &asn_DEF_DSRCmsgID, &asn_VAL_19_testMessage03 },
	{ "&Type", aioc__type, &asn_DEF_TestMessage03 },
	{ "&id", aioc__value, &asn_DEF_DSRCmsgID, &asn_VAL_20_testMessage04 },
	{ "&Type", aioc__type, &asn_DEF_TestMessage04 },
	{ "&id", aioc__value, &asn_DEF_DSRCmsgID, &asn_VAL_21_testMessage05 },
	{ "&Type", aioc__type, &asn_DEF_TestMessage05 },
	{ "&id", aioc__value, &asn_DEF_DSRCmsgID, &asn_VAL_22_testMessage06 },
	{ "&Type", aioc__type, &asn_DEF_TestMessage06 },
	{ "&id", aioc__value, &asn_DEF_DSRCmsgID, &asn_VAL_23_testMessage07 },
	{ "&Type", aioc__type, &asn_DEF_TestMessage07 },
	{ "&id", aioc__value, &asn_DEF_DSRCmsgID, &asn_VAL_24_testMessage08 },
	{ "&Type", aioc__type, &asn_DEF_TestMessage08 },
	{ "&id", aioc__value, &asn_DEF_DSRCmsgID, &asn_VAL_25_testMessage09 },
	{ "&Type", aioc__type, &asn_DEF_TestMessage09 },
	{ "&id", aioc__value, &asn_DEF_DSRCmsgID, &asn_VAL_26_testMessage10 },
	{ "&Type", aioc__type, &asn_DEF_TestMessage10 },
	{ "&id", aioc__value, &asn_DEF_DSRCmsgID, &asn_VAL_27_testMessage11 },
	{ "&Type", aioc__type, &asn_DEF_TestMessage11 },
	{ "&id", aioc__value, &asn_DEF_DSRCmsgID, &asn_VAL_28_testMessage12 },
	{ "&Type", aioc__type, &asn_DEF_TestMessage12 },
	{ "&id", aioc__value, &asn_DEF_DSRCmsgID, &asn_VAL_29_testMessage13 },
	{ "&Type", aioc__type, &asn_DEF_TestMessage13 },
	{ "&id", aioc__value, &asn_DEF_DSRCmsgID, &asn_VAL_30_testMessage14 },
	{ "&Type", aioc__type, &asn_DEF_TestMessage14 },
	{ "&id", aioc__value, &asn_DEF_DSRCmsgID, &asn_VAL_31_testMessage15 },
	{ "&Type", aioc__type, &asn_DEF_TestMessage15 },
	{ "&id", aioc__value, &asn_DEF_DSRCmsgID, &asn_VAL_32_sensorDataSharingMessage },
	{ "&Type", aioc__type, &asn_DEF_SensorDataSharingMessage }
};
static const asn_ioc_set_t asn_IOS_MessageTypes_1[] = {
	{ 32, 2, asn_IOS_MessageTypes_1_rows }
};
static int
memb_messageId_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 32767L)) {
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
select_MessageFrame_value_type(const asn_TYPE_descriptor_t *parent_type, const void *parent_sptr) {
	asn_type_selector_result_t result = {0, 0};
	const asn_ioc_set_t *itable = asn_IOS_MessageTypes_1;
	size_t constraining_column = 0; /* &id */
	size_t for_column = 1; /* &Type */
	size_t row, presence_index = 0;
	const long *constraining_value = (const long *)((const char *)parent_sptr + offsetof(struct MessageFrame, messageId));
	
	for(row=0; row < itable->rows_count; row++) {
	    const asn_ioc_cell_t *constraining_cell = &itable->rows[row * itable->columns_count + constraining_column];
	    const asn_ioc_cell_t *type_cell = &itable->rows[row * itable->columns_count + for_column];
	
	    if(type_cell->cell_kind == aioc__undefined)
	        continue;
	
	    presence_index++;
	    if(constraining_cell->type_descriptor->op->compare_struct(constraining_cell->type_descriptor, constraining_value, constraining_cell->value_sptr) == 0) {
	        result.type_descriptor = type_cell->type_descriptor;
	        result.presence_index = presence_index;
	        break;
	    }
	}
	
	return result;
}

static int
memb_value_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_memb_messageId_constr_2 CC_NOTUSED = {
	{ 2, 1 }	/* (0..32767) */,
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_messageId_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 15,  15,  0,  32767 }	/* (0..32767) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_memb_value_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_value_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_value_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MessageFrame__value, choice.BasicSafetyMessage),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_BasicSafetyMessage,
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
		"BasicSafetyMessage"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MessageFrame__value, choice.MapData),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_MapData,
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
		"MapData"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MessageFrame__value, choice.SPAT),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_SPAT,
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
		"SPAT"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MessageFrame__value, choice.CommonSafetyRequest),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_CommonSafetyRequest,
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
		"CommonSafetyRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MessageFrame__value, choice.EmergencyVehicleAlert),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_EmergencyVehicleAlert,
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
		"EmergencyVehicleAlert"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MessageFrame__value, choice.IntersectionCollision),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_IntersectionCollision,
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
		"IntersectionCollision"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MessageFrame__value, choice.NMEAcorrections),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NMEAcorrections,
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
		"NMEAcorrections"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MessageFrame__value, choice.ProbeDataManagement),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ProbeDataManagement,
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
		"ProbeDataManagement"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MessageFrame__value, choice.ProbeVehicleData),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ProbeVehicleData,
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
		"ProbeVehicleData"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MessageFrame__value, choice.RoadSideAlert),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RoadSideAlert,
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
		"RoadSideAlert"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MessageFrame__value, choice.RTCMcorrections),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RTCMcorrections,
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
		"RTCMcorrections"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MessageFrame__value, choice.SignalRequestMessage),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_SignalRequestMessage,
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
		"SignalRequestMessage"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MessageFrame__value, choice.SignalStatusMessage),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_SignalStatusMessage,
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
		"SignalStatusMessage"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MessageFrame__value, choice.TravelerInformation),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_TravelerInformation,
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
		"TravelerInformation"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MessageFrame__value, choice.PersonalSafetyMessage),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_PersonalSafetyMessage,
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
		"PersonalSafetyMessage"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MessageFrame__value, choice.TestMessage00),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_TestMessage00,
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
		"TestMessage00"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MessageFrame__value, choice.TestMessage01),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_TestMessage01,
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
		"TestMessage01"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MessageFrame__value, choice.TestMessage02),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_TestMessage02,
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
		"TestMessage02"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MessageFrame__value, choice.TestMessage03),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_TestMessage03,
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
		"TestMessage03"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MessageFrame__value, choice.TestMessage04),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_TestMessage04,
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
		"TestMessage04"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MessageFrame__value, choice.TestMessage05),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_TestMessage05,
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
		"TestMessage05"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MessageFrame__value, choice.TestMessage06),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_TestMessage06,
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
		"TestMessage06"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MessageFrame__value, choice.TestMessage07),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_TestMessage07,
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
		"TestMessage07"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MessageFrame__value, choice.TestMessage08),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_TestMessage08,
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
		"TestMessage08"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MessageFrame__value, choice.TestMessage09),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_TestMessage09,
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
		"TestMessage09"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MessageFrame__value, choice.TestMessage10),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_TestMessage10,
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
		"TestMessage10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MessageFrame__value, choice.TestMessage11),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_TestMessage11,
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
		"TestMessage11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MessageFrame__value, choice.TestMessage12),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_TestMessage12,
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
		"TestMessage12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MessageFrame__value, choice.TestMessage13),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_TestMessage13,
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
		"TestMessage13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MessageFrame__value, choice.TestMessage14),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_TestMessage14,
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
		"TestMessage14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MessageFrame__value, choice.TestMessage15),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_TestMessage15,
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
		"TestMessage15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MessageFrame__value, choice.SensorDataSharingMessage),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_SensorDataSharingMessage,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"SensorDataSharingMessage"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_value_tag2el_3[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 31 }, /* BasicSafetyMessage */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, -1, 30 }, /* MapData */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 2, -2, 29 }, /* SPAT */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 3, -3, 28 }, /* CommonSafetyRequest */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 4, -4, 27 }, /* EmergencyVehicleAlert */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 5, -5, 26 }, /* IntersectionCollision */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 6, -6, 25 }, /* NMEAcorrections */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 7, -7, 24 }, /* ProbeDataManagement */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 8, -8, 23 }, /* ProbeVehicleData */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 9, -9, 22 }, /* RoadSideAlert */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 10, -10, 21 }, /* RTCMcorrections */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 11, -11, 20 }, /* SignalRequestMessage */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 12, -12, 19 }, /* SignalStatusMessage */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 13, -13, 18 }, /* TravelerInformation */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 14, -14, 17 }, /* PersonalSafetyMessage */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 15, -15, 16 }, /* TestMessage00 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 16, -16, 15 }, /* TestMessage01 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 17, -17, 14 }, /* TestMessage02 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 18, -18, 13 }, /* TestMessage03 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 19, -19, 12 }, /* TestMessage04 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 20, -20, 11 }, /* TestMessage05 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 21, -21, 10 }, /* TestMessage06 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 22, -22, 9 }, /* TestMessage07 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 23, -23, 8 }, /* TestMessage08 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 24, -24, 7 }, /* TestMessage09 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 25, -25, 6 }, /* TestMessage10 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 26, -26, 5 }, /* TestMessage11 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 27, -27, 4 }, /* TestMessage12 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 28, -28, 3 }, /* TestMessage13 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 29, -29, 2 }, /* TestMessage14 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 30, -30, 1 }, /* TestMessage15 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 31, -31, 0 } /* SensorDataSharingMessage */
};
static asn_CHOICE_specifics_t asn_SPC_value_specs_3 = {
	sizeof(struct MessageFrame__value),
	offsetof(struct MessageFrame__value, _asn_ctx),
	offsetof(struct MessageFrame__value, present),
	sizeof(((struct MessageFrame__value *)0)->present),
	asn_MAP_value_tag2el_3,
	32,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_value_3 = {
	"value",
	"value",
	&asn_OP_OPEN_TYPE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		OPEN_TYPE_constraint
	},
	asn_MBR_value_3,
	32,	/* Elements count */
	&asn_SPC_value_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_MessageFrame_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MessageFrame, messageId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DSRCmsgID,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			&asn_OER_memb_messageId_constr_2,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_messageId_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_messageId_constraint_1
		},
		0, 0, /* No default value */
		"messageId"
		},
	{ ATF_OPEN_TYPE | ATF_NOFLAGS, 0, offsetof(struct MessageFrame, value),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_value_3,
		select_MessageFrame_value_type,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			&asn_OER_memb_value_constr_3,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_value_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_value_constraint_1
		},
		0, 0, /* No default value */
		"value"
		},
};
static const ber_tlv_tag_t asn_DEF_MessageFrame_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MessageFrame_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* messageId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* value */
};
static asn_SEQUENCE_specifics_t asn_SPC_MessageFrame_specs_1 = {
	sizeof(struct MessageFrame),
	offsetof(struct MessageFrame, _asn_ctx),
	asn_MAP_MessageFrame_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MessageFrame = {
	"MessageFrame",
	"MessageFrame",
	&asn_OP_SEQUENCE,
	asn_DEF_MessageFrame_tags_1,
	sizeof(asn_DEF_MessageFrame_tags_1)
		/sizeof(asn_DEF_MessageFrame_tags_1[0]), /* 1 */
	asn_DEF_MessageFrame_tags_1,	/* Same as above */
	sizeof(asn_DEF_MessageFrame_tags_1)
		/sizeof(asn_DEF_MessageFrame_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_MessageFrame_1,
	2,	/* Elements count */
	&asn_SPC_MessageFrame_specs_1	/* Additional specs */
};

