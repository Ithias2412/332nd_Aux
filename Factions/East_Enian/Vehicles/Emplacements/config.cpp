class CfgPatches 
{
    class 332nd_East_Enia_Faction_Vehicles_Emplacements
	{
        author = "Ithias";
        name = "East Enian Emplacements";
        weapons[] = {};
		requiredAddons[] = 
		{
			"101st_EWEB",
			"3AS_CIS_Static_J10s",
			"3AS_Mortar",
			"3AS_Static_ParticleCannon",
		};
        units[] = 
		{
            "332nd_East_Enia_Particle_Cannon",
			"332nd_East_Enia_Mortar",
			"332nd_East_Enia_J10",
			"332nd_East_Enia_EWEB",
        };
    };
};

class CfgVehicles
{
	class 3as_ParticleCannon;
	class 332nd_East_Enia_Particle_Cannon: 3as_ParticleCannon
	{
		faction="332nd_East_Enia_Faction";
		editorSubcategory = "EdSubcat_332nd_Emplacements";
		displayName="Particle Cannon";
		editorPreview = "";
		crew = "332nd_Enia_Base";
	};
	class 3as_CIS_Mortar;
	class 332nd_East_Enia_Mortar: 3as_CIS_Mortar
	{
		faction="332nd_East_Enia_Faction";
		editorSubcategory = "EdSubcat_332nd_Emplacements";
		displayName="Mortar";
		editorPreview = "";
		crew = "332nd_Enia_Base";
	};
	class 3AS_J10s_F;
	class 332nd_East_Enia_J10: 3AS_J10s_F
	{
		faction="332nd_East_Enia_Faction";
		editorSubcategory = "EdSubcat_332nd_Emplacements";
		displayName="J10";
		editorPreview = "";
		crew = "332nd_Enia_Base";
	};
	class 101st_EWEB;
	class 332nd_East_Enia_EWEB: 101st_EWEB
	{
		faction="332nd_East_Enia_Faction";
		editorSubcategory = "EdSubcat_332nd_Emplacements";
		displayName="EWEB";
		editorPreview = "";
		crew = "332nd_Enia_Base";		
	};
};