class CfgPatches {
	class ORCA_Valken {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "ORCA_Valken",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class cfgWeapons 
{
    class ItemInfo;
	class 3AS_Valken38X_F;

//Primary

	class ORCA_Valken: 3AS_Valken38X_F
	{
		author="Ithias";
		displayName="[ORCA] Valken";
		magazines[] =
		{
			"ORCA_Valken_Mag"
		};
		magazineWell[]=
		{
			
		};
		modes[]=
		{
			"Single",
		};
	};

};
class CfgAmmo
{
	class ORCA_Base_Ammo;
	class ORCA_Valken_Ammo_50Cal: ORCA_Base_Ammo
	{
		ACE_bulletLength = 58.674;
		ACE_bulletMass = 41.9256;
        ACE_caliber = 12.954;
		hit = 30;
		caliber = 2.6;
		typicalspeed=800;
	};

};
class CfgMagazines
{
	class ORCA_Base_Mag;
	class ORCA_Valken_Mag: ORCA_Base_Mag
	{
		ammo = "ORCA_Valken_Ammo_50Cal";
		count = 10;
		descriptionShort = "";
		displayname = "Valken 10 Round Energy Cell";
		displayNameShort = "";
		mass = 8;
		scope = 2;
	};
};