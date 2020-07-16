/* Keep this file language agnostic. Only preprocessor here. */

#ifndef __FIRMWARE_SYMBOLS_H_S__
#define __FIRMWARE_SYMBOLS_H_S__

#define umd_mutex_offset (0x64480+0x38C)

#include "symbols_355C.h"
#include "symbols_355D.h"
#include "symbols_421C.h"
#include "symbols_421D.h"
#include "symbols_430C.h"
#include "symbols_430D.h"
#include "symbols_431C.h"
#include "symbols_440C.h"
#include "symbols_441C.h"
#include "symbols_441D.h"
#include "symbols_446C.h"
#include "symbols_446D.h"
#include "symbols_450C.h"
#include "symbols_450D.h"
#include "symbols_453C.h"
#include "symbols_453D.h"
#include "symbols_455C.h"
#include "symbols_455D.h"
#include "symbols_460C.h"
#include "symbols_460D.h"
#include "symbols_465C-466C.h"
#include "symbols_465D-466D.h"
#include "symbols_470C.h"
#include "symbols_470D.h"
#include "symbols_475C.h"
#include "symbols_475D.h"
#include "symbols_476C.h"
#include "symbols_476D.h"
#include "symbols_478C.h"
#include "symbols_478D.h"
#include "symbols_480C.h"
#include "symbols_480D.h"
#include "symbols_481C.h"
#include "symbols_481D.h"
#include "symbols_482C-486C.h"
#include "symbols_482D-486D.h"
#include "symbols_475E-486E.h"

#define DO_PHOTO_GUI
#define DO_AUTO_EARTH
#define DO_AUTO_DEV_BLIND

#if defined(aescbccfb_enc_symbol) && defined(aescbccfb_dec_symbol)
  #define MAKE_RIF
#endif

#ifdef FIRMWARE_DEX
 #if defined(SHA1_init_symbol) && defined(SHA1_update_symbol) && defined(SHA1_final_symbol)
    #define DO_REACTPSN
 #endif
#endif

#ifdef FIRMWARE_CEX
 #ifdef update_mgr_read_eeprom_symbol
  #define QA_FLAG
 #endif
#endif

#if defined(sysmem_obj) && defined(sm_set_fan_policy_symbol)
 #define FAN_CONTROL
#endif

#ifdef ECDSA_FLAG
 #define APPLY_KERNEL_PATCHES
#endif

#ifdef ps2tonet_size_patch
 #undef ps2tonet_patch
#endif
#ifndef VSH_HASH
 #undef ps2tonet_patch
#endif

#endif /* __FIRMWARE_SYMBOLS_H_S__ */
