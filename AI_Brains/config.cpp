class CfgPatches 
{
	class 332nd_AI_Brain 
	{
		requiredAddons[] = 
		{
			"A3_Functions_F",
			"lambs_suppression",
		};
		units[] = 
		{
			""
		};
	};
};

class CfgBrains 
{
	class DefaultSoldierBrain 
	{
		class Components 
		{
			class AIBrainSuppressionComponent 
			{
				worstDecreaseTime = 9.0;   // in seconds for 0.0 skill
				bestDecreaseTime = 1.0;     // in seconds for 1.0 skill
				causeExplosionWeight = 1.5; //
				//SuppressionThreshold = 0.5;
				// At the default 50% they will be suppressed for 5 seconds 
			};
			class AIBrainAimingErrorComponent 
			{
				maxAngularError = 0.1309;	// half of the error cone in radians
				// When suppressed the AI will have an accuracy penalty of (0.1309 =) 7.5 degrees on each half of there accuracy cone
				worstDecreaseTime = 4.0;	// how long (in seconds) it should take 0.0 skilled soldier to stabilize the aim completely
				bestDecreaseTime = 1.0; 	// how long (in seconds) it should take 1.0 skilled soldier to stabilize the aim completely 
				turningInfluence = 1.2; 	// importance of turning in algorithm, multiplier
				// At the default 50% they will take 2.5 more seconds to engage there target
			};
		};
	};
};

/*
	LAMBS Suppression Values
	class AIBrainSuppressionComponent 
	{
		worstDecreaseTime = 25.0;   // in seconds for 0.0 skill
		bestDecreaseTime = 4.0;     // in seconds for 1.0 skill
		causeExplosionWeight = 1.5; //
	};
	class AIBrainAimingErrorComponent 
	{
		worstDecreaseTime = 3.5; // how long (in seconds) it should take 0.0 skilled soldier to stabilize the aim completely
		bestDecreaseTime = 0.6; // how long (in seconds) it should take 1.0 skilled soldier to stabilize the aim completely
		turningInfluence = 1.2; // importance of turning in algorithm, multiplier
	};
