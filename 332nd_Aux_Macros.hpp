/*
    332nd_Aux_Macros.hpp
    Shared preprocessor macros for uniform / gear configs.

    These macros exist purely to remove the copy-paste boilerplate from the
    Arsenal item configs. Every macro expands to exactly the same class body it
    replaced, so the compiled output is unchanged.

    Include from a faction config with the correct relative depth, e.g.
        #include "..\..\332nd_Aux_Macros.hpp"   // Uniforms\ARF\config.cpp
        #include "..\332nd_Aux_Macros.hpp"       // NVGs_And_Face_Wear\config.cpp

    --- XtdGearInfos entries (arsenal "Extended Gear" wiring) ---
    XTD_INFO(NAME, MODEL, KEY, VAL)
        class NAME { model = MODEL; KEY = VAL; };
    XTD_INFO2(NAME, MODEL, KEYA, VALA, KEYB, VALB)
        class NAME { model = MODEL; KEYA = VALA; KEYB = VALB; };

    --- Standard infantry uniform (base 332nd_Uniform_Clone_CR / _CR_Veh) ---
    UNI_ITEM(NAME, VEHREF, DISP)   cfgWeapons  uniform item
    UNI_VEH(NAME, ITEMREF, TEXUP, TEXLO)   CfgVehicles  wearer, 2 hidden textures
*/

#define XTD_INFO(NAME,MODEL,KEY,VAL) class NAME { model = MODEL; KEY = VAL; };

#define XTD_INFO2(NAME,MODEL,KEYA,VALA,KEYB,VALB) class NAME { model = MODEL; KEYA = VALA; KEYB = VALB; };

#define UNI_ITEM(NAME,VEHREF,DISP) class NAME: 332nd_Uniform_Clone_CR { displayName = DISP; class ItemInfo: UniformItem { uniformModel = ""; uniformClass = VEHREF; uniformType = "Neopren"; containerClass = "Supply50"; mass = 40; }; };

#define UNI_VEH(NAME,ITEMREF,TEXUP,TEXLO) class NAME: 332nd_Uniform_Clone_CR_Veh { scope = 1; uniformClass = ITEMREF; hiddenSelectionsTextures[] = { TEXUP, TEXLO }; };

// As UNI_VEH but restates the shared model / hiddenSelections / camouflage (ARF style).
#define UNI_VEH_ARF(NAME,ITEMREF,TEXUP,TEXLO) class NAME: 332nd_Uniform_Clone_CR_Veh { scope = 1; uniformClass = ITEMREF; model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d"; hiddenSelections[] = { "camo1", "camo2", "insignia" }; hiddenSelectionsTextures[] = { TEXUP, TEXLO }; camouflage = 0.1; };
