///////////////////////////////////////////////////////////////////////////////////////////////////
//// SECTION -> Pre-Processor (Non-Defs)
///////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#define divCeiling(x, y) (!!x + ((x - !!x) / y))

///////////////////////////////////////////////////////////////////////////////////////////////////
//// SECTION -> System Properties ==>> Prefix: BRD__
///////////////////////////////////////////////////////////////////////////////////////////////////

#define SYS__TOTAL_RAM 192000


///////////////////////////////////////////////////////////////////////////////////////////////////
//// SECTION -> Global Settings ==>> Prefix: PROG__
///////////////////////////////////////////////////////////////////////////////////////////////////

#define PROG__DEBUG_MODE 1 // 1 = Debug mode -> print things, 0 = Standard mode -> dont print. 

#define REQUEST_MAX_SIZE 256
#define RESPONSE_MAX_SIZE 512


///////////////////////////////////////////////////////////////////////////////////////////////////
//// SECTION -> Communication Protocol ==>> Prefix: PRTC__
///////////////////////////////////////////////////////////////////////////////////////////////////

#define PRTC__NONE 0


///////////////////////////////////////////////////////////////////////////////////////////////////
//// SECTION -> Enums ==>> Suffix: _ID, Preffix: Same & Related to Their System/Class. 
///////////////////////////////////////////////////////////////////////////////////////////////////

// NOTE =>> ALL ENUMS MUST END WITH _ID

enum SETTING_ID : uint8_t {
  SETTING_NONE = PRTC__NONE,
  SETTING_TEST1,
  SETTING_TEST2
};
 
enum ERROR_ID : uint8_t {
  ERROR_NONE = PRTC__NONE,
  ERROR_TEST1,
  ERROR_TEST2
};

enum RESTART_FLAG_ID : uint8_t {
  RESTART_NONE = PRTC__NONE,
  RESTART_TEST1,
  RESTART_TEST2
};


