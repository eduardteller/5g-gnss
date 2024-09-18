/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Ver2-ULP-Components"
 * 	found in "/home/martin/repos/LPP-Client/asn/ULP-Components.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#ifndef	_GNSSPosTechnology_H_
#define	_GNSSPosTechnology_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GNSSPosTechnology */
typedef struct GNSSPosTechnology {
	BOOLEAN_t	 gps;
	BOOLEAN_t	 galileo;
	BOOLEAN_t	 sbas;
	BOOLEAN_t	 modernized_gps;
	BOOLEAN_t	 qzss;
	BOOLEAN_t	 glonass;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GNSSPosTechnology_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GNSSPosTechnology;
extern asn_SEQUENCE_specifics_t asn_SPC_GNSSPosTechnology_specs_1;
extern asn_TYPE_member_t asn_MBR_GNSSPosTechnology_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _GNSSPosTechnology_H_ */
#include <asn_internal.h>
