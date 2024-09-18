/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#include "SBAS-IDs.h"

static int
memb_sbas_IDs_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size >= 1 && size <= 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_sbas_IDs_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_SBAS_IDs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SBAS_IDs, sbas_IDs),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_sbas_IDs_constr_2,  memb_sbas_IDs_constraint_1 },
		0, 0, /* No default value */
		"sbas-IDs"
		},
};
static const ber_tlv_tag_t asn_DEF_SBAS_IDs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SBAS_IDs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* sbas-IDs */
};
asn_SEQUENCE_specifics_t asn_SPC_SBAS_IDs_specs_1 = {
	sizeof(struct SBAS_IDs),
	offsetof(struct SBAS_IDs, _asn_ctx),
	asn_MAP_SBAS_IDs_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SBAS_IDs = {
	"SBAS-IDs",
	"SBAS-IDs",
	&asn_OP_SEQUENCE,
	asn_DEF_SBAS_IDs_tags_1,
	sizeof(asn_DEF_SBAS_IDs_tags_1)
		/sizeof(asn_DEF_SBAS_IDs_tags_1[0]), /* 1 */
	asn_DEF_SBAS_IDs_tags_1,	/* Same as above */
	sizeof(asn_DEF_SBAS_IDs_tags_1)
		/sizeof(asn_DEF_SBAS_IDs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SBAS_IDs_1,
	1,	/* Elements count */
	&asn_SPC_SBAS_IDs_specs_1	/* Additional specs */
};

