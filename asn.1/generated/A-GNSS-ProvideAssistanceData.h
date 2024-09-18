/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#ifndef	_A_GNSS_ProvideAssistanceData_H_
#define	_A_GNSS_ProvideAssistanceData_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GNSS_CommonAssistData;
struct GNSS_GenericAssistData;
struct A_GNSS_Error;
struct GNSS_PeriodicAssistData_r15;

/* A-GNSS-ProvideAssistanceData */
typedef struct A_GNSS_ProvideAssistanceData {
	struct GNSS_CommonAssistData	*gnss_CommonAssistData	/* OPTIONAL */;
	struct GNSS_GenericAssistData	*gnss_GenericAssistData	/* OPTIONAL */;
	struct A_GNSS_Error	*gnss_Error	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct A_GNSS_ProvideAssistanceData__ext1 {
		struct GNSS_PeriodicAssistData_r15	*gnss_PeriodicAssistData_r15	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} A_GNSS_ProvideAssistanceData_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_A_GNSS_ProvideAssistanceData;
extern asn_SEQUENCE_specifics_t asn_SPC_A_GNSS_ProvideAssistanceData_specs_1;
extern asn_TYPE_member_t asn_MBR_A_GNSS_ProvideAssistanceData_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GNSS-CommonAssistData.h"
#include "GNSS-GenericAssistData.h"
#include "A-GNSS-Error.h"
#include "GNSS-PeriodicAssistData-r15.h"

#endif	/* _A_GNSS_ProvideAssistanceData_H_ */
#include <asn_internal.h>
