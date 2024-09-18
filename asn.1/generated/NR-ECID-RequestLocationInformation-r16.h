/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#ifndef	_NR_ECID_RequestLocationInformation_r16_H_
#define	_NR_ECID_RequestLocationInformation_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_ECID_RequestLocationInformation_r16__requestedMeasurements_r16 {
	NR_ECID_RequestLocationInformation_r16__requestedMeasurements_r16_ssrsrpReq	= 0,
	NR_ECID_RequestLocationInformation_r16__requestedMeasurements_r16_ssrsrqReq	= 1,
	NR_ECID_RequestLocationInformation_r16__requestedMeasurements_r16_csirsrpReq	= 2,
	NR_ECID_RequestLocationInformation_r16__requestedMeasurements_r16_csirsrqReq	= 3
} e_NR_ECID_RequestLocationInformation_r16__requestedMeasurements_r16;

/* NR-ECID-RequestLocationInformation-r16 */
typedef struct NR_ECID_RequestLocationInformation_r16 {
	BIT_STRING_t	 requestedMeasurements_r16;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_ECID_RequestLocationInformation_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_ECID_RequestLocationInformation_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_ECID_RequestLocationInformation_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_ECID_RequestLocationInformation_r16_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_ECID_RequestLocationInformation_r16_H_ */
#include <asn_internal.h>
