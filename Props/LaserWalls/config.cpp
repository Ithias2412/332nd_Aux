class CfgPatches
{
	class 332nd_Props_LaserWalls
	{
		requiredAddons[]=
		{"3as_props_Umbara"};
		units[]={};
		weapons[]={};
	};
	author="Viper";
}; 

class CfgVehicles
{
    class 3AS_Wall_Laser;
    class 3AS_Wall_Laser_Purple: 3AS_Wall_Laser
    {
        displayName = "Laser Wall (Purple)";
        hiddenSelectionsMaterials[] = {"3as\3AS_Props\LaserWalls\data\wall_laser\base.rvmat","332nd_Aux\Props\LaserWalls\Purple.rvmat"};
        hiddenSelectionsTextures[] = {"3as\3AS_Props\LaserWalls\data\wall_laser\wall_laser_CO.paa","#(argb,8,8,3)color(0.60,0,1,1.0,CO)"};
    };
    class 3AS_Wall_Laser_White: 3AS_Wall_Laser
    {
        displayName = "Laser Wall (White)";
        hiddenSelectionsMaterials[] = {"3as\3AS_Props\LaserWalls\data\wall_laser\base.rvmat","332nd_Aux\Props\LaserWalls\White.rvmat"};
        hiddenSelectionsTextures[] = {"3as\3AS_Props\LaserWalls\data\wall_laser\wall_laser_CO.paa","#(argb,8,8,3)color(1,1,1,1.0,CO)"};
    };
    class land_3as_Umbara_Base;
    class land_3as_Umbara_Base_Glow_R: land_3as_Umbara_Base
	{
		scope=0;
		aggregateReflectors[]=
		{
			
			{
				"Light_1"
			}
		};
		class Reflectors
		{
			class Light_1
			{
				color[]={217,18,18,0.50999999};
				ambient[]={217,18,18,0.50999999};
				intensity=0.25;
				size=10;
				innerAngle=360;
				outerAngle=360;
				coneFadeCoef=4;
				position="Light_1_pos";
				direction="Light_1_dir";
				selection="Light_1_pos";
                hitpoint="Light_1_pos";
				useflare=0;
				flaresize=0;
				flareMaxDistance=130;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=0;
					quadratic=0.30000001;
					hardLimitStart=50;
					hardLimitEnd=65;
				};
			};
		};
	};
	class land_3as_Umbara_Base_Glow_P: land_3as_Umbara_Base
	{
		scope=0;
		aggregateReflectors[]=
		{
			
			{
				"Light_1"
			}
		};
		class Reflectors
		{
			class Light_1
			{
				color[]={174,39,245,0.61000001};
				ambient[]={174,39,245,0.61000001};
				intensity=0.25;
				size=10;
				innerAngle=360;
				outerAngle=360;
				coneFadeCoef=4;
				position="Light_1_pos";
				direction="Light_1_dir";
				selection="Light_1_pos";
                hitpoint="Light_1_pos";
				useflare=0;
				flaresize=0;
				flareMaxDistance=130;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=0;
					quadratic=0.30000001;
					hardLimitStart=50;
					hardLimitEnd=65;
				};
			};
		};
	};
};