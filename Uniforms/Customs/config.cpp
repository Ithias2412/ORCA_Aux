class CfgPatches {
	class ORCA_Uniforms {
		units[] = 
        {
            ""
        };
		weapons[] = 
        {
            ""
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class cfgWeapons 
{
    class ItemInfo;
    class UniformItem;
	class ORCA_clone_uniform;
	
// Urban Uniform

class ORCA_clone_uniform_Ithias: ORCA_clone_uniform
	{
		dlc="ORCA";
		author="Ithias";
		scope=2;
		displayName="[ORCA] Clone Trooper Armor (Ithias)";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_uniform_ca.paa";
		model="\SWLB_groundholders\SWLB_clone_uniform_gh.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="ORCA_clone_Ithias";
			uniformType = "Neopren";
			containerClass="Supply120";
			mass=40;
		};
	};
};
class CfgVehicles
{
	class ORCA_clone_base_P2;

class ORCA_clone_Ithias: ORCA_clone_base_P2
	{
		scope=1;
		uniformClass="ORCA_clone_uniform_Ithias";
		model="\SWLB_clones\SWLB_clone_uniform.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"Orca_Aux\Uniforms\Tex\ORCA_Upper_Armor_Ithias.paa",
			"Orca_Aux\Uniforms\Tex\ORCA_Lower_Armor_Ithias.paa",
		};
	};
};