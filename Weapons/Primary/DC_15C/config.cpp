class CfgPatches {
	class ORCA_DC15C {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "ORCA_DC15C",
			"ORCA_DC15C_GL",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class cfgWeapons 
{
    class ItemInfo;
	class 3AS_DC15C_F;
	class 3AS_DC15C_GL;
//Primary
	class ORCA_DC15C: 3AS_DC15C_F
	{
		author="Ithias";
		displayName="[ORCA] DC-15C";
		magazines[] =
		{
			"ORCA_DC15C_Mag"
		};
		magazineWell[]=
		{
			
		};
		modes[] = 
		{
			"FullAuto",
			"Single"
		};
	};
	class ORCA_DC15C_GL: 3AS_DC15C_GL
	{
		author="Ithias";
		displayName="[ORCA] DC-15C GL";
		magazines[] =
		{
			"ORCA_DC15C_Mag"
		};
		magazineWell[]=
		{
			
		};
		modes[] = 
		{
			"FullAuto",
			"Single"
		};
	};

};
class CfgAmmo
{
	class ORCA_Base_Ammo;
	class ORCA_DC15C_Ammo_556x45: ORCA_Base_Ammo
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
	class ORCA_DC15C_Mag: ORCA_Base_Mag
	{
		ammo = "ORCA_DC15C_Ammo_556x45";
		count = 40;
		descriptionShort = "";
		displayname = "DC-15C 40 Round Energy Cell";
		displayNameShort = "";
		mass = 8;
		scope = 2;
	};
};