class CfgPatches
{
	class 332nd_Aux_Music
	{
		name = "332nd Aux Music";
		author = "Frankie";
		requiredVersion = 1;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
		worlds[] = {};
	};
};
class CfgMusic
{
    class Brain_Stew
    {
        name = "Brain Stew";
		sound[] = {"332nd_Aux\music\music\brain_Stew.ogg",1,1};
		duration = 190;
		musicClass = "332nd_Music";
    };
    class Highway_to_Hell
    {
        name = "Highway To Hell";
		sound[] = {"332nd_Aux\music\music\Highway_to_Hell.ogg",1,1};
		duration = 190;
		musicClass = "332nd_Music";
    };
    class Sympathy_for_the_Devil
    {
        name = "Sympathy for the Devil";
		sound[] = {"332nd_Aux\music\music\Sympathy_for_the_Devil.ogg",1,1};
		duration = 190;
		musicClass = "332nd_Music";
    };
    class Thunderstruck
    {
        name = "Thunderstruck";
		sound[] = {"332nd_Aux\music\music\Thunderstruck.ogg",1,1};
		duration = 190;
		musicClass = "332nd_Music";
    };
    class Welcome_to_the_Jungle
    {
        name = "Welcome to the Jungle";
		sound[] = {"332nd_Aux\music\music\Welcome_to_the_Jungle.ogg",1,1};
		duration = 190;
		musicClass = "332nd_Music";
    };
};

class CfgMusicClasses
{
	class 332nd_Music
	{
		displayName = "[332nd] Music";
	};
};