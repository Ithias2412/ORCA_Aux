class CfgPatches {
	class ORCA_LAAT {
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class CfgVehicles 
{
	class lsd_heli_laati_ab;

//LAAT/i

	class ORCA_LAAT: lsd_heli_laati_ab
	{
		author = "Ithias";
		displayname = "[ORCA] LAAT/i Gunship";
		faction = "ORCA_Unit";
		hiddenselectionstextures[] = 
		{
			"Orca_Aux\Aircraft\LAAT\Tex\ORCA_Body1.paa",
			"lsd_vehicles_heli\laati\data\body2_co.paa",
			"lsd_vehicles_heli\laati\data\door1_co.paa",
			"lsd_vehicles_heli\laati\data\door2_co.paa",
			"lsd_vehicles_heli\laati\data\door3_co.paa",
			"Orca_Aux\Aircraft\LAAT\Tex\ORCA_Wings.paa",
			"lsd_vehicles_heli\laati\data\missiles_co.paa",
			"lsd_vehicles_heli\laati\data\cockpits_co.paa",
			"lsd_vehicles_heli\laati\data\glass_ca.paa"
		};
		class TextureSources
		{
			class base
			{
				displayName="ORCA";
				author="Ithias";
				textures[]=
				{
					"Orca_Aux\Aircraft\LAAT\Tex\ORCA_Body1.paa",
					"lsd_vehicles_heli\laati\data\body2_co.paa",
					"lsd_vehicles_heli\laati\data\door1_co.paa",
					"lsd_vehicles_heli\laati\data\door2_co.paa",
					"lsd_vehicles_heli\laati\data\door3_co.paa",
					"Orca_Aux\Aircraft\LAAT\Tex\ORCA_Wings.paa",
					"lsd_vehicles_heli\laati\data\missiles_co.paa",
					"lsd_vehicles_heli\laati\data\cockpits_co.paa",
					"lsd_vehicles_heli\laati\data\glass_ca.paa"
				};
			};
		};
	};
	class lsd_heli_laati_medevac: lsd_heli_laati_ab
	{
		displayName="LAAT/i MedEvac";
		ls_hasTraumaCenter=1;
		attendant=1;
		hiddenSelectionsTextures[]=
		{
			"lsd_vehicles_heli\laati\data\medEvac\body1_co_medic.paa",
			"lsd_vehicles_heli\laati\data\body2_co.paa",
			"lsd_vehicles_heli\laati\data\medEvac\door1_co_medic2.paa",
			"lsd_vehicles_heli\laati\data\medEvac\door2_co_medic.paa",
			"lsd_vehicles_heli\laati\data\medEvac\door3_co_medic.paa",
			"lsd_vehicles_heli\laati\data\wings_co.paa",
			"lsd_vehicles_heli\laati\data\missiles_co.paa",
			"lsd_vehicles_heli\laati\data\cockpits_co.paa",
			"lsd_vehicles_heli\laati\data\glass_ca.paa"
		};
		class TextureSources
		{
			class base
			{
				displayName="Medical Rescue";
				author="Raccoon (Legion Studios)";
				textures[]=
				{
					"lsd_vehicles_heli\laati\data\medEvac\body1_co_medic.paa",
					"lsd_vehicles_heli\laati\data\body2_co.paa",
					"lsd_vehicles_heli\laati\data\medEvac\door1_co_medic2.paa",
					"lsd_vehicles_heli\laati\data\medEvac\door2_co_medic.paa",
					"lsd_vehicles_heli\laati\data\medEvac\door3_co_medic.paa",
					"lsd_vehicles_heli\laati\data\wings_co.paa",
					"lsd_vehicles_heli\laati\data\missiles_co.paa",
					"lsd_vehicles_heli\laati\data\cockpits_co.paa",
					"lsd_vehicles_heli\laati\data\glass_ca.paa"
				};
			};
		};
	};
};