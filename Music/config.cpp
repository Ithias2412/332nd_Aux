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
	//Rock
    class Brain_Stew
    {
        name = "Brain Stew";
		sound[] = {"332nd_Aux\music\music\Rock\brain_Stew.ogg",1,1};
		duration = 190;
		musicClass = "332nd_Music_Rock";
    };
    class Highway_to_Hell
    {
        name = "Highway To Hell";
		sound[] = {"332nd_Aux\music\music\Rock\Highway_to_Hell.ogg",1,1};
		duration = 190;
		musicClass = "332nd_Music_Rock";
    };
    class Sympathy_for_the_Devil
    {
        name = "Sympathy for the Devil";
		sound[] = {"332nd_Aux\music\music\Rock\Sympathy_for_the_Devil.ogg",1,1};
		duration = 190;
		musicClass = "332nd_Music_Rock";
    };
    class Thunderstruck
    {
        name = "Thunderstruck";
		sound[] = {"332nd_Aux\music\music\Rock\Thunderstruck.ogg",1,1};
		duration = 190;
		musicClass = "332nd_Music_Rock";
    };
    class Welcome_to_the_Jungle
    {
        name = "Welcome to the Jungle";
		sound[] = {"332nd_Aux\music\music\Rock\Welcome_to_the_Jungle.ogg",1,1};
		duration = 190;
		musicClass = "332nd_Music_Rock";
    };
	//Project Wingman
	class PW_Calamity
    {
        name = "Calamity";
		sound[] = {"332nd_Aux\music\music\Project_Wingman\Calamity.ogg",1,1};
		duration = 123;
		musicClass = "332nd_Music_PW";
    };
	class PW_Kings_Court
    {
        name = "Kings Court";
		sound[] = {"332nd_Aux\music\music\Project_Wingman\Kings_Court.ogg",1,1};
		duration = 178;
		musicClass = "332nd_Music_PW";
    };
	class PW_Kings
    {
        name = "Kings";
		sound[] = {"332nd_Aux\music\music\Project_Wingman\Kings.ogg",1,1};
		duration = 424;
		musicClass = "332nd_Music_PW";
    };
	class PW_Magma_Carta
    {
        name = "Magma Carta";
		sound[] = {"332nd_Aux\music\music\Project_Wingman\Magma_Carta.ogg",1,1};
		duration = 187;
		musicClass = "332nd_Music_PW";
    };
	class PW_Midnight_Light
    {
        name = "Midnight Light";
		sound[] = {"332nd_Aux\music\music\Project_Wingman\Midnight_Light.ogg",1,1};
		duration = 191;
		musicClass = "332nd_Music_PW";
    };
	class PW_Peacekeeper_II
    {
        name = "Peacekeeper II";
		sound[] = {"332nd_Aux\music\music\Project_Wingman\Peacekeeper_II.ogg",1,1};
		duration = 172;
		musicClass = "332nd_Music_PW";
    };
	class PW_Peacekeeper
    {
        name = "Peacekeeper";
		sound[] = {"332nd_Aux\music\music\Project_Wingman\Peacekeeper.ogg",1,1};
		duration = 185;
		musicClass = "332nd_Music_PW";
    };
	class PW_Presidia
    {
        name = "Presidia";
		sound[] = {"332nd_Aux\music\music\Project_Wingman\Presidia.ogg",1,1};
		duration = 318;
		musicClass = "332nd_Music_PW";
    };
	class PW_Professional_Execution
    {
        name = "Professional Execution";
		sound[] = {"332nd_Aux\music\music\Project_Wingman\Professional_Execution.ogg",1,1};
		duration = 153;
		musicClass = "332nd_Music_PW";
    };
	class PW_Showdown
    {
        name = "Showdown";
		sound[] = {"332nd_Aux\music\music\Project_Wingman\Showdown.ogg",1,1};
		duration = 189;
		musicClass = "332nd_Music_PW";
    };

	//Misc
	class Republic_Commando_Vode_An
    {
        name = "Republic Commando - Vode An";
		sound[] = {"332nd_Aux\music\music\Misc\Republic Commando Vode An.ogg",1,1};
		duration = 184;
		musicClass = "332nd_Music_Misc";
    };
	class HIKARI
    {
        name = "HIKARI";
		sound[] = {"332nd_Aux\music\music\Misc\HIKARI.ogg",1,1};
		duration = 112;
		musicClass = "332nd_Music_Misc";
    };
	class November_Rain_Ending
    {
        name = "November Rain Ending";
		sound[] = {"332nd_Aux\music\music\Misc\November_Rain_Ending.ogg",1,1};
		duration = 126;
		musicClass = "332nd_Music_Misc";
    };

};



class CfgMusicClasses
{
	class 332nd_Music_PW
	{
		displayName = "[332nd] Project Wingman";
	};
	class 332nd_Music_Rock
	{
		displayName = "[332nd] Rock";
	};
	class 332nd_Music_Misc
	{
		displayName = "[332nd] Misc";
	};

};