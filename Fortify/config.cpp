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
            {"3AS_Shield_3_Prop", 10, "Deployable"},
            {"3AS_Shield_5_Prop", 15, "Deployable"},
            {"3AS_Shield_C_Prop", 20, "Deployable"},
			{"land_3as_Ladder5", 10, "Deployable"},
			
			{"Land_lsb_fob_hBarrier_5", 40, "Buildable"},
			{"Land_lsb_fob_hBarrierWall_exvertedCorner", 80, "Buildable"},
			{"Land_lsb_fob_hBarrierWall_4", 80, "Buildable"},
			{"Land_lsb_fob_hBarrierWall_invertedCorner", 80, "Buildable"},
			{"Land_lsb_fob_hBarrierWall_7", 100, "Buildable"},
			{"Land_lsb_fob_hBarrier_tower", 120, "Buildable"},
			
			{"k_porg", 10, "Friends"},
			{"TKE_Smelvin2", 10, "Friends"},
			{"Campfire_burning_F", 10, "Camping"},
			{"Land_CampingChair_V1_F", 10, "Camping"},
        };
    };
};