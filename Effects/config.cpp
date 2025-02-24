class CfgPatches
{
	class 332nd_Effects
	{
		name = "332nd - Main";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"cba_main","ace_main"};
		author = "332nd Aux Team";
		authors[] = {""};
	};
};
class CfgCloudlets
{
	class Default;
	class 332nd_smoke_Base: Default
	{
		interval = 0.001;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		angleVar = 1;
		particleFSLoop = 0;
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		particleEffects = "ExplosionShardsFir";
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 1;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 1;
		volume = 0.8;
		rubbing = 0.5;
		size[] = {1,1,2.8};
		color[] = {{1,0,0,0.08},{0,1,0,0.08},{0,0,1,0.08},{1,0,0,0.08},{0,1,0,0.08},{0,0,1,0.08}};
		animationSpeed[] = {5,5};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "";
		blockAIVisibility = 0;
		lifeTimeVar = 0.2;
		positionVar[] = {0.3,0.3,0.3};
		MoveVelocityVar[] = {0.4,0.4,0.4};
		rotationVelocityVar = 20;
		sizeVar = 0.15;
		colorVar[] = {0,0,0,1};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class SmokeShellWhiteEffect;
	class 332nd_SmokeShellBase: SmokeShellWhiteEffect
	{
		animationSpeedCoef = 1;
		colorCoef[] = {"colorR","colorG","colorB","colorA"};
		sizeCoef = 1;
		position[] = {0,0,0};
		interval = 0.03;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 0.1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 20;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 1.2777;
		volume = 8;
		rubbing = 0.05;
		size[] = {2,2,12};
		color[] = {{0.6,0.6,0.6,0.2},{0.6,0.6,0.6,0.05},{0.6,0.6,0.6,0}};
		animationSpeed[] = {1.5,0.5};
		randomDirectionPeriod = 1;
		randomDirectionIntensity = 0.04;
		onTimerScript = "";
		beforeDestroyScript = "";
		destroyOnWaterSurface = 1;
		destroyOnWaterSurfaceOffset = -0.6;
		lifeTimeVar = 2;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0.25,0.25,0.25};
		rotationVelocityVar = 20;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0.35};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
    class 332nd_smoke_Red: 332nd_smoke_Base
    {
        color[] = {{1,0,0,0.07},{1,0,0,0.07},{1,0,0,0.07},{0,0,0,0.004},{0,0,0,0.003}};
    };

    class 332nd_smoke_Pink: 332nd_smoke_Base
    {
        color[] = {{0.96,0.53,0.72,0.08},{0.99,0.47,0.67,0.09},{0.85,0.32,0.63,0.05},{0.07,0.02,0.05,0.004},{0.13,0.03,0.07,0.003}};
    };

    class 332nd_smoke_Blue: 332nd_smoke_Base
    {
        color[] = {{0,0,1,0.07},{0,0,1,0.07},{0,0,1,0.07},{0,0,0.75,0.004},{0,0,0,0.003}};
    };
    class 332nd_smoke_Teal: 332nd_smoke_Base
    {
        color[] = {{0.0, 0.5, 0.5, 0.07}, {0.0, 0.6, 0.6, 0.09}, {0.0, 0.7, 0.7, 0.05}, {0.0, 0.3, 0.3, 0.004}, {0.0, 0.2, 0.2, 0.003}};
    };
	class Missile3;
	class 332nd_Missile_Red: Missile3
	{
		color[] = {{1,0,0,0.07},{1,0,0,0.07},{1,0,0,0.07},{0,0,0,0.004},{0,0,0,0.003}};
	};
};