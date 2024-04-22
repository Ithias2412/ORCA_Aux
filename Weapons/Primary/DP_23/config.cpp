class CfgPatches {
	class ORCA_DP23 {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "ORCA_DP23",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class cfgWeapons 
{
    class ItemInfo;
	class JLTS_DP23;

//Primary
	class ORCA_DP23: JLTS_DP23
	{
		author="Ithias";
		displayName="[ORCA] DP-23";
		magazines[] =
		{
			"ORCA_DP23_Mag"
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
	class ORCA_Base_Shotgun_Ammo;
	class ORCA_DP23_Ammo_12g: ORCA_Base_Shotgun_Ammo
	{
		//ACE_bulletLength = 28.956;
		//ACE_bulletMass = 7.9704;
		//ACE_caliber = 7.823;
		hit=20;
		caliber=1;
		typicalspeed=800;
		//submunitionAmmo = "CUP_12Gauge_Pellets_Submunition_No00_Buck_Deploy";
	};

};
class CfgMagazines
{
	class ORCA_Base_Mag;
	class ORCA_DP23_Mag: ORCA_Base_Mag
	{
		ammo = "ORCA_DP23_Ammo_12g";
		count = 10;
		descriptionShort = "";
		displayname = "DP-23 10 Round Energy Cell";
		displayNameShort = "";
		mass = 8;
		scope = 2;
	};
};