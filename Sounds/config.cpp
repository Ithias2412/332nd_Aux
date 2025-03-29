class CfgPatches
{
	class 332nd_Aux_Sounds
	{
		name = "332nd Aux Sounds";
		author = "Frankie";
		requiredVersion = 1;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
		worlds[] = {};
	};
};

class CfgSFX
{
    class 332nd_Sound_Battlefield_1
    {
        name = "[332nd] Battlefield";
        sounds[] = {"sfxsound"};
        sfxsound[] = {
            "332nd_Aux\Sounds\Battlefield\332nd_Battlefield_1.ogg",			
            10, //Volume
			1, //Pitch
			1000, //Max Distance
			1, //Probabililty
			1, //Min Delay
			1, //Mid Delay
			0  //Max Delay
        };
        empty[] = {"",0,0,0,0,0,0,0};
    };
}
class CfgVehicles
{
    class All;
    class Sound: All
    {
        author = "Frankie";
        mapSize = 10;
        _generalMacro = "Sound";
        scope = 0;
        side = -1;
        animated = 0;
        vehicleClass = "Sounds";
        icon = "iconSound";
        faction = "none";
        editorCategory = "EdCat_Sounds";
        editorSubcategory = "EdSubcat_Sounds";
    };
    class 332nd_Sound_Battlefield: Sound
    {
        author = "Frankie";
        _generalMacro = "332nd_Sound_Battlefield_1";
        scope = 2;
        sound = "332nd_Sound_Battlefield_1";
        displayName = "[332nd] Battlefield 1";
    };
};