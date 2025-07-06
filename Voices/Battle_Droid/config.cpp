class CfgPatches 
{
    class 332nd_Voices_Battle_Droid
	{
        author = "Ithias";
        name = "332nd Battle Droid Voice";
		requiredAddons[]=
		{
			"A3_Dubbing_Radio_F",
			"A3_Dubbing_Radio_F_EXP",
			"A3_Dubbing_Radio_F_Enoch"
		};
        weapons[] = {};
        units[] = {};
    };
};

class CfgVoice
{
	voices[]+=
	{
		"332nd_B1_Voice"
	};
	class ENG;
	class 332nd_B1_Voice: ENG
	{
		scope=2;
		displayName="[332nd] B1 Battledroid";
		protocol = "RadioProtocolENG";
		directories[] = 
		{
			"\SWDROIDVOICE\",
			"\SWDROIDVOICE\",
		};
		identityTypes[]=
		{
			"332nd_B1_Voice",
		};
	};
};