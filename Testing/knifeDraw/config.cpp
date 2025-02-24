class CfgPatches
{
	class 332nd_KnifeDraw
	{
		name = "332rnd Knife Draw";
		units[] = {};
		weapons[] = {}; 
		requiredAddons[] = {};
		author = "Frankie";
		authors[] = {""};
	};
};


class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class danceParty {
                displayName = "dance";
                condition = "[_player] call onDanceFloor";
                exceptions[] = {};
                statement = "_player switchMove 'TestDance'";
                icon = "\z\dance.paa";
            };
        };
    };
};