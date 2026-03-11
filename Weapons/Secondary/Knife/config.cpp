class CfgPatches {
	class 332nd_Knife {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "332nd_Knife",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};

class cfgWeapons 
{
	class SW_clone_knife;
	class Weap_melee_knife;
	class Knife_kukri;
	
	class 332nd_Knife: Weap_melee_knife
	{
		displayName="[332nd] Reconnaissance Knife (ARF)";
		IMS_ExecutionType = "Knife";
		IMS_Melee_Param_Damage = 1;
		//IMS_Melee_Param_Damage = 0.50;
		IMS_Melee_Param_Sounds = "[""generis_empty_1"",""generis_empty_2"",""generis_empty_3"",""generis_empty_4"",""generis_empty_5""]";
		IMS_Melee_Param_SoundsOnBlock = "[""sword_to_sword_1"",""sword_to_sword_2"",""sword_to_sword_3"",""sword_to_sword_4""]";
		IMS_Melee_Param_SoundsOnHit = "[""sword_hit_1"",""sword_hit_2"",""sword_hit_3"",""sword_hit_4"",""sword_hit_5"",""sword_hit_6""]";
		IMS_WeaponType = "OneHanded";
		model = "LFPmeleeweap\data\cloneknife.p3d";
		picture = "\APR_IMS_iconRework\data\UI\WBK_IMS_Wpn_KnifeUNSC_X_ca.paa";
	};
};