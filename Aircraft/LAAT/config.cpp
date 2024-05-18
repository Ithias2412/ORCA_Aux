class CfgPatches {
	class ORCA_LAAT {
		units[] = 
        {
			"ORCA_LAAT",
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
		displayName="[ORCA] LAAT/i";
		side=1;
		scope=2;
		scopeCurator=2;
		faction="ORCA_Faction";
		editorSubcategory = "EdSubcat_Helicopters";
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

};