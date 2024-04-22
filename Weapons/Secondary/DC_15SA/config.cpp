class CfgPatches {
	class ORCA_DC15SA {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "ORCA_DC15SA",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class cfgWeapons 
{
    class ItemInfo;
	class 3AS_pistol_DC15SA_F;

//Primary
	class ORCA_DC15SA: 3AS_pistol_DC15SA_F
	{
		author="Ithias";
		displayName="[ORCA] DC-15SA";
		magazines[] =
		{
			"ORCA_DC15SA_Mag"
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
	class ORCA_DC15SA_Ammo_45ACP: ORCA_Base_Ammo
	{
		ACE_bulletLength = 17.272;
		ACE_bulletMass = 14.904;
        ACE_caliber = 11.481;
		hit=5;
		caliber=1.4;
		typicalspeed=800;
	};

};
class CfgMagazines
{
	class ORCA_Base_Mag;
	class ORCA_DC15SA_Mag: ORCA_Base_Mag
	{
		ammo = "ORCA_DC15SA_Ammo_45ACP";
		count = 10;
		descriptionShort = "";
		displayname = "DC-15SA 10 Round Energy Cell";
		displayNameShort = "";
		mass = 8;
		scope = 2;
	};
};