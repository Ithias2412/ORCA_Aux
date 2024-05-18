class CfgPatches {
	class ORCA_Vests {
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
	class VestItem;
	class Hands;
	class Pelvis;
	class SWLB_clone_recon_armor;
	class SWLB_clone_specialist_armor;
	class SWLB_clone_kama_armor;
	class SWLB_CEE_Hazard_Vest;
	class SWLB_clone_officer_armor;
	class SWLB_clone_commander_armor;
	class SWLB_clone_basic_armor;

//Base Start

class ORCA_Veteran_Vest: SWLB_clone_recon_armor
	{
		author="Ithias";
		displayName="[ORCA] Vest (Veteran)";
		descriptionShort = "CT-V";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"holster",
			"pauldron"
		};
		hiddenSelectionsTextures[] = 
		{
			"\SWLB_clones\data\heavy_accessories_co.paa",
			"",
			"\SWLB_clones\data\heavy_accessories_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\SWLB_clones\SWLB_clone_recon_armor.p3d";
			containerClass="Supply100";
			vestType = "Rebreather";
			mass=80;
			class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 40;
                    passThrough = 0.1;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 40;
                    passThrough = 0.1;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                    armor = 40;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 40;
                    passThrough = 0.1;
                };
            };
			hiddenSelections[] = 
			{
				"camo1",
				"camo2",
				"holster",
				"pauldron"
			};
			hiddenSelectionsTextures[] = 
			{
				"SWLB_clones\data\heavy_accessories_co.paa",
				"",
				"SWLB_clones\data\heavy_accessories_co.paa"
			};
		};
	};

class ORCA_Corporal_Vest: SWLB_clone_specialist_armor
	{
		author="Ithias";
		displayName="[ORCA] Vest (Corporal)";
		descriptionShort = "CP";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] = 
		{
			"\SWLB_clones\data\light_accessories_co.paa",
			"\SWLB_clones\data\heavy_accessories_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\SWLB_clones\SWLB_clone_specialist_armor.p3d";
			containerClass="Supply100";
			vestType = "Rebreather";
			mass=80;
			class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 40;
                    passThrough = 0.1;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 40;
                    passThrough = 0.1;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                    armor = 40;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 40;
                    passThrough = 0.1;
                };
            };
			hiddenSelections[] = 
			{
				"camo1",
				"camo2"
			};
			hiddenSelectionsTextures[] = 
			{
				"\SWLB_clones\data\light_accessories_co.paa",
				"\SWLB_clones\data\heavy_accessories_co.paa"
			};
		};
	};

class ORCA_Sergeant_Vest: SWLB_clone_kama_armor
	{
		author="Ithias";
		displayName="[ORCA] Vest (Sergeant)";
		descriptionShort = "CS";
		hiddenSelections[] = 
		{
			"camo1",
			"rank"
		};
		hiddenSelectionsTextures[] = 
		{
			"\ORCA_Aux\Vests\Tex\ORCA_Vest_NCO.paa",
			""
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\SWLB_clones\SWLB_clone_kama_armor.p3d";
			containerClass="Supply100";
			vestType = "Rebreather";
			mass=80;
			class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 40;
                    passThrough = 0.1;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 40;
                    passThrough = 0.1;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                    armor = 40;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 40;
                    passThrough = 0.1;
                };
            };
			hiddenSelections[] = 
			{
				"camo1",
				"rank"
			};
			hiddenSelectionsTextures[] = 
			{
				"\ORCA_Aux\Vests\Tex\ORCA_Vest_NCO.paa",
				""
			};
		};
	};

class ORCA_Platoon_Sergeant_Vest: SWLB_CEE_Hazard_Vest
	{
		author="Ithias";
		displayName="[ORCA] Vest (Platoon Sergeant)";
		descriptionShort = "CSM";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] = 
		{
			"SWLB_clones\data\light_accessories_co.paa",
			"ORCA_Aux\Vests\Tex\ORCA_Vest_NCO.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\SWLB_CEE\data\SWLB_CEE_Hazard_Vest.p3d";
			containerClass="Supply100";
			vestType = "Rebreather";
			mass=80;
			class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 40;
                    passThrough = 0.1;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 40;
                    passThrough = 0.1;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                    armor = 40;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 40;
                    passThrough = 0.1;
                };
            };
			hiddenSelections[] = 
			{
				"camo1",
				"camo2"
			};
			hiddenSelectionsTextures[] = 
			{
				"SWLB_clones\data\light_accessories_co.paa",
				"ORCA_Aux\Vests\Tex\ORCA_Vest_NCO.paa"
			};
		};
	};

class ORCA_Platoon_Executive_Officer_Vest: SWLB_clone_officer_armor
	{
		author="Ithias";
		displayName="[ORCA] Vest (Platoon Executive Officer)";
		descriptionShort = "CL";
		hiddenSelections[] = 
		{
			"camo1",
		};
		hiddenSelectionsTextures[] = 
		{
			"ORCA_Aux\Vests\Tex\ORCA_Vest_NCO.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\SWLB_clones\SWLB_clone_officer_armor.p3d";
			containerClass="Supply100";
			vestType = "Rebreather";
			mass=80;
			class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 40;
                    passThrough = 0.1;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 40;
                    passThrough = 0.1;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                    armor = 40;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 40;
                    passThrough = 0.1;
                };
            };
			hiddenSelections[] = 
			{
				"camo1",
			};
			hiddenSelectionsTextures[] = 
			{
				"ORCA_Aux\Vests\Tex\ORCA_Vest_NCO.paa"
			};
		};
	};

class ORCA_Platoon_Commanding_Officer_Vest: SWLB_clone_commander_armor
	{
		author="Ithias";
		displayName="[ORCA] Vest (Platoon Commanding Officer)";
		descriptionShort = "CC";
		hiddenSelections[] = 
		{
			"camo1",
			"rank"
		};
		hiddenSelectionsTextures[] = 
		{
			"ORCA_Aux\Vests\Tex\ORCA_Vest_NCO.paa",
			""
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\SWLB_clones\SWLB_clone_commander_armor.p3d";
			containerClass="Supply100";
			vestType = "Rebreather";
			mass=80;
			class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 40;
                    passThrough = 0.1;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 40;
                    passThrough = 0.1;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                    armor = 40;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 40;
                    passThrough = 0.1;
                };
            };
			hiddenSelections[] = 
			{
				"camo1",
				"rank"
			};
			hiddenSelectionsTextures[] = 
			{
				"ORCA_Aux\Vests\Tex\ORCA_Vest_NCO.paa",
				""
			};
		};
	};

	class ORCA_Trooper_Vest: SWLB_clone_basic_armor
	{
		author="Ithias";
		displayName = "[ORCA] Vest (Trooper)";
		class ItemInfo: VestItem
		{
			uniformModel = "\SWLB_clones\SWLB_clone_basic_armor.p3d";
			containerClass="Supply100";
			vestType = "Rebreather";
			mass=80;
			class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 40;
                    passThrough = 0.1;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 40;
                    passThrough = 0.1;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 45;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                    armor = 40;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 40;
                    passThrough = 0.1;
                };
            };
			hiddenSelections[] = 
			{
				"",
			};
		};
	};
};