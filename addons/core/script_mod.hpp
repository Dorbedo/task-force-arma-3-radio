// COMPONENT should be defined in the script_component.hpp and included BEFORE this hpp

#define MAINPREFIX z
#define PREFIX tfar

#define MAJOR 1
#define MINOR -1
#define PATCHLVL 0
#define BUILD 0

#define VERSION MAJOR.MINOR.PATCHLVL.BUILD
#define VERSION_AR MAJOR,MINOR,PATCHLVL,BUILD
#define TFAR_ADDON_VERSION QUOTE(VERSION)

// MINIMAL required version for the Mod. Components can specify others..
#define REQUIRED_VERSION 1.72
#define REQUIRED_CBA_VERSION {3,0,0}
