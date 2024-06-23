class CfgPatches
{
	class 315th_DP23
	{
		name = "[315th] DP-23";
		author = "315th Aux Team";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"315thAUX_DP23"};
	};
};
class Mode_SemiAuto;
class CfgWeapons
{
	class PointerSlot;
	class WeaponSlotsInfo;
	class JLTS_DP23;
	class 315thAUX_DP23: JLTS_DP23
	{
		displayName="[315th] DP-23";
		picture="\MRC\JLTS\weapons\DP23\data\ui\DP23_ui_ca.paa";
		model="\MRC\JLTS\weapons\DP23\DP23.p3d";
		scope=2;
		scopeArsenal=2;
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		JLTS_friedItem="JLTS_DP23_fried";
		JLTS_repairTime=25;
		magazines[]=
		{
			"JLTS_DP23_mag"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"acc_flashlight",
					"acc_pointer_IR"
				};   
			};
		};
		magazineWell[]={};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\MRC\JLTS\weapons\DP23\sounds\dp23_fire.wss",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=1.2;
			dispersion=0.00003000003;
			minRange=1;
			minRangeProbab=0.9;
			midRange=60;
			midRangeProbab=0.79999999;
			maxRange=90;
			maxRangeProbab=0.40000001;
		};
	};
};