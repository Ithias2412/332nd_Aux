class CfgPatches {
	class 332nd_Helmets_Fun_Ops_Xtd {
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
        class 332nd_Helmets_Fun_Ops_Extended
        {
            label = "Fun Operations";
            author = "Ithias";
			options[] = { "Commando", "ARC", "104th", "212th", "327th",};
            class Commando
            {
                label = "Commando";
				values[] = { "Default",};
                changeingame = 0;
                alwaysSelectable = 1;
                class Default
                {
                    label = "Default";
                    description = "With Zeus Approval";
                    //image = "xxx";
                };
            };
			class ARC
            {
                label = "ARC";
				values[] = { "P1", "P2", };
                changeingame = 0;
                alwaysSelectable = 1;
                class P1
                {
                    label = "P1";
                    description = "With Zeus Approval";
                    //image = "xxx";
                };
                class P2
                {
                    label = "P2";
                    description = "With Zeus Approval";
                    //image = "xxx";
                };
			};
			class 104th
            {
                label = "104th";
				values[] = { "Trooper", "Boost", "Comet", "Sinker", };
                changeingame = 0;
                alwaysSelectable = 1;
                class Trooper
                {
                    label = "Trooper";
                    description = "With Zeus Approval";
                    //image = "xxx";
                };
                class Boost
                {
                    label = "Boost";
                    description = "With Zeus Approval";
                    //image = "xxx";
                };
                class Comet
                {
                    label = "Comet";
                    description = "With Zeus Approval";
                    //image = "xxx";
                };
                class Sinker
                {
                    label = "Sinker";
                    description = "With Zeus Approval";
                    //image = "xxx";
                };
			};
			class 212th
            {
                label = "212th";
				values[] = { "Trooper", "Waxer", "Boil", };
                changeingame = 0;
                alwaysSelectable = 1;
                class Trooper
                {
                    label = "Trooper";
                    description = "With Zeus Approval";
                    //image = "xxx";
                };
                class Waxer
                {
                    label = "Waxer";
                    description = "With Zeus Approval";
                    //image = "xxx";
                };
                class Boil
                {
                    label = "Boil";
                    description = "With Zeus Approval";
                    //image = "xxx";
                };
			};
			class 327th
            {
                label = "327th";
				values[] = { "Trooper", };
                changeingame = 0;
                alwaysSelectable = 1;
                class Trooper
                {
                    label = "Trooper";
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
		//Commando
        class 332nd_Helmet_Commando
        {
            model = "332nd_Helmets_Fun_Ops_Extended";
            Commando = "Default";
        };
		//ARC
        class 332nd_Helmet_ARC
        {
            model = "332nd_Helmets_Fun_Ops_Extended";
			ARC = "P1";
        };
		class 332nd_Helmet_ARC_P2
        {
            model = "332nd_Helmets_Fun_Ops_Extended";
			ARC = "P2";
        };
		//104th
		class 332nd_Helmet_P2_CT_104
		{
            model = "332nd_Helmets_Fun_Ops_Extended";
			104th = "Trooper";
		};
		class 332nd_Helmet_P2_CT_Boost
		{
            model = "332nd_Helmets_Fun_Ops_Extended";
			104th = "Boost";
		};
		class 332nd_Helmet_P2_CT_Comet
		{
            model = "332nd_Helmets_Fun_Ops_Extended";
			104th = "Comet";
		};
		class 332nd_Helmet_P2_CT_Sinker
		{
            model = "332nd_Helmets_Fun_Ops_Extended";
			104th = "Sinker";
		};
		//212th
		class 332nd_Helmet_P2_CT_212
		{
            model = "332nd_Helmets_Fun_Ops_Extended";
			212th = "Trooper";
		};
		class 332nd_Helmet_P2_CT_Waxer
		{
            model = "332nd_Helmets_Fun_Ops_Extended";
			212th = "Waxer";
		};
		class 332nd_Helmet_P2_CT_Boil
		{
            model = "332nd_Helmets_Fun_Ops_Extended";
			212th = "Boil";
		};
		//327th
		class 332nd_Helmet_P2_CT_327
		{
            model = "332nd_Helmets_Fun_Ops_Extended";
			327th = "Trooper";
		};
	};
};