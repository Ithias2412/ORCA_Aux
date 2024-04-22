class CfgPatches {
	class ORCA_DC15L {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "ORCA_DC15L",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class cfgWeapons 
{
    class ItemInfo;
	class 3AS_DC15L_F;
	class FullAuto;
//Primary
	class ORCA_DC15L: 3AS_DC15L_F
	{
		author="Ithias";
		displayName="[ORCA] DC-15L";
		magazines[] =
		{
			"ORCA_DC15L_Mag"
		};
		magazineWell[]=
		{
			
		};
		modes[]=
		{
			"FullAuto_15L",
		};
		class FullAuto_15L: FullAuto
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
			dispersion = 0.00079;
			displayName = "Full";
			ffCount = 1;
			ffFrequency = 11;
			ffMagnitude = 0.5;
			flash = "gunfire";
			flashSize = 0.1;
			maxRange = 30;
			maxRangeProbab = 0.1;
			midRange = 15;
			midRangeProbab = 0.7;
			minRange = 0;
			minRangeProbab = 0.9;
			multiplier = 1;
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_auto_primary_prone_3outof10";
			reloadTime = 0.15;
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
			sounds[] = {"StandardSound","SilencedSound"};
			class SilencedSound
			{
				soundSetShot[] = {""};
			};
			class StandardSound
			{
				soundSetShot[] = {"3AS_DC15L_Shot_SoundSet"};
			};
			soundSetShot[] = {"3AS_DC15L_Shot_SoundSet"};
			textureType = "fullAuto";
			useAction = 0;
			useActionTitle = "";
			weaponSoundEffect = "";			
		};
	};

};
class CfgAmmo
{
	class ORCA_Base_Ammo;
	class ORCA_DC15L_Ammo_762x51: ORCA_Base_Ammo
	{
		ACE_bulletLength = 28.956;
		ACE_bulletMass = 9.4608;
        ACE_caliber = 7.823;
		hit = 11.6;
		caliber = 1.6;
		typicalspeed=800;
	};

};
class CfgMagazines
{
	class ORCA_Base_Mag;
	class ORCA_DC15L_Mag: ORCA_Base_Mag
	{
		ammo = "ORCA_DC15L_Ammo_762x51";
		count = 200;
		descriptionShort = "";
		displayname = "DC-15L 200 Round Energy Cell";
		displayNameShort = "";
		mass = 8;
		scope = 2;
	};
};