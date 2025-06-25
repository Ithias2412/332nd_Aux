
class CfgPatches {
	class 332nd_TUM5 {
		author = "WebKnight & Cherryy";
		units[] = {"332nd_TUM5"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F","a3_anims_f", "WBK_WRS_Mechs", "cba_main"};
	};
};




class CfgVehicles 
    {
    class WBK_WRS_WGP1_Ver1;
    class 332nd_TUM5: WBK_WRS_WGP1_Ver1 
        {
            identityTypes[] = {"LanguageENGVR_F","Head_NATO","NoGlasses"};
            side = 0; //This is OPFOR
            hiddenSelections[]=
            {
                "Lower_inner",
                "Lower_outer",
                "upper_Exterior",
                "upper_Extras",
                "Muzzleflash_1",
                "Muzzleflash_2",
                "Muzzleflash_3",
                "Muzzleflash_4"
            };
            hiddenSelectionsTextures[]=
            {
                "\WRS_Mech\textures\WGP_LowInt_FS_CO.paa",
                "332nd_Aux\Vehicles\TU_M_Series_Walkers\TU-M5\tex\TUM5_Strider_Lower.paa",
                "332nd_Aux\Vehicles\TU_M_Series_Walkers\TU-M5\tex\TUM5_Strider_Upper.paa",
                "\WRS_Mech\textures\WGP_UpEx_FS_CO.paa",
                "",
                "",
                "",
                ""
            };
            items[] = {}; 
            editorSubcategory = "EdSubcat_332nd_Techno_Union_Walkers";
            faction = "332nd_CIS_Faction";
            displayName = "TU-M5 (Strider)";
            armor = 7;
            magazines[]=
            {
            };
            respawnweapons[]=
            {
                "Throw",
                "Put"
            };
            respawnMagazines[]=
            {
            };
        };

};

class Extended_PreInit_EventHandlers
{
    class 332nd_TUM5_PreInit
    {
        init="call compileScript ['332nd_Aux\Vehicles\TU_M_Series_Walkers\XEH_preInit.sqf']";
    };
};

class Extended_PostInit_EventHandlers 
{
    class 332nd_TUM5_PostInit 
	{
        init="call compileScript ['332nd_Aux\Vehicles\TU_M_Series_Walkers\XEH_postInit.sqf']";
    };
}; 


class CfgSounds
{
    sounds[] = {};
	class TUM5_Main_Gun1
    {
    name = "TUM5_Main_Gun1";
    sound[] = {"332nd_Aux\Vehicles\TU_M_Series_Walkers\TUM5_Main_Gun.ogg", db+12, 1};
    titles[]={};
	};
    class TUM5_Main_Gun2
    {
    name = "TUM5_Main_Gun2";
    sound[] = {"332nd_Aux\Vehicles\TU_M_Series_Walkers\TUM5_Main_Gun.ogg", db+12, 1};
    titles[]={};
	};
    class TUM5_Main_Gun3
    {
    name = "TUM5_Main_Gun3";
    sound[] = {"332nd_Aux\Vehicles\TU_M_Series_Walkers\TUM5_Main_Gun.ogg", db+12, 1};
    titles[]={};
	};
};
