//===========================================================================
//======================== TTD Post Configuration ===========================
//===========================================================================

#pragma once

// TallTechDude Customisations ---------------------
#define HOME_AFTER_DEACTIVATE  // Require rehoming after steppers are deactivated
#define ARC_SUPPORT            // G2/G3 Arc Support
#define RESTORE_LEVELING_AFTER_G28

#define HOST_ACTION_COMMANDS
#define HOST_PROMPT_SUPPORT
#define HOST_START_MENU_ITEM  // Add a menu item that tells the host to start

#undef HOMING_FEEDRATE_Z
#define HOMING_FEEDRATE_Z  (8*60)

#undef Z_PROBE_FEEDRATE_FAST
#define Z_PROBE_FEEDRATE_FAST HOMING_FEEDRATE_Z

#undef Z_PROBE_FEEDRATE_SLOW
#define Z_PROBE_FEEDRATE_SLOW (Z_PROBE_FEEDRATE_FAST / 4)

#undef Z_CLEARANCE_DEPLOY_PROBE
#define Z_CLEARANCE_DEPLOY_PROBE   6

#undef Z_CLEARANCE_BETWEEN_PROBES
#define Z_CLEARANCE_BETWEEN_PROBES 2

#undef Z_CLEARANCE_MULTI_PROBE
#define Z_CLEARANCE_MULTI_PROBE    1.4

#ifndef SDCARD_CONNECTION
    #define SDCARD_CONNECTION ONBOARD
#endif

//===========================================================================
//====================== TTD Post Configuration End =========================
//===========================================================================
