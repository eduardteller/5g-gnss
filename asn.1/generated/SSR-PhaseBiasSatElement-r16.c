/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#include "SSR-PhaseBiasSatElement-r16.h"

asn_TYPE_member_t asn_MBR_SSR_PhaseBiasSatElement_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SSR_PhaseBiasSatElement_r16, svID_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SV_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"svID-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SSR_PhaseBiasSatElement_r16, ssr_PhaseBiasSignalList_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SSR_PhaseBiasSignalList_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ssr-PhaseBiasSignalList-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_SSR_PhaseBiasSatElement_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SSR_PhaseBiasSatElement_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* svID-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ssr-PhaseBiasSignalList-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_SSR_PhaseBiasSatElement_r16_specs_1 = {
	sizeof(struct SSR_PhaseBiasSatElement_r16),
	offsetof(struct SSR_PhaseBiasSatElement_r16, _asn_ctx),
	asn_MAP_SSR_PhaseBiasSatElement_r16_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SSR_PhaseBiasSatElement_r16 = {
	"SSR-PhaseBiasSatElement-r16",
	"SSR-PhaseBiasSatElement-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_SSR_PhaseBiasSatElement_r16_tags_1,
	sizeof(asn_DEF_SSR_PhaseBiasSatElement_r16_tags_1)
		/sizeof(asn_DEF_SSR_PhaseBiasSatElement_r16_tags_1[0]), /* 1 */
	asn_DEF_SSR_PhaseBiasSatElement_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_SSR_PhaseBiasSatElement_r16_tags_1)
		/sizeof(asn_DEF_SSR_PhaseBiasSatElement_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SSR_PhaseBiasSatElement_r16_1,
	2,	/* Elements count */
	&asn_SPC_SSR_PhaseBiasSatElement_r16_specs_1	/* Additional specs */
};

