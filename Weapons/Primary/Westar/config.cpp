class CfgPatches {
	class ORCA_Westar {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "ORCA_Westar",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class cfgWeapons 
{
    class ItemInfo;
	class ls_weapon_westar35s_primary;

//Primary

	class ORCA_Westar: ls_weapon_westar35s_primary
	{
		author="Ithias";
		displayName="[ORCA] Westar (TESTBED / BANNED)";
		muzzles[] = {"this"};
		magazines[] =
		{
			"ORCA_Westar_Mag"
		};
		magazineWell[]=
		{
			
		};
		modes[] = 
		{
			"Single",
			"close",
			"short",
			"medium",
			"FullAuto"
		};
	};
};
class CfgAmmo
{
	class ORCA_Base_Ammo;
	class ORCA_Westar_Ammo_556x45: ORCA_Base_Ammo
	{
		ACE_caliber = 5.69;
		ACE_bulletLength = 23.012;
        ACE_bulletMass = 4.0176;
		hit=10;
		caliber=1;
		typicalspeed=800;
		effectFly = "3AS_PlasmaBolt_Yellow_Fly";
		model = "\3AS\3AS_Weapons\Data\tracer_yellow.p3d";
	};

};
class CfgMagazines
{
	class ORCA_Base_Mag;
	class ORCA_Westar_Mag: ORCA_Base_Mag
	{
		ammo = "ORCA_Westar_Ammo_556x45";
		count = 30;
		descriptionShort = "";
		displayname = "Westar 30 Round Energy Cell";
		displayNameShort = "";
		mass = 8;
		scope = 2;
	};
};