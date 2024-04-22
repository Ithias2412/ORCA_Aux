class CfgPatches {
	class ORCA_Z6 {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "ORCA_Z6",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = 
		{
			
		};
	};
};
//#include "xtdGear.hpp"
class LMG_Mk200_F;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class FullAuto;
class WeaponSlotsInfo;
class JLTS_Z6;
class cfgWeapons 
{

	class Rifle_Long_Base_F;
	class LMG_Mk200_F: Rifle_Long_Base_F
	{
		class GunParticles;
		class GunClouds;
		class WeaponSlotsInfo;
	};
	
//Primary
	class ORCA_Z6: LMG_Mk200_F
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		JLTS_friedItem="JLTS_Z6_fried";
		JLTS_repairTime=40;
		author="MrClock";
		scope=2;
		baseWeapon="ORCA_Z6";
		displayName="[ORCA] Z-6";
		descriptionShort="$STR_JLTS_descs_BlasterRotaryCannon";
		picture="\MRC\JLTS\weapons\Z6\data\ui\Z6_ui_ca.paa";
		model="\MRC\JLTS\weapons\Z6\Z6.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\Z6\data\Z6_1_co.paa",
			"\MRC\JLTS\weapons\Z6\data\Z6_2_co.paa"
		};
		recoil="JLTS_recoil_Z6";
		maxZeroing=1200;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\Z6\anims\Z6_handanim.rtm"
		};
		magazines[]=
		{
			"ORCA_Z6_Mag"
		};
		magazineWell[]=
		{
			
		};
		fireLightDiffuse[]={0,0,1};
		drySound[]=
		{
			"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss",
			5,
			1,
			10
		};
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2"
		};
		class manual: FullAuto
		{
			aiDispersionCoefX = 2;
			aiDispersionCoefY = 3;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 500;
			artilleryCharge = 1;
			artilleryDispersion = 1;
			autoFire = 1;
			burst = 1;
			burstRangeMax = -1;
			canShootInWater = 0;
			dispersion = 0.00102;
			displayName = "Full";
			ffCount = 1;
			ffFrequency = 11;
			ffMagnitude = 0.5;
			flash = "gunfire";
			flashSize = 0.1;
			maxRange = 10;
			maxRangeProbab = 0.04;
			midRange = 5;
			midRangeProbab = 0.7;
			minRange = 0;
			minRangeProbab = 0.3;
			multiplier = 1;
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_auto_primary_prone_3outof10";
			reloadTime = 0.075;
			requiredOpticType = -1;
			showToPlayer = 1;
			sound[] = {"",10,1};
			soundBegin[] = {"sound",1};
			soundBeginWater[] = {"sound",1};
			soundBurst = 0;
			soundClosure[] = {"sound",1};
			soundContinuous = 0;
			soundEnd[] = {"sound",1};
			soundLoop[] = {};
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
				weaponSoundEffect = "";
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",1,1,1800};
				closure1[] = {};
				closure2[] = {};
				soundBegin[] = {"begin1",1};
				soundClosure[] = {};
				weaponSoundEffect = "";
			};
			textureType = "fullAuto";
			useAction = 0;
			useActionTitle = "";
			weaponSoundEffect = "";
		};
		class close: manual
		{
			burst=10;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=8;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=7;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class far_optic1: medium
		{
			requiredOpticType=1;
			showToPlayer=0;
			burst=3;
			aiRateOfFire=10;
			aiRateOfFireDistance=1000;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.40000001;
			maxRange=650;
			maxRangeProbab=0.0099999998;
		};
		class far_optic2: far_optic1
		{
			burst=3;
			requiredOpticType=2;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=750;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.0099999998;
			aiRateOfFire=10;
			aiRateOfFireDistance=900;
		};
		aiDispersionCoefY=24;
		aiDispersionCoefX=21;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=264;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]={};
			};
		};
		class GunParticles
		{
			class FirstEffect
			{
				directionName="Konec hlavne";
				effectName="RifleAssaultCloud";
				positionName="Usti hlavne";
			};
		};
	};

};
class CfgAmmo
{
	class ORCA_Base_Ammo;
	class ORCA_Z6_Ammo_556x45: ORCA_Base_Ammo
	{
		ACE_caliber = 5.69;
		ACE_bulletLength = 23.012;
        ACE_bulletMass = 4.0176;
		hit=10;
		caliber=1;
		typicalspeed=800;
	};
};
class CfgMagazines
{
	class ORCA_Base_Mag;
	class ORCA_Z6_Mag: ORCA_Base_Mag
	{
		ammo = "ORCA_Z6_Ammo_556x45";
		count = 300;
		descriptionShort = "";
		displayname = "Z-6 300 Round Energy Cell";
		displayNameShort = "";
		mass = 8;
		scope = 2;
	};
};