class CfgPatches
{
	class 332nd_Props_LaserWalls
	{
		requiredAddons[]=
		{};
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
};