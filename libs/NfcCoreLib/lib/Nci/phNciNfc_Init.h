/*
*          Modifications Copyright (c) Microsoft. All rights reserved.
*
*              Original code Copyright (c), NXP Semiconductors
*/

#pragma once

#include <phNfcStatus.h>

// Table 9: NFCC Features [NCI v1.0]
#define PHNCINFC_DISCFREQCONFIG_BITMASK         (0x01)
#define PHNCINFC_DISCCONFIGMODE_BITMASK         (0x06)

#define PHNCINFC_TECHNBASEDRTNG_BITMASK         (0x02)
#define PHNCINFC_PROTOBASEDRTNG_BITMASK         (0x04)
#define PHNCINFC_AIDBASEDRTNG_BITMASK           (0x08)

#define PHNCINFC_BATTOFFSTATE_BITMASK           (0x01)
#define PHNCINFC_SWITCHOFFSTATE_BITMASK         (0x02)

// Table 10: NFCC Features [NCI v2.0]
#define PHNCINFC_HCI_NETWORK_SUPPORT_BITMASK    (0x08)


extern phNciNfc_SequenceP_t gphNciNfc_InitSequence[];
extern phNciNfc_SequenceP_t gphNciNfc_ReleaseSequence[];
extern phNciNfc_SequenceP_t gphNciNfc_NfccResetSequence[];