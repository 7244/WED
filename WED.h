#pragma once

#ifndef WED_set_Prefix
  #error set Prefix
#endif

#ifndef WED_set_WidthType
  #define WED_set_WidthType uint32_t
#endif

#ifndef WED_set_debug_InvalidCharacterAccess
  #define WED_set_debug_InvalidCharacterAccess 0
#endif
#ifndef WED_set_debug_InvalidLineAccess
  #define WED_set_debug_InvalidLineAccess 0
#endif
#ifndef WED_set_debug_InvalidCursorAccess
  #define WED_set_debug_InvalidCursorAccess 0
#endif

#ifndef WED_set_DataType
  #define WED_set_DataType wchar_t
#endif

#define _WED_P(p) CONCAT3(WED_set_Prefix,_,p)

#include "internal/Base.h"

#undef _WED_P

#undef WED_set_DataType

#undef WED_set_debug_InvalidCursorAccess
#undef WED_set_debug_InvalidLineAccess
#undef WED_set_debug_InvalidCharacterAccess

#undef WED_set_WidthType

#undef WED_set_Prefix
