/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#ifndef	_OTDOA_ProvideAssistanceData_H_
#define	_OTDOA_ProvideAssistanceData_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct OTDOA_ReferenceCellInfo;
struct OTDOA_NeighbourCellInfoList;
struct OTDOA_Error;
struct OTDOA_ReferenceCellInfoNB_r14;
struct OTDOA_NeighbourCellInfoListNB_r14;

/* OTDOA-ProvideAssistanceData */
typedef struct OTDOA_ProvideAssistanceData {
	struct OTDOA_ReferenceCellInfo	*otdoa_ReferenceCellInfo	/* OPTIONAL */;
	struct OTDOA_NeighbourCellInfoList	*otdoa_NeighbourCellInfo	/* OPTIONAL */;
	struct OTDOA_Error	*otdoa_Error	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct OTDOA_ProvideAssistanceData__ext1 {
		struct OTDOA_ReferenceCellInfoNB_r14	*otdoa_ReferenceCellInfoNB_r14	/* OPTIONAL */;
		struct OTDOA_NeighbourCellInfoListNB_r14	*otdoa_NeighbourCellInfoNB_r14	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} OTDOA_ProvideAssistanceData_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_OTDOA_ProvideAssistanceData;
extern asn_SEQUENCE_specifics_t asn_SPC_OTDOA_ProvideAssistanceData_specs_1;
extern asn_TYPE_member_t asn_MBR_OTDOA_ProvideAssistanceData_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "OTDOA-ReferenceCellInfo.h"
#include "OTDOA-NeighbourCellInfoList.h"
#include "OTDOA-Error.h"
#include "OTDOA-ReferenceCellInfoNB-r14.h"
#include "OTDOA-NeighbourCellInfoListNB-r14.h"

#endif	/* _OTDOA_ProvideAssistanceData_H_ */
#include <asn_internal.h>
