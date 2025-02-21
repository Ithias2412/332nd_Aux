
class CfgPatches {
	class 332nd_Westar {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "332nd_Westar",
			"332nd_Westar_GL"
        };
		requiredAddons[] = {"3AS_Weapons_WestarM5"};
	};
};
class CfgWeapons 
{
	class 3AS_WestarM5_F;
	class 3AS_WestarM5_GL;
	class 332nd_Westar: 3AS_WestarM5_F
	{
		displayName = "[332] Westar-M5 Rifle";
		magazines[] = {"3AS_60Rnd_EC50_Mag"};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.1;
			dispersion = 0.00052;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
			soundContinuous = 0;
			soundBurst = 0;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"3AS_Westar_Shot_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"3AS_Plasma_Shot_SoundSet"};
			};
		};
		class Burst: Mode_Burst
		{
			reloadTime = 0.05;
			dispersion = 0.00079;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.1;
			soundContinuous = 0;
			soundBurst = 0;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"3AS_Westar_Shot_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {""};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.08;
			dispersion = 0.00079;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"3AS_Westar_Shot_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"3AS_Plasma_Shot_SoundSet"};
			};
		};
	};
	class 332nd_Westar_GL: 3AS_WestarM5_GL
	{
		displayName = "[332] Westar-M5 GL Rifle";
		magazines[] = {"3AS_60Rnd_EC50_Mag"};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.1;
			dispersion = 0.00052;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
			soundContinuous = 0;
			soundBurst = 0;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"3AS_Westar_Shot_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"3AS_Plasma_Shot_SoundSet"};
			};
		};
		class Burst: Mode_Burst
		{
			reloadTime = 0.05;
			dispersion = 0.00079;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.1;
			soundContinuous = 0;
			soundBurst = 0;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"3AS_Westar_Shot_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {""};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.08;
			dispersion = 0.00079;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"3AS_Westar_Shot_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"3AS_Plasma_Shot_SoundSet"};
			};
		};
	};




};