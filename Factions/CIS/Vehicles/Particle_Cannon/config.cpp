class CfgPatches 
{
    class 332nd_CIS_Faction_Vehicles_Particle_Cannon
	{
		units[] = 
        {
            "332nd_CIS_Particle_Cannon",
        };
		weapons[] = 
        {
            ""
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};

class CfgVehicles
{
	class 3as_ParticleCannon;
	class 332nd_CIS_Particle_Cannon: 3as_ParticleCannon
	{
		faction="332nd_CIS_Faction";
		editorSubcategory = "EdSubcat_332nd_Emplacements";
		displayName="Particle Cannon";
		//armor = 60;
		editorPreview = "";
	};
};