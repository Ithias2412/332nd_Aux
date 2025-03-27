class CfgPatches {
	class 332nd_Weapons_Main_Xtd {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            ""
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};

class XtdGearModels
{
    class CfgWeapons 
    {
        class 332nd_Weapons_Main_Extended
        {
            label = "Weapons";
            author = "Ithias";
			options[] = { "Rifleman", "AutoRifleman", "Marksman", "Grenadier", "Engineer", "PlatoonAssets", "Material", };
            class Rifleman
            {
                label = "Rifleman (RFL)";
				values[] = { "DC_15A", "DC_15C", "DC_15S", "DP_23", };
                changeingame = 0;
                alwaysSelectable = 1;
                class DC_15A
                {
                    label = "DC-15A";
                    description = "Clone Battle Rifle";
                    //image = "xxx";
                };
				class DC_15C
                {
                    label = "DC-15C";
                    description = "Clone Carbine";
                    //image = "xxx";
                };
				class DC_15S
                {
                    label = "DC-15S";
                    description = "Clone Carbine";
                    //image = "xxx";
                };
				class DP_23
                {
                    label = "DP-23";
                    description = "Clone Scatterblaster";
                    //image = "xxx";
                };
            };
            class AutoRifleman
            {
                label = "Auto Rifleman (AR)";
				values[] = { "Z_6", "DC_15L", };
                changeingame = 0;
                alwaysSelectable = 1;
                class Z_6
                {
                    label = "Z-6";
                    description = "Clone LMG";
                    //image = "xxx";
                };
                class DC_15L
                {
                    label = "DC-15L";
                    description = "Clone MMG";
                    //image = "xxx";
                };
            };
            class Marksman
            {
                label = "Marksman (MRK)";
				values[] = { "Valken", "Firepuncher", "DW_32S", };
                changeingame = 0;
                alwaysSelectable = 1;
                class Valken
                {
                    label = "Valken";
                    description = "High Powered Precision Blaster";
                    //image = "xxx";
                };
                class Firepuncher
                {
                    label = "Firepuncher";
                    description = "Penetrative Precision Blaster";
                    //image = "xxx";
                };
                class DW_32S
                {
                    label = "DW-32S";
                    description = "Automatic Precision Blaster";
                    //image = "xxx";
                };
            };
            class Grenadier
            {
                label = "Grenadier (GRN)";
				values[] = { "DC15A_GL", "DC15C_GL", "DC15S_GL", };
                changeingame = 0;
                alwaysSelectable = 1;
                class DC15A_GL
                {
                    label = "DC-15A";
                    description = "Clone Battle Rifle with Grenade Launcher";
                    //image = "xxx";
                };
				class DC15C_GL
                {
                    label = "DC-15C";
                    description = "Clone Carbine with Grenade Launcher";
                    //image = "xxx";
                };
				class DC15S_GL
                {
                    label = "DC-15S";
                    description = "Clone Carbine with Grenade Launcher";
                    //image = "xxx";
                };
            };
            class Engineer
            {
                label = "Engineer (ENG)";
				values[] = { "Scattergun", "C_24", };
                changeingame = 0;
                alwaysSelectable = 1;
				class Scattergun
                {
                    label = "Scattergun";
                    description = "High power Clone Scatterblaster";
                    //image = "xxx";
                };
                class C_24
                {
                    label = "C-24";
                    description = "Experimental Flame Carbine";
                    //image = "xxx";
                };
            };
            class PlatoonAssets
            {
                label = "Platoon Assets (Ask SL)";
				values[] = { "DC_15S_Shield", "DC_15X", "DLT_15", "EPL_2", };
                changeingame = 0;
                alwaysSelectable = 1;
                class DC_15S_Shield
                {
                    label = "Shield";
                    description = "(ENG) Accompanied with a DC-15S";
                    //image = "xxx";
                };
				class DC_15X
                {
                    label = "DC-15X";
                    description = "(MRK) High Powered Sniper Blaster";
                    //image = "xxx";
                };
				class DLT_15
                {
                    label = "DLT-15";
                    description = "(AR) High Powered Clone MMG";
                    //image = "xxx";
                };
				class EPL_2
                {
                    label = "EPL-2";
                    description = "(GRN) Propelled Grenade Launcher";
                    //image = "xxx";
                };
            };
            class Material
            {
                label = "Material";
				values[] = { "Default", "Wood", };
                changeingame = 0;
                alwaysSelectable = 0;
                class Default
                {
                    label = "Default";
                    description = "For normal people";
                    //image = "xxx";
                };
				class Wood
                {
                    label = "Wood";
                    description = "Weirdo";
                    //image = "xxx";
                };
            };
        };
    };
};

class XtdGearInfos
{
    class CfgWeapons 
    {
        class 332nd_DC15A
        {
            model = "332nd_Weapons_Main_Extended";
            Rifleman = "DC_15A";
			Material = "Default";
        };
        class 332nd_DC15A_Wood
        {
            model = "332nd_Weapons_Main_Extended";
            Rifleman = "DC_15A";
			Material = "Wood";
        };
        class 332nd_DC15C
        {
            model = "332nd_Weapons_Main_Extended";
            Rifleman = "DC_15C";
        };
        class 332nd_DC15S
        {
            model = "332nd_Weapons_Main_Extended";
            Rifleman = "DC_15S";
        };
		class 332nd_DP23
		{
            model = "332nd_Weapons_Main_Extended";
            Rifleman = "DP_23";
		};
		class 332nd_Z6
		{
            model = "332nd_Weapons_Main_Extended";
            AutoRifleman = "Z_6";
		};
		class 332nd_DC15L
		{
            model = "332nd_Weapons_Main_Extended";
            AutoRifleman = "DC_15L";
		};
		class 332nd_DW_32S
		{
            model = "332nd_Weapons_Main_Extended";
            Marksman = "DW_32S";
		};
		class 332nd_Firepuncher
		{
            model = "332nd_Weapons_Main_Extended";
            Marksman = "Firepuncher";
		};
		class 332nd_Valken
		{
            model = "332nd_Weapons_Main_Extended";
            Marksman = "Valken";
		};
		class 332nd_DC15A_GL
		{
            model = "332nd_Weapons_Main_Extended";
            Grenadier = "DC15A_GL";
			Material = "Default";
		};
		class 332nd_DC15A_GL_Wood
		{
            model = "332nd_Weapons_Main_Extended";
            Grenadier = "DC15A_GL";
			Material = "Wood";
		};
		class 332nd_DC15C_GL
		{
            model = "332nd_Weapons_Main_Extended";
            Grenadier = "DC15C_GL";
		};
		class 332nd_DC15S_GL
		{
            model = "332nd_Weapons_Main_Extended";
            Grenadier = "DC15S_GL";
		};
		class 332nd_C_24
		{
            model = "332nd_Weapons_Main_Extended";
            Engineer = "C_24";
		};
		class 332nd_Scattergun
		{
            model = "332nd_Weapons_Main_Extended";
            Engineer = "Scattergun";
		};
		class 332nd_DC15S_Shield
		{
            model = "332nd_Weapons_Main_Extended";
            PlatoonAssets = "DC_15S_Shield";
		};
		class 332nd_DC15X
		{
            model = "332nd_Weapons_Main_Extended";
            PlatoonAssets = "DC_15X";
		};
		class 332nd_DLT15
		{
            model = "332nd_Weapons_Main_Extended";
            PlatoonAssets = "DLT_15";
		};
		class 332nd_EPL_2
		{
            model = "332nd_Weapons_Main_Extended";
            PlatoonAssets = "EPL_2";
		};
	};
};