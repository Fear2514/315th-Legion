class CfgPatches
{
	class DC15S_315
	{
		name = "[315th] DC-15S";
		author = "315th Aux Team";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"JLTS_DC15S_315"};
	};
};

class CfgWeapons
{
    class CowsSlot; 
    class MuzzleSlot;
    class PointerSlot;
    class UnderBarrelSlot;
    class WeaponSlotsInfo;
	class JLTS_DC15S;
	class JLTS_DC15S_315: JLTS_DC15S
	{
		displayName="[315th] DC-15S";
		scope=2;
		picture="\MRC\JLTS\weapons\DC15S\data\ui\DC15S_ui_ca.paa";
		model="\MRC\JLTS\weapons\DC15S\DC15S.p3d";
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		JLTS_friedItem="JLTS_DC15S_315_Fried";
		JLTS_repairTime=20;
		class LinkedItems
		{
		};
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
         mass=66;
         class CowSlot:CowsSlot
         {
          linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
          compatibleItems[]=
          {
           "3as_optic_reflex_dc15c"
          };
         };
         class MuzzleSlot: MuzzleSlot
         {
          compatibleItems[]={};  
         };
         class PointerSlot: PointerSlot
         {
          compatibleItems[]={};   
         };
         class UnderBarrelSlot: UnderBarrelSlot
         {
          compatibleItems[]={};  
         };
        };
    };
};