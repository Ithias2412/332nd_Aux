class CfgPatches {
    class mlg_main {
        name = "Melee Guard";
        author = "Frankenburg";
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.14;
        requiredAddons[] = {"cba_main", "cba_xeh", "cba_settings", "3DEN", "WBK_MeleeMechanics"};
        version = "1.0.0";
    };
};

class Extended_PreInit_EventHandlers {
    class mlg_main {
        init = "call compile preprocessFileLineNumbers '\332nd_Aux\MeleeGuard\XEH_preInit.sqf'";
    };
};

class Extended_PostInit_EventHandlers {
    class mlg_main {
        init = "call compile preprocessFileLineNumbers '\332nd_Aux\MeleeGuard\XEH_postInit.sqf'";
    };
};

class Cfg3DEN {
    class Object {
        class AttributeCategories {
            class mlg_attributes {
                displayName = "Melee Guard";
                collapsed = 1;
                class Attributes {
                    class mlg_protected {
                        displayName = "Cannot be meleed";
                        tooltip = "Improved Melee System attacks (weapons, fists, rifle butt, kicks, executions, stealth kills) do nothing to this unit.";
                        property = "mlg_protected";
                        control = "Checkbox";
                        expression = "if (_value) then { _this setVariable ['mlg_protected', true, true] };";
                        defaultValue = "false";
                        condition = "objectBrain";
                        typeName = "BOOL";
                    };
                };
            };
        };
    };
};