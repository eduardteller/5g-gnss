/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#ifndef	_HorizontalWithVerticalVelocityAndUncertainty_H_
#define	_HorizontalWithVerticalVelocityAndUncertainty_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HorizontalWithVerticalVelocityAndUncertainty__verticalDirection {
	HorizontalWithVerticalVelocityAndUncertainty__verticalDirection_upward	= 0,
	HorizontalWithVerticalVelocityAndUncertainty__verticalDirection_downward	= 1
} e_HorizontalWithVerticalVelocityAndUncertainty__verticalDirection;

/* HorizontalWithVerticalVelocityAndUncertainty */
typedef struct HorizontalWithVerticalVelocityAndUncertainty {
	long	 bearing;
	long	 horizontalSpeed;
	long	 verticalDirection;
	long	 verticalSpeed;
	long	 horizontalUncertaintySpeed;
	long	 verticalUncertaintySpeed;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HorizontalWithVerticalVelocityAndUncertainty_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_verticalDirection_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_HorizontalWithVerticalVelocityAndUncertainty;
extern asn_SEQUENCE_specifics_t asn_SPC_HorizontalWithVerticalVelocityAndUncertainty_specs_1;
extern asn_TYPE_member_t asn_MBR_HorizontalWithVerticalVelocityAndUncertainty_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _HorizontalWithVerticalVelocityAndUncertainty_H_ */
#include <asn_internal.h>
