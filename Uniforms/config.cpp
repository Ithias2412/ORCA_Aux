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
	class SWLB_clone_uniform;
	
// Urban Uniform

class ORCA_clone_uniform: SWLB_clone_uniform
	{
		dlc="ORCA";
		author="Ithias";
		scope=2;
		displayName="[ORCA] Clone Trooper Armor";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_uniform_ca.paa";
		model="\SWLB_groundholders\SWLB_clone_uniform_gh.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="ORCA_clone_base_P2";
			uniformType = "Neopren";
			containerClass="Supply120";
			mass=40;
		};
	};

class ORCA_clone_uniform_Specialist: ORCA_clone_uniform
	{
		dlc="ORCA";
		author="Ithias";
		scope=2;
		displayName="[ORCA] Clone Specialist Armor";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_uniform_ca.paa";
		model="\SWLB_groundholders\SWLB_clone_uniform_gh.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="ORCA_clone_base_P2_Specialist";
			uniformType = "Neopren";
			containerClass="Supply120";
			mass=40;
		};
	};

class ORCA_clone_uniform_Specialist_Alt: ORCA_clone_uniform
	{
		dlc="ORCA";
		author="Ithias";
		scope=2;
		displayName="[ORCA] Clone Specialist Armor (Alt)";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_uniform_ca.paa";
		model="\SWLB_groundholders\SWLB_clone_uniform_gh.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="ORCA_clone_base_P2_Specialist_Alt";
			uniformType = "Neopren";
			containerClass="Supply120";
			mass=40;
		};
	};

class ORCA_clone_uniform_NCO: ORCA_clone_uniform
	{
		dlc="ORCA";
		author="Ithias";
		scope=2;
		displayName="[ORCA] Clone NCO Armor";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_uniform_ca.paa";
		model="\SWLB_groundholders\SWLB_clone_uniform_gh.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="ORCA_clone_base_P2_NCO";
			uniformType = "Neopren";
			containerClass="Supply120";
			mass=40;
		};
	};

class ORCA_clone_uniform_NCO_Alt: ORCA_clone_uniform
	{
		dlc="ORCA";
		author="Ithias";
		scope=2;
		displayName="[ORCA] Clone NCO Armor (Alt)";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_uniform_ca.paa";
		model="\SWLB_groundholders\SWLB_clone_uniform_gh.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="ORCA_clone_base_P2_NCO_Alt";
			uniformType = "Neopren";
			containerClass="Supply120";
			mass=40;
		};
	};

};

class CfgVehicles
{
	class SWLB_clone_base_P2;

class ORCA_clone_base_P2: SWLB_clone_base_P2
	{
		scope=1;
		uniformClass="ORCA_clone_uniform";
		model="\SWLB_clones\SWLB_clone_uniform.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"Orca_Mod\Uniforms\Tex\ORCA_Upper_armor_Old.paa",
			"Orca_Mod\Uniforms\Tex\ORCA_Lower_armor_Old.paa",
		};
	};

class ORCA_clone_base_P2_Specialist: ORCA_clone_base_P2
	{
		scope=1;
		uniformClass="ORCA_clone_uniform_Specialist";
		model="\SWLB_clones\SWLB_clone_uniform.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"Orca_Mod\Uniforms\Tex\ORCA_Upper_armor_Old_Specialist.paa",
			"Orca_Mod\Uniforms\Tex\ORCA_Lower_Armor_Old_Specialist.paa",
		};
	};

class ORCA_clone_base_P2_Specialist_Alt: ORCA_clone_base_P2
	{
		scope=1;
		uniformClass="ORCA_clone_uniform_Specialist_Alt";
		model="\SWLB_clones\SWLB_clone_uniform.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"Orca_Mod\Uniforms\Tex\ORCA_Upper_armor_Old_Specialist_Alt.paa",
			"Orca_Mod\Uniforms\Tex\ORCA_Lower_Armor_Old_Specialist.paa",
		};
	};

class ORCA_clone_base_P2_NCO: ORCA_clone_base_P2
	{
		scope=1;
		uniformClass="ORCA_clone_uniform_NCO";
		model="\SWLB_clones\SWLB_clone_uniform.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"Orca_Mod\Uniforms\Tex\ORCA_Upper_Armor_Old_NCO.paa",
			"Orca_Mod\Uniforms\Tex\ORCA_Lower_Armor_Old_NCO.paa",
		};
	};

class ORCA_clone_base_P2_NCO_Alt: ORCA_clone_base_P2
	{
		scope=1;
		uniformClass="ORCA_clone_uniform_NCO_Alt";
		model="\SWLB_clones\SWLB_clone_uniform.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"Orca_Mod\Uniforms\Tex\ORCA_Upper_Armor_Old_NCO_Alt.paa",
			"Orca_Mod\Uniforms\Tex\ORCA_Lower_Armor_Old_NCO.paa",
		};
	};

};