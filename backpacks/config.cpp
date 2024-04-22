class CfgPatches {
	class ORCA_Backpacks {
		units[] = 
        {
            "",
			""
        };
		weapons[] = 
        {
            "",
            ""
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class CfgVehicles
{
	class SWLB_clone_backpack;
	class SWLB_clone_bag_belt;
	class SWLB_clone_RTO_mini_backpack_night;
	class ls_gar_mrbc_backpack;
	class 3AS_Republic_Mortar_Bag;

//Base Items


	class ORCA_Backpack: SWLB_clone_backpack
	{
		author="Ithias";
		displayName="[ORCA] Backpack";
		model = "\SWLB_equipment\backpacks\SWLB_clone_backpack.p3d";
		maximumLoad=350;
		mass=40;
		hiddenSelections[] = 
		{
			"camo1",
			"cover",
			"heavy",
			"medic",
			"RTO"
		};
		hiddenSelectionsTextures[] = 
		{
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			""
		};
	};

	class ORCA_Backpack_JTAC: SWLB_clone_backpack
	{
		author="Ithias";
		displayName="[ORCA] Backpack (JTAC)";
		model = "\SWLB_equipment\backpacks\SWLB_clone_backpack.p3d";
		maximumLoad=350;
		mass=40;
		hiddenSelections[] = 
		{
			"camo1",
			"cover",
			"heavy",
			"medic",
			"RTO"
		};
		hiddenSelectionsTextures[] = 
		{
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			"",
			"",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa"
		};
		descriptionShort="AN/PRC-521<br>UNSC Long Range Radio<br>30km Effective Range";
		tf_isolatedAmount=0.64999998;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=120000;
		tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};

	class ORCA_Backpack_Medic: SWLB_clone_backpack
	{
		author="Ithias";
		displayName="[ORCA] Backpack (Medic)";
		model = "\SWLB_equipment\backpacks\SWLB_clone_backpack.p3d";
		maximumLoad=350;
		mass=40;
		hiddenSelections[] = 
		{
			"camo1",
			"cover",
			"heavy",
			"medic",
			"RTO"
		};
		hiddenSelectionsTextures[] = 
		{
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			""
		};
	};

	class ORCA_Backpack_Heavy: SWLB_clone_backpack
	{
		author="Ithias";
		displayName="[ORCA] Backpack (Heavy)";
		model = "\SWLB_equipment\backpacks\SWLB_clone_backpack.p3d";
		maximumLoad=350;
		mass=40;
		hiddenSelections[] = 
		{
			"camo1",
			"cover",
			"heavy",
			"medic",
			"RTO"
		};
		hiddenSelectionsTextures[] = 
		{
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			""
		};
	};

	class ORCA_Bag: SWLB_clone_bag_belt
	{
		author="Ithias";
		displayName="[ORCA] Bag";
		model = "\SWLB_equipment\backpacks\SWLB_clone_bag.p3d";
		maximumLoad=350;
		mass=40;
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
		};
		hiddenSelectionsTextures[] = 
		{
			"\SWLB_equipment\backpacks\data\bag_co.paa",
			""
		};
	};

	class ORCA_NCO_Radio: SWLB_clone_RTO_mini_backpack_night
	{
		author="Ithias";
		displayName="[ORCA] NCO Radio";
		model = "\SWLB_equipment\backpacks\SWLB_clone_RTO_mini_backpack.p3d";
		maximumLoad=350;
		mass=40;
		hiddenSelections[] = 
		{
			"main",
			"accumulator"
		};		
		hiddenSelectionsTextures[] = 
		{
			"\SWLB_equipment\backpacks\data\SWLB_clone_RTO_mini_backpack_night_co.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_RTO_mini_backpack_accumulator_night_co.paa"
		};
		descriptionShort="AN/PRC-521<br>UNSC Long Range Radio<br>30km Effective Range";
		tf_isolatedAmount=0.64999998;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=120000;
		tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};

	class ORCA_Repeater_CSW: ls_gar_mrbc_backpack
	{
		author="Ithias";
		displayName = "[ORCA] Blaster Cannon CSW (BANNED)";
	};
	
	class ORCA_Mortor_CSW: 3AS_Republic_Mortar_Bag
	{
		author="Ithias";
		displayName = "[ORCA] Mortor CSW (BANNED)";
		picture = "ls_equipment_bluefor\backpack\gar\mrbc\data\ui\mrbc_ui_ca.paa";
	};



};