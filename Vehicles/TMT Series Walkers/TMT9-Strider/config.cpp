class CfgPatches {
	class 332nd_TUM5 {
		author = "WebKnight & Cherryy";
		units[] = {"332nd_TUM5"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F","a3_anims_f"};
	};
};




class CfgVehicles 
    {
    class WBK_WRS_WGP1_Ver1;
    class 332nd_TUM5: WBK_WRS_WGP1_Ver1 
        {
            identityTypes[] = {"LanguageENGVR_F","Head_NATO","NoGlasses"};
            side = 1;
            _generalMacro = "WBK_WRS_WGP1_Ver1";
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
                "\WRS_Mech\textures\WGP_Low_FS_CO.paa",
                "\WRS_Mech\textures\WGP_Up_FS_CO.paa",
                "\WRS_Mech\textures\WGP_UpEx_FS_CO.paa",
                "",
                "",
                "",
                ""
            };
            items[] = {};
            editorSubcategory = "WBK_WGP_SubCat";
            faction = "WBK_WGP_BLUFOR";
            uniformClass = "WRS_Stryder_Uniform";
            nakedUniform = "WRS_Stryder_Uniform";
            vehicleclass = "Men";
            displayName = "TGT-9 (Strider)";
            gestures = "CfgGestures_WBK_WRS_Stryder";
            moves = "CfgMoves_WBK_WRS_Stryder";
            model = "WRS_Mech\models\WBK_WRS_Stryder.p3d";
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
            linkedItems[]=
            {
                "ItemGPS",
                "ItemMap",
                "ItemCompass",
                "ItemWatch",
                "ItemRadio",
                "NVGogglesB_gry_F"
            };
            RespawnlinkedItems[]=
            {
                "ItemGPS",
                "ItemMap",
                "ItemCompass",
                "ItemWatch",
                "ItemRadio",
                "NVGogglesB_gry_F"
            };
        };

};