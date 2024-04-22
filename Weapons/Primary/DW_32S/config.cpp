class CfgPatches {
	class ORCA_DW32S {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "ORCA_DW32S",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class cfgWeapons 
{
    class ItemInfo;
	class JLTS_DW32S;

//Primary
	class ORCA_DW32S: JLTS_DW32S
	{
		author="Ithias";
		displayName="[ORCA] DW-32S";
		muzzles[] = 
		{
			"this",
		};
		magazines[] =
		{
			"ORCA_DW32S_Mag"
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
	class ORCA_DW32S_Ammo_762x51: ORCA_Base_Ammo
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
	class ORCA_DW32S_Mag: ORCA_Base_Mag
	{
		ammo = "ORCA_DW32S_Ammo_762x51";
		count = 20;
		descriptionShort = "";
		displayname = "DW-32S 20 Round Energy Cell";
		displayNameShort = "";
		mass = 8;
		scope = 2;
	};
};