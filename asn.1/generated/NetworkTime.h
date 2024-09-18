/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#ifndef	_NetworkTime_H_
#define	_NetworkTime_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "ARFCN-ValueEUTRA.h"
#include "ARFCN-ValueEUTRA-v9a0.h"
#include <constr_SEQUENCE.h>
#include "ARFCN-ValueUTRA.h"
#include <constr_CHOICE.h>
#include "CarrierFreq-NB-r14.h"
#include "ARFCN-ValueNR-r15.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NetworkTime__cellID_PR {
	NetworkTime__cellID_PR_NOTHING,	/* No components present */
	NetworkTime__cellID_PR_eUTRA,
	NetworkTime__cellID_PR_uTRA,
	NetworkTime__cellID_PR_gSM,
	/* Extensions may appear below */
	NetworkTime__cellID_PR_nBIoT_r14,
	NetworkTime__cellID_PR_nr_r15
} NetworkTime__cellID_PR;
typedef enum NetworkTime__cellID__uTRA__mode_PR {
	NetworkTime__cellID__uTRA__mode_PR_NOTHING,	/* No components present */
	NetworkTime__cellID__uTRA__mode_PR_fdd,
	NetworkTime__cellID__uTRA__mode_PR_tdd
} NetworkTime__cellID__uTRA__mode_PR;

/* Forward declarations */
struct CellGlobalIdEUTRA_AndUTRA;
struct CellGlobalIdGERAN;
struct ECGI;
struct NCGI_r15;

/* NetworkTime */
typedef struct NetworkTime {
	long	 secondsFromFrameStructureStart;
	long	 fractionalSecondsFromFrameStructureStart;
	long	*frameDrift	/* OPTIONAL */;
	struct NetworkTime__cellID {
		NetworkTime__cellID_PR present;
		union NetworkTime__cellID_u {
			struct NetworkTime__cellID__eUTRA {
				long	 physCellId;
				struct CellGlobalIdEUTRA_AndUTRA	*cellGlobalIdEUTRA	/* OPTIONAL */;
				ARFCN_ValueEUTRA_t	 earfcn;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
				struct NetworkTime__cellID__eUTRA__ext1 {
					ARFCN_ValueEUTRA_v9a0_t	*earfcn_v9a0	/* OPTIONAL */;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *ext1;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} eUTRA;
			struct NetworkTime__cellID__uTRA {
				struct NetworkTime__cellID__uTRA__mode {
					NetworkTime__cellID__uTRA__mode_PR present;
					union NetworkTime__cellID__uTRA__mode_u {
						struct NetworkTime__cellID__uTRA__mode__fdd {
							long	 primary_CPICH_Info;
							/*
							 * This type is extensible,
							 * possible extensions are below.
							 */
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} fdd;
						struct NetworkTime__cellID__uTRA__mode__tdd {
							long	 cellParameters;
							/*
							 * This type is extensible,
							 * possible extensions are below.
							 */
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} tdd;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} mode;
				struct CellGlobalIdEUTRA_AndUTRA	*cellGlobalIdUTRA	/* OPTIONAL */;
				ARFCN_ValueUTRA_t	 uarfcn;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} uTRA;
			struct NetworkTime__cellID__gSM {
				long	 bcchCarrier;
				long	 bsic;
				struct CellGlobalIdGERAN	*cellGlobalIdGERAN	/* OPTIONAL */;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} gSM;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			struct NetworkTime__cellID__nBIoT_r14 {
				long	 nbPhysCellId_r14;
				struct ECGI	*nbCellGlobalId_r14	/* OPTIONAL */;
				CarrierFreq_NB_r14_t	 nbCarrierFreq_r14;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} nBIoT_r14;
			struct NetworkTime__cellID__nr_r15 {
				long	 nrPhysCellId_r15;
				struct NCGI_r15	*nrCellGlobalID_r15	/* OPTIONAL */;
				ARFCN_ValueNR_r15_t	 nrARFCN_r15;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} nr_r15;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} cellID;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NetworkTime_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NetworkTime;
extern asn_SEQUENCE_specifics_t asn_SPC_NetworkTime_specs_1;
extern asn_TYPE_member_t asn_MBR_NetworkTime_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CellGlobalIdEUTRA-AndUTRA.h"
#include "CellGlobalIdGERAN.h"
#include "ECGI.h"
#include "NCGI-r15.h"

#endif	/* _NetworkTime_H_ */
#include <asn_internal.h>
