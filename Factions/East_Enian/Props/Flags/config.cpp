class CfgPatches 
{
    class 332nd_East_Enia_Faction_Props_Flag
	{
        author = "Ithias";
        name = "East Enian Flag";
        weapons[] = {};
		requiredAddons[] = {};
        units[] = 
		{
            "332nd_East_Enia_Props_Flag",
			"332nd_East_Enia_Props_Flag_Dmg",
        };
    };
};

class CfgVehicles 
{
	class Flag_US_F;
	class 332nd_East_Enia_Props_Flag: Flag_US_F
	{
		displayName = "Flag (Enian Guard)";
		editorCategory = "332nd_Enia";
		CfgEditorSubcategories = "EdSubcat_332nd_Enian_Flags";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '332nd_Aux\Factions\East_Enian\Props\Tex\Enian_Guard_Flag.paa'";
		};
	};
	class 332nd_East_Enia_Props_Flag_Dmg: Flag_US_F
	{
		displayName = "Flag (Enian Guard / Damaged)";
		editorCategory = "332nd_Enia";
		CfgEditorSubcategories = "EdSubcat_332nd_Enian_Flags";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '332nd_Aux\Factions\East_Enian\Props\Tex\Enian_Guard_Flag_Dmg.paa'";
		};
	};
};