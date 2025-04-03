class CfgPatches {
	class 332nd_Fortify {
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
//#include "xtdGear.hpp"
class ACEX_Fortify_Presets 
{
    class 332nd_Fortify_Preset 
	{
        displayName = "332nd Preset";
        objects[] = 
		{
            {"3AS_Barricade_Cover_1_Prop", 15, "Deployable"},
            {"3AS_Barricade_Cover_2_Prop", 20, "Deployable"},
			{"land_3as_Ladder5", 15, "Deployable"},
			
			{"Land_lsb_fob_hBarrier_5", 60, "Buildable"},
			{"Land_lsb_fob_hBarrierWall_exvertedCorner", 120, "Buildable"},
			{"Land_lsb_fob_hBarrierWall_4", 120, "Buildable"},
			{"Land_lsb_fob_hBarrierWall_invertedCorner", 120, "Buildable"},
			{"Land_lsb_fob_hBarrierWall_7", 150, "Buildable"},
			{"Land_lsb_fob_hBarrier_tower", 180, "Buildable"},
			
			{"k_porg", 10, "Friends"},
			{"TKE_Smelvin2", 10, "Friends"},
        };
    };
};