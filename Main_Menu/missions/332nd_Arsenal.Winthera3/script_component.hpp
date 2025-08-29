#define COMPONENT arsenal
#define COMPONENT_BEAUTIFIED Arsenal
#include "\z\ace\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_ARSENAL
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_ARSENAL
    #define DEBUG_SETTINGS DEBUG_SETTINGS_ARSENAL
#endif

#include "\z\ace\addons\main\script_macros.hpp"


#undef PREP // make.py can't redefine already defined macros
#define PREP(var) FUNC(var) = compileFinal preprocessFileLineNumbers format ["fnc_%1.sqf", QUOTE(var)]
