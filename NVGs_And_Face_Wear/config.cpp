class CfgPatches {
	class ORCA_Facewear {
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
class CfgWeapons
{
	class OPTRE_NVG;
	class ORCA_NVG_Chip: OPTRE_NVG
	{
		displayName = "[ORCA] NVG Chip";
		picture = "\MRC\JLTS\Core_mod\data\ui\nvg_chip_1_ui_ca.paa";
	};
	
};
class CfgGlasses
{
    class ItemInfo;
	class G_Combat;

//Primary
	class ORCA_Facewear_Base: G_Combat
	{
		_generalMacro = "G_Combat";
		ACE_Color[] = {0,0,0};
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		//ACE_Overlay = "\SWLB_equipment\facewears\data\P2_HUD_ca.paa";
		ACE_Overlay = "";
		ACE_OverlayCracked = "\SWLB_equipment\facewears\data\P2_HUD_cracked_ca.paa";
		//ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayDirt = "";
		ACE_Protection = 1;
		ACE_Resistance = 1;
		ACE_TintAmount = 0;
		author = "SW Legion Studios";
		displayName = "ORCA Facewear Base";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		identityTypes[] = {};
		mass = 2;
		model = "\SWLB_clones\SWLB_clone_rangefinder_off.p3d";
		name = "None";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_rangefinder_ca.paa";
		scope = 1;
	};
	class ORCA_Facewear_Rangefinder :ORCA_Facewear_Base
	{
		scope = 2;
		displayName = "[ORCA] Range Finder";
	};
	class ORCA_Facewear_Visor :ORCA_Facewear_Base
	{
		scope = 2;
		displayName = "[ORCA] Visor (On)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\ORCA_Aux\NVGs_And_Face_Wear\Tex\ORCA_Facewear_Visor.paa"};
		model = "\lsd_equipment_bluefor\accessories\gar\visor\lsd_gar_visor_nvg_on.p3d";
		picture = "\lsd_equipment_bluefor\accessories\gar\_ui\icon_cloneVisor_ca.paa";
	};
	class ORCA_Facewear_Visor_Off :ORCA_Facewear_Visor
	{
		scope = 2;
		displayName = "[ORCA] Visor (Off)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\ORCA_Aux\NVGs_And_Face_Wear\Tex\ORCA_Facewear_Visor.paa"};
		model = "\lsd_equipment_bluefor\accessories\gar\visor\lsd_gar_visor_nvg_off.p3d";
	};
	class ORCA_Facewear_XO :ORCA_Facewear_Base
	{
		scope = 2;
		displayName = "[ORCA] Commander Visor (XO)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\ORCA_Aux\NVGs_And_Face_Wear\Tex\ORCA_Facewear_Commander.paa"};
		model = "\SWLB_clones\SWLB_clone_ccVisor.p3d";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_ccVisor_ca.paa";
	};
	class ORCA_Facewear_CO :ORCA_Facewear_Base
	{
		scope = 2;
		displayName = "[ORCA] Commander Visor (CO)";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = 
		{
			"\ORCA_Aux\NVGs_And_Face_Wear\Tex\ORCA_Facewear_Commander.paa",
			"\ORCA_Aux\NVGs_And_Face_Wear\Tex\ORCA_Facewear_Commander.paa",
			"\ORCA_Aux\NVGs_And_Face_Wear\Tex\ORCA_Facewear_Commander.paa",
		};
		model = "\lsd_equipment_bluefor\accessories\gar\commander\lsd_gar_p2Commander_nvg";
		picture = "\lsd_equipment_bluefor\accessories\gar\_ui\icon_cloneVisor_cc_ca.paa";
	};
	class ORCA_Facewear_Visor_Old :ORCA_Facewear_Base
	{
		scope = 2;
		displayName = "[ORCA] Visor (On / Clean)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\lsd_equipment_bluefor\accessories\gar\visor\data\SWLB_clone_nvg_co.paa"};
		model = "\lsd_equipment_bluefor\accessories\gar\visor\lsd_gar_visor_nvg_on.p3d";
		picture = "\lsd_equipment_bluefor\accessories\gar\_ui\icon_cloneVisor_ca.paa";
	};
	class ORCA_Facewear_Visor_Off_Old :ORCA_Facewear_Visor
	{
		scope = 2;
		displayName = "[ORCA] Visor (Off / Clean)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\lsd_equipment_bluefor\accessories\gar\visor\data\SWLB_clone_nvg_co.paa"};
		model = "\lsd_equipment_bluefor\accessories\gar\visor\lsd_gar_visor_nvg_off.p3d";
	};
	class ORCA_Facewear_XO_Old :ORCA_Facewear_Base
	{
		scope = 2;
		displayName = "[ORCA] Commander Visor (XO / Clean)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\SWLB_clones\data\SWLB_clone_nvg_co.paa"};
		model = "\SWLB_clones\SWLB_clone_ccVisor.p3d";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_ccVisor_ca.paa";
	};
	class ORCA_Facewear_CO_Old :ORCA_Facewear_Base
	{
		scope = 2;
		displayName = "[ORCA] Commander Visor (CO / Clean)";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\lsd_equipment_bluefor\accessories\gar\visor\data\SWLB_clone_nvg_co.paa","\lsd_equipment_bluefor\accessories\gar\visor\data\SWLB_clone_nvg_co.paa","\lsd_equipment_bluefor\accessories\gar\visor\data\SWLB_clone_nvg_co.paa"};
		model = "\lsd_equipment_bluefor\accessories\gar\commander\lsd_gar_p2Commander_nvg";
		picture = "\lsd_equipment_bluefor\accessories\gar\_ui\icon_cloneVisor_cc_ca.paa";
	};

};