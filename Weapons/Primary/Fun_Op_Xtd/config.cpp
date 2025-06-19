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
			options[] = {"DLT",};
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
        };
    };
};

class XtdGearInfos
{
    class CfgWeapons 
    {
        class 332nd_DLT19X
        {
            model = "332nd_Weapons_Fun_Ops_Extended";
            DLT = "MRK";
        };
	};
};