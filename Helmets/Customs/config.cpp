class CfgPatches {
	class ORCA_Helmets_Customs
	{
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
    class ORCA_clone_P2_helmet;
    class HeadgearItem;

//Start
	class ORCA_clone_Ithias_helmet: ORCA_clone_P2_helmet
	{
		author="Ithias";
		displayName="[ORCA] Clone trooper P2 helmet (Ithias)";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Orca_Aux\Helmets\Tex\ORCA_Helmet_Ithias.paa"
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

};