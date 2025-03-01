class CfgPatches
{
    class 332nd_aceTest
    {
        name = "332nd Ace Test";
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.1;
        requiredAddons[] = {};
        author = "Frankie";
        authors[] = {""};
    };
};


class CfgFunctions
{
    class AuxMod_332nd_aceActions
    {
        tag = "AuxMod_332nd_aceActions"; // Used to call the functions

        class Functions
        {
            file = "\332nd_Aux\functions"; // Adjust based on your PBO structure
            
            class toggleLowLight
            {
                description = "Toggles Low Light.";
                recompile = 1; 
            };

            class increaseAperture
            {
                description = "Increases aperture.";
                recompile = 1; 
            };

            class decreaseAperture
            {
                description = "Decreases aperture.";
                recompile = 1; 
            };

            class hasLowLightHelmet
            {
                description = "Checks if player has a helmet with 332nd_Has_Lowlight = 1.";
                recompile = 1; 
            };
            class setCustomAperture
            {
                description = "Prompts the player to enter a custom aperture value.";
                recompile = 1; 
            };

        };
    };
};



class CfgVehicles
{
    class Man;
    class CAManBase: Man
    {
        class ACE_SelfActions
        {
            class 332nd_ace_mainAction
            {
                displayName = "[332nd] Actions";
                statement = "";
                icon = "";

                class 332nd_ace_nvSettings
                {
                    displayName = "Low Light System";
                    condition = "true"; // Always available
                    statement = "";
                    icon = "";
                    exceptions[] = {};

                    // Toggle Low Light (Only if correct helmet is worn)
                    class 332nd_ace_nv_toggle
                    {
                        displayName = "Enable Low Light System";
                        condition = "call AuxMod_332nd_aceActions_fnc_hasLowLightHelmet";
                        statement = "call AuxMod_332nd_aceActions_fnc_toggleLowLight";
                        icon = "";
                        exceptions[] = {};
                    };

                    // Increase Aperture (Only when Low Light is active)
                    class 332nd_ace_nv_increase
                    {
                        displayName = "Increase Aperture";
                        condition = "player getVariable ['lowLightEnabled', false]";
                        statement = "call AuxMod_332nd_aceActions_fnc_increaseAperture";
                        icon = "";
                        exceptions[] = {};
                    };

                    // Decrease Aperture (Only when Low Light is active)
                    class 332nd_ace_nv_decrease
                    {
                        displayName = "Decrease Aperture";
                        condition = "player getVariable ['lowLightEnabled', false]";
                        statement = "call AuxMod_332nd_aceActions_fnc_decreaseAperture";
                        icon = "";
                        exceptions[] = {};
                    };
                    class 332nd_ace_nv_custom
                    {
                        displayName = "Set Custom Aperture";
                        condition = "player getVariable ['lowLightEnabled', false]";
                        statement = "call AuxMod_332nd_aceActions_fnc_setCustomAperture";
                        icon = "";
                        exceptions[] = {};
                    };

                };
            };
        };
    };
};
