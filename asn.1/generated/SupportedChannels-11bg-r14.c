/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#include "SupportedChannels-11bg-r14.h"

asn_TYPE_member_t asn_MBR_SupportedChannels_11bg_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SupportedChannels_11bg_r14, ch1_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ch1-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SupportedChannels_11bg_r14, ch2_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ch2-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SupportedChannels_11bg_r14, ch3_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ch3-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SupportedChannels_11bg_r14, ch4_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ch4-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SupportedChannels_11bg_r14, ch5_r14),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ch5-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SupportedChannels_11bg_r14, ch6_r14),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ch6-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SupportedChannels_11bg_r14, ch7_r14),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ch7-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SupportedChannels_11bg_r14, ch8_r14),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ch8-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SupportedChannels_11bg_r14, ch9_r14),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ch9-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SupportedChannels_11bg_r14, ch10_r14),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ch10-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SupportedChannels_11bg_r14, ch11_r14),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ch11-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SupportedChannels_11bg_r14, ch12_r14),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ch12-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SupportedChannels_11bg_r14, ch13_r14),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ch13-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SupportedChannels_11bg_r14, ch14_r14),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ch14-r14"
		},
};
static const ber_tlv_tag_t asn_DEF_SupportedChannels_11bg_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SupportedChannels_11bg_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ch1-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ch2-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ch3-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ch4-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ch5-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* ch6-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* ch7-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* ch8-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* ch9-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* ch10-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* ch11-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* ch12-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* ch13-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 } /* ch14-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_SupportedChannels_11bg_r14_specs_1 = {
	sizeof(struct SupportedChannels_11bg_r14),
	offsetof(struct SupportedChannels_11bg_r14, _asn_ctx),
	asn_MAP_SupportedChannels_11bg_r14_tag2el_1,
	14,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SupportedChannels_11bg_r14 = {
	"SupportedChannels-11bg-r14",
	"SupportedChannels-11bg-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_SupportedChannels_11bg_r14_tags_1,
	sizeof(asn_DEF_SupportedChannels_11bg_r14_tags_1)
		/sizeof(asn_DEF_SupportedChannels_11bg_r14_tags_1[0]), /* 1 */
	asn_DEF_SupportedChannels_11bg_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_SupportedChannels_11bg_r14_tags_1)
		/sizeof(asn_DEF_SupportedChannels_11bg_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SupportedChannels_11bg_r14_1,
	14,	/* Elements count */
	&asn_SPC_SupportedChannels_11bg_r14_specs_1	/* Additional specs */
};

