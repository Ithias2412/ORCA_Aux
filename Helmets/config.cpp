class CfgPatches {
	class ORCA_Helmets {
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
	class HeadgearItem;
	class SWLB_clone_P2_helmet;
	class SWLB_clone_ARF_P1_helmet;
	class SWLB_clone_BARC_helmet;
	class SWLB_clone_pilot_P2_helmet;
	class SWLB_clone_eng_helmet;
	class SWLB_P2_SpecOps_Helmet;
	class lsd_gar_airborne_new;

//Base Start
	class ORCA_clone_P2_helmet: SWLB_clone_P2_helmet
	{
		author="Ithias";
		displayName="[ORCA] Clone trooper P2 helmet";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Orca_Mod\Helmets\Tex\ORCA_Helmet_Old.paa"
		};
		model="\SWLB_clones\SWLB_clone_P2_helmet.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=1;
			uniformModel="\SWLB_clones\SWLB_clone_P2_helmet.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			modelSides[]={6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};

	class ORCA_clone_P2_helmet_NCO: ORCA_clone_P2_helmet
	{
		displayName="[ORCA] Clone trooper P2 NCO helmet ";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Orca_Mod\Helmets\Tex\ORCA_Helmet_Old_NCO.paa"
		};
	};

	
	class ORCA_Clone_Pilot_Helmet: SWLB_clone_pilot_P2_helmet
	{
		scope=2;
		author="Ithias";
		displayName="[ORCA] Clone trooper Pilot helmet";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_pilot_P2_helmet_ca.paa";
		hiddenSelections[]=
		{
			"camo1",
		};
		hiddenSelectionsTextures[]=
		{
			"Orca_Mod\Helmets\Tex\ORCA_Helmet_Old_Pilot.paa",
		};
		model="\SWLB_clones\SWLB_clone_pilot_P2_helmet.p3d";
		subItems[]=
		{
			""
		};
		class ItemInfo: HeadgearItem
		{
			mass=1;
			uniformModel="\SWLB_clones\SWLB_clone_pilot_P2_helmet.p3d";
			hiddenSelections[]=
			{
				"camo1",
			};
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};

	class ORCA_Clone_JTAC_Helmet: SWLB_P2_SpecOps_Helmet
	{
		scope=2;
		author="Ithias";
		displayName="[ORCA] Clone trooper JTAC helmet";
		model="SWLB_CEE\data\SWLB_P2_SpecOps_Helmet.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Orca_Mod\Helmets\Tex\ORCA_Helmet_Old_JTAC.paa",
		};
		subItems[]=
		{
			""
		};
		class ItemInfo: HeadgearItem
		{
			mass=1;
			uniformModel="SWLB_CEE\data\SWLB_P2_SpecOps_Helmet.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			hiddenSelections[]=
			{
				"Camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=50;
					passThrough=0.5;
				};
			};
		};
	};
	class ORCA_Clone_JTAC_Helmet_NCO: SWLB_P2_SpecOps_Helmet
	{
		scope=2;
		author="Ithias";
		displayName="[ORCA] Clone trooper JTAC NCO helmet";
		model="SWLB_CEE\data\SWLB_P2_SpecOps_Helmet.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Orca_Mod\Helmets\Tex\ORCA_Helmet_Old_JTAC_NCO.paa",
		};
		subItems[]=
		{
			""
		};
		class ItemInfo: HeadgearItem
		{
			mass=1;
			uniformModel="SWLB_CEE\data\SWLB_P2_SpecOps_Helmet.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			hiddenSelections[]=
			{
				"Camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=50;
					passThrough=0.5;
				};
			};
		};
	};


//Base End
};