class CfgMagazines
{
	class rhs_mag_30Rnd_556x45_M855A1_Stanag;
	class kolmiSFCM_mag_30Rnd_556x45_Drone_Stanag: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		author="kolmipilot";
		displayName="30rnd STANAG Pellet round";
		tracersEvery=5;
		displayNameShort="Anti Drone";
        Ammo="kolmiSFCM_ammo_12gD";
	};
};
class CfgMagazineWells
{
	class STANAG_556x45
	{
		kolmiSFCM_droneAntiDroneMag[]=
		{"kolmiSFCM_mag_30Rnd_556x45_Drone_Stanag"};
	};
};
class CfgAmmo
{
    class B_12Gauge_Pellets;
    class BulletBase;
	class kolmiSFCM_ammo_12gD: B_12Gauge_Pellets
	{
		hit=20;
		simulation="shotSubmunitions";
		simulationStep=0.015;
		triggerTime=0.015;
		triggerSpeedCoef[]={1,1};
		submunitionAmmo="kolmiSFCM_ammo_12gD_pellet";
		submunitionConeType[]=
		{
			"poissondisccenter",
			5
		};
		submunitionConeAngle=0.35;
		cartridge="";
		model="\A3\weapons_f\empty";
		rhs_cartridge="\rhsusf\addons\rhsusf_weapons\casings\rhs_casing_556x45_m855";
	};
	class kolmiSFCM_ammo_12gD_pellet: BulletBase
	{
		hit=4.75;
		indirectHit=0;
		indirectHitRange=0;
		caliber=0.24;
		typicalSpeed=670;
		airFriction=-0.0063399998;
		class HitEffects
		{
			Hit_Foliage_green="ImpactLeavesGreen";
			Hit_Foliage_Dead="ImpactLeavesDead";
			Hit_Foliage_Green_big="ImpactLeavesGreenBig";
			Hit_Foliage_Palm="ImpactLeavesPalm";
			Hit_Foliage_Pine="ImpactLeavesPine";
			hitFoliage="ImpactLeaves";
			hitGlass="ImpactGlass";
			hitGlassArmored="ImpactGlassThin";
			hitWood="ImpactWood";
			hitMetal="ImpactMetal";
			hitMetalPlate="ImpactMetal";
			hitBuilding="ImpactPlaster";
			hitPlastic="ImpactPlastic";
			hitRubber="ImpactRubber";
			hitConcrete="ImpactConcrete";
			hitMan="ImpactEffectsBlood";
			hitGroundSoft="ImpactEffectsSmall";
			hitGroundHard="ImpactEffectsHardGround";
			hitWater="ImpactEffectsWater";
			hitVirtual="ImpactMetal";
		};
	};
};
