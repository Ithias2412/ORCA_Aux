class CfgPatches {
	class ORCA_DC17S {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "ORCA_DC17S",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class cfgWeapons 
{
    class ItemInfo;
	class 3AS_DC17S_F;
	
	class ORCA_DC17S: 3AS_DC17S_F
	{
		author="Ithias";
		displayName="[ORCA] DC-17S";
		magazines[] =
		{
			"ORCA_DC17S_Mag"
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
	class ORCA_DC17S_Ammo_9x19: ORCA_Base_Ammo
	{
		ACE_bulletLength = 15.494;
		ACE_bulletMass = 8.0352;
        ACE_caliber = 9.017;
		hit=6;
		caliber=0.4;
		typicalspeed=800;
	};

};
class CfgMagazines
{
	class ORCA_Base_Mag;
	class ORCA_DC17S_Mag: ORCA_Base_Mag
	{
		ammo = "ORCA_DC17S_Ammo_9x19";
		count = 15;
		descriptionShort = "";
		displayname = "DC-15SA 15 Round Energy Cell";
		displayNameShort = "";
		mass = 8;
		scope = 2;
	};
};