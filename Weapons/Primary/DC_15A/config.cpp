class CfgPatches {
	class ORCA_DC15A {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "ORCA_DC15A",
			"ORCA_DC15A_GL",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class cfgWeapons 
{
    class ItemInfo;
	class 3AS_DC15A_F;
	class 3AS_DC15A_GL;

//Primary
	class ORCA_DC15A: 3AS_DC15A_F
	{
		author="Ithias";
		displayName="[ORCA] DC-15A";
		magazines[] =
		{
			"ORCA_DC15A_Mag"
		};
		magazineWell[]=
		{
			
		};
		modes[]=
		{
			"Single",
		};
	};
	class ORCA_DC15A_GL: 3AS_DC15A_GL
	{
		author="Ithias";
		displayName="[ORCA] DC-15A GL";
		magazines[] =
		{
			"ORCA_DC15A_Mag"
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
	class ORCA_DC15A_Ammo_762x39: ORCA_Base_Ammo
	{
		ACE_bulletLength = 28.956;
		ACE_bulletMass = 7.9704;
        ACE_caliber = 7.823;
		hit=11;
		caliber=1.2;
		typicalspeed=800;
	};

};
class CfgMagazines
{
	class ORCA_Base_Mag;
	class ORCA_DC15A_Mag: ORCA_Base_Mag
	{
		ammo = "ORCA_DC15A_Ammo_762x39";
		count = 45;
		descriptionShort = "";
		displayname = "DC-15A 45 Round Energy Cell";
		displayNameShort = "";
		mass = 8;
		scope = 2;
	};
};