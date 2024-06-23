class CfgPatches
{
	class 315thVests
	{
		author="315th Aux Mod Team";
		units[]=
		{	
		};
		weapons[]=
		{
			"315th_CT_V",
			"315th_SCT_V",
			"315th_CS_V",
			"315th_CP_V",
			"315th_LT_V",
			"315th_CGS_V",
			"315th_CC_V",
			"315th_CM_V",
			"315th_CO_V",
			"315th_ARCC_V",
			"315th_ARC_V"
		};
	};
	author="315th Aux Mod Team";
};

class Cfgweapons
{
	class JLTS_CloneVestOfficer;
	class JLTS_CloneVestReconNCO;
	class JLTS_CloneVestReconOfficer;
	class JLTS_CloneVestRecon;
	class JLTS_CloneVestHolster;
	class JLTS_CloneVestOfficer2;
	class JLTS_CloneVestARC;
	class VestItem;
	class ItemInfo;

	class 315th_CT_V : JLTS_CloneVestHolster
	{
		author="315th Aux Mod Team";
		scope=2;
		displayName="[315th] Clone Holster";
		picture="\MRC\JLTS\characters\CloneArmor2\data\ui\CloneVestHolster_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor2\CloneVestHolster.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor2\CloneVestHolster.p3d";
			containerClass="Supply40";
			hiddenSelections[]=
			{
				"camo1"
			};
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=20;
					PassThrough=0.30000001;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough=0.30000001;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=18;
					passThrough=0.30000001;
				};
			};
		};
	};
	class 315th_SCT_V : JLTS_CloneVestRecon
	{
		displayName="[315th] Clone Senior Trooper Vest";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestRecon.p3d";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\CloneArmor\data\Clone_vest_heavy_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestRecon.p3d";
			containerClass="Supply120";
			hiddenSelections[]=
			{
				"camo2"
			};
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=20;
					PassThrough=0.30000001;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough=0.30000001;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=18;
					passThrough=0.30000001;
				};
			};
		};
	};
	class 315th_CS_V : JLTS_CloneVestReconOfficer
	{
		displayName="[315th] Clone Sergeant Vest";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestReconOfficer.p3d";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestKama_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa",
			"\MRC\JLTS\characters\CloneArmor\data\Clone_vest_heavy_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestReconOfficer.p3d";
			containerClass="Supply120";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=20;
					PassThrough=0.30000001;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough=0.30000001;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=18;
					passThrough=0.30000001;
				};
			};
		};
	};
	class 315th_CP_V : JLTS_CloneVestReconNCO
	{
		displayName="[315th] Clone Corporal Vest";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestReconNCO.p3d";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\CloneArmor\data\Clone_vest_heavy_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestReconNCO.p3d";
			containerClass="Supply120";
			hiddenSelections[]=
			{
				"camo2"
			};
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=20;
					PassThrough=0.30000001;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough=0.30000001;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=18;
					passThrough=0.30000001;
				};
			};
		};
	};
	class 315th_LT_V : JLTS_CloneVestOfficer
	{
		author="315th Aux Mod Team";
		scope=2;
		displayName = "[315th] Lieutenant Vest";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestLieutenant.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
			containerClass="Supply120";
			hiddenSelections[]=
			{
				"camo1"
			};
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=20;
					PassThrough=0.30000001;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough=0.30000001;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=18;
					passThrough=0.30000001;
				};
			};
		};
	};
	class 315th_CGS_V : JLTS_CloneVestOfficer2
	{
		author="315th Aux Mod Team";
		scope=2;
		displayName = "[315th] Gunnery Sergeant Vest";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestOfficer2.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestOfficer2.p3d";
			containerClass="Supply120";
			hiddenSelections[]=
			{
				"camo1"
			};
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=20;
					PassThrough=0.30000001;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough=0.30000001;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=18;
					passThrough=0.30000001;
				};
			};
		};
	};
class 315th_CC_V : JLTS_CloneVestOfficer
	{
		author="315th Aux Mod Team";
		scope=2;
		displayName = "[315th] Clone Captain Vest";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestLieutenant.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\315th-Vests\textures\vest\518_base_vest_captain.paa",
			"\MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
			containerClass="Supply120";
			hiddenSelections[]=
			{
				"camo1"
			};
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=20;
					PassThrough=0.30000001;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough=0.30000001;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=18;
					passThrough=0.30000001;
				};
			};
		};
	};
	class 315th_CM_V : JLTS_CloneVestOfficer
	{
		author="315th Aux Mod Team";
		scope=2;
		displayName = "[315th] Clone Major Vest";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestLieutenant.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"315th-Vests\textures\vest\518_base_vest_major.paa",
			"\MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
			containerClass="Supply120";
			hiddenSelections[]=
			{
				"camo1"
			};
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=20;
					PassThrough=0.30000001;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough=0.30000001;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=18;
					passThrough=0.30000001;
				};
			};
		};
	};
	class 315th_CO_V : JLTS_CloneVestOfficer
	{
		author="315th Aux Mod Team";
		scope=2;
		displayName = "[315th] Clone Commander Vest";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestLieutenant.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\315th-Vests\textures\vest\518_base_vest_commander.paa",
			"\MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
			containerClass="Supply120";
			hiddenSelections[]=
			{
				"camo1"
			};
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=20;
					PassThrough=0.30000001;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough=0.30000001;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=18;
					passThrough=0.30000001;
				};
			};
		};
	};
	class 315th_ARC_V : JLTS_CloneVestARC
	{
		author="315th Aux Mod Team";
		scope=2;
		displayName = "[315th] ARC Trooper Vest";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestARC_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestARC.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"MRC\JLTS\characters\CloneArmor\data\Clone_vest_arc_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestARC.p3d";
			containerClass="Supply120";
			hiddenSelections[]=
			{
				"camo1"
			};
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=20;
					PassThrough=0.30000001;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough=0.30000001;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=18;
					passThrough=0.30000001;
				};
			};
		};
	};
	class 315th_ARCC_V: JLTS_CloneVestARC
	{
		displayName="[315th] ARC Cadet Vest";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestARCCadet.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestARCCadet.p3d";
			containerClass="Supply120";
			hiddenSelections[]=
			{
				"camo1"
			};
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=20;
					PassThrough=0.30000001;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough=0.30000001;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=18;
					passThrough=0.30000001;
				};
			};
		};
	};
};
