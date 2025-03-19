class CfgPatches {
	class 332nd_Weapons_Fun_Ops_Xtd {
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

class XtdGearModels
{
    class CfgWeapons 
    {
        class 332nd_Weapons_Fun_Ops_Extended
        {
            label = "Fun Ops";
            author = "Ithias";
			options[] = { "Westar", "DLT", "Slug_Thrower", };
            class Westar
            {
                label = "Westar";
				values[] = { "RFL", "GRN",};
                changeingame = 0;
                alwaysSelectable = 1;
                class RFL
                {
                    label = "RFL";
                    description = "With Zeus Approval";
                    //image = "xxx";
                };
				class GRN
                {
                    label = "GRN";
                    description = "With Zeus Approval";
                    //image = "xxx";
                };
            };
            class DLT
            {
                label = "DLT";
				values[] = { "MRK", };
                changeingame = 0;
                alwaysSelectable = 1;
                class MRK
                {
                    label = "MRK";
                    description = "With Zeus Approval";
                    //image = "xxx";
                };
            };
            class Slug_Thrower
            {
                label = "Slug Thrower";
				values[] = { "MRK", };
                changeingame = 0;
                alwaysSelectable = 1;
                class MRK
                {
                    label = "MRK";
                    description = "With Zeus Approval";
                    //image = "xxx";
                };
            };
        };
    };
};

class XtdGearInfos
{
    class CfgWeapons 
    {
        class 332nd_Westar
        {
            model = "332nd_Weapons_Fun_Ops_Extended";
            Westar = "RFL";
        };
        class 332nd_Westar_GL
        {
            model = "332nd_Weapons_Fun_Ops_Extended";
            Westar = "GRN";
        };
        class 332nd_DLT19X
        {
            model = "332nd_Weapons_Fun_Ops_Extended";
            DLT = "MRK";
        };
		class 332nd_Slug_Thrower
		{
            model = "332nd_Weapons_Fun_Ops_Extended";
            Slug_Thrower = "MRK";
		};
	};
};