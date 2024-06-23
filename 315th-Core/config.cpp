class CfgPatches
{
	class 315thCore
	{
		author="315th Mod Dev Team";
		requiredAddons[]=
		{
			"A3_data_F",
			"A3_anims_F",
			"A3_weapons_F",
			"A3_characters_F",
			"JLTS_characters_CloneArmor"
		};
		units[]=
		{	
			"315th_trooper_unit",
			"315th_medic",
			"315th_recruit",
			"315th_cadet",
			"315th_eod",
		};
		weapons[]=
		{
			"315th_trooper_helmet",
			"315th_fear_helmet",
			"315th_EOD_helmet",
			"315th_pilot_helmet",
			"315th_recruit_helmet",
			"315th_cadet_helmet",
			"315th_RTO_helmet",
			"315th_trooper_uniform",
			"315th_recruit_uniform",
			"315th_cadet_uniform",
			"315th_medic_uniform",
			"315th_EOD_uniform",
			"315th_NCO_uniform"
		};
	};
};

class CfgFactionClasses
{
	class 315th_Main
	{
		displayName="315th Legion";
	};
};
class CfgEditorCategories
{
	class 315th_resupply
	{
		displayName="315th Resupply";
	};
};
class CfgEditorSubcategories
{
	class 315th_pilot
	{
		displayName="Pilots";
	};
	class 315th_inf
	{
		displayName="Infantry";
	};
	class 315th_aircraft
	{
		displayName="Aircraft";
	};
	class 315th_Mechanized
	{
		displayName="Armored";
	};
	class 315th_resupply
	{
		displayName="Resupply";
	};
};
class CfgWeapons
{
	class UniformItem;
	class HeadgearItem;
	class U_I_CombatUniform;
	class JLTS_CloneArmor: U_I_CombatUniform
	{
		class ItemInfo;
	};
	class JLTS_CloneHelmetP2;
	class 315RTO_helmet: JLTS_CloneHelmetP2
	{
		author="315th Aux Mod Team"
		model="JLTS_AE\SEA_Helmet_SpecOps_SR.p3d";
		displayName="[315th] RTO Helmet";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\315th-Core\textures\base\helmet\315_base_RTO_helmet.paa",
			"\JLTS_AE\Data\BaseTextures\SpecOps\Antennas\SR_Antenna_co.paa",
			"\JLTS_AE\Data\BaseTextures\SpecOps\SpecOpsHelmet_co.paa"
		};
		subItems[]=
		{
			"Integrated_NVG_TI_0_F"
		};
		ace_hearing_lowerVolume=0.60000002;
		ace_hearing_protection=0.85000002;
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="JLTS_AE\SEA_Helmet_SpecOps_SR.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Visor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=15;
					passThrough=0.5;
				};
			};
		};
	};
	class 315th_trooper_helmet: JLTS_CloneHelmetP2
	{
		author="315th Aux Mod Team";
		model="JLTS_AE\SEA_Helmet_P1.p3d";
		displayName="[315th] Trooper Helmet";
		picture="\315thAUX-main\logo.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\315th-Core\textures\base\helmet\315_base_helmet.paa",
			"\JLTS_AE\Data\BaseTextures\P1\P1_Helmet_CO.paa"
		};
		ace_hearing_lowerVolume=0.60000002;
		ace_hearing_protection=0.85000002;
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="JLTS_AE\SEA_Helmet_P1.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			hiddenSelections[]=
			{
				"Camo1",
				"Visor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=15;
					passThrough=0.5;
				};
			};
		};
	};
	class 315th_recruit_helmet: 315th_trooper_helmet
	{
		author="315th Aux Mod Team";
		model="JLTS_AE\SEA_Helmet_P1.p3d";
		displayName="[315th] Recruit Helmet";
		picture="\315thAUX-main\logo.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\315th-Core\textures\base\helmet\315_base_recruit_helmet.paa",
			"\JLTS_AE\Data\BaseTextures\P1\P1_Helmet_CO.paa"
		};
	};
	class 315th_pilot_helmet: JLTS_CloneHelmetP2
	{
		author="315th Aux Mod Team";
		model="JLTS_AE\LS_Helmet_Pilot_P1.p3d";
		displayName="[315th] Pilot Helmet";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\315th-Core\textures\base\helmet\315_base_pilot_helmet.paa",
			"\JLTS_AE\Data\BaseTextures\Pilot\LifeSupport_CO.paa",
			"\JLTS_AE\Data\BaseTextures\Pilot\PilotHelmet_CO.paa"
		};
		subItems[]=
		{
			"Integrated_NVG_TI_0_F"
		};
		ace_hearing_lowerVolume=0.60000002;
		ace_hearing_protection=0.85000002;
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="JLTS_AE\LS_Helmet_Pilot_P1.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Visor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=15;
					passThrough=0.5;
				};
				class Chest
				{
					HitpointName="HitChest";
					armor=10;
					PassThrough=0.5;
				};
			};
		};
	};
	class 315th_fear_helmet: 315th_trooper_helmet
	{
		author="315th Aux Mod Team";
		model="JLTS_AE\SEA_Helmet_P1.p3d";
		displayName="[315th] Fear's Helmet";
		picture="\315thAUX-main\logo.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\315th-Core\textures\custom\helmet\315_custom_fear_helmet.paa",
			"\JLTS_AE\Data\BaseTextures\P1\P1_Helmet_CO.paa"
		};
	};
	class 315th_EOD_helmet: 315th_trooper_helmet
	{
		author="315th Aux Mod Team";
		model="JLTS_AE\SEA_Helmet_P1.p3d";
		displayName="[315th] EOD Helmet";
		picture="\315thAUX-main\logo.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\315th-Core\textures\base\helmet\315_base_EOD_helmet.paa",
			"\JLTS_AE\Data\BaseTextures\P1\P1_Helmet_CO.paa"
		};
	};
	class 315th_cadet_helmet: 315th_trooper_helmet
	{
		author="315th Aux Mod Team";
		model="JLTS_AE\SEA_Helmet_P1.p3d";
		displayName="[315th] Cadet Helmet";
		picture="\315thAUX-main\logo.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\315th-Core\textures\base\helmet\315_base_cadet_helmet.paa",
			"\JLTS_AE\Data\BaseTextures\P1\P1_Helmet_CO.paa"
		};
	};
	class 315th_trooper_uniform: JLTS_CloneArmor
	{
		author="315 Mod Dev Team";
		displayName="[315th] Trooper Uniform";
		picture="315thAUX-main\logo.paa";
		class ItemInfo: ItemInfo
		{
			uniformClass="315th_trooper_unit";
			vestType="Rebreather";
		};
	};
	class 315th_recruit_uniform: JLTS_CloneArmor
	{
		scope=2;
		displayName="[315th] Recruit Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass="315th_recruit";
		};
	};
	class 315th_cadet_uniform: JLTS_CloneArmor
	{
		scope=2;
		displayName="[315th] Cadet Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass="315th_cadet";
		};
	};
	class 315th_medic_uniform : 315th_trooper_uniform
	{
		scope = 2;
		displayName = "[315th] Medic Uniform";
		class ItemInfo : ItemInfo
		{
			uniformClass = "315th_medic";
		};
	};
	class 315th_EOD_uniform : 315th_trooper_uniform
	{
		scope = 2;
		displayName = "[315th] EOD Uniform";
		class ItemInfo : ItemInfo
		{
			uniformClass = "315th_EOD";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=8;
					passThrough=0.5;
				};
			};
		};
	};
		class 315th_NCO_uniform: JLTS_CloneArmor
	{
		scope=2;
		displayName="[315th] NCO Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass="315th_NCO";
		};
	};
};
class CfgVehicles
{
	class B_soldier_base_F;
	class B_Soldier_02_f;
	class B_Soldier_03_f;
	class B_Soldier_f: B_soldier_base_F
	{
		class HitPoints;
	};
	class B_Officer_f: B_soldier_base_F
	{
		class HitPoints;
	};
	class B_Medic_f: B_Soldier_02_f
	{
		class HitPoints;
	};
	class B_Soldier_M_f: B_soldier_base_F
	{
		class HitPoints;
	};
	class B_Soldier_exp_f: B_soldier_base_F
	{
		class HitPoints;
	};
	class B_Soldier_LAT_f: B_soldier_base_F
	{
		class HitPoints;
	};
	class B_Soldier_SL_f: B_Soldier_03_f
	{
		class HitPoints;
	};
	class B_soldier_AR_F: B_Soldier_02_f
	{
		class HitPoints;
	};
	class B_soldier_UAV_F: B_soldier_base_F
	{
		class HitPoints;
	};
	class JLTS_Clone_P2_DC15A: B_Soldier_f
	{
		class HitPoints;
	};
	class 315th_trooper_unit: JLTS_Clone_P2_DC15A
	{
		author="315th AUX Team";
		scope=2;
		side= 1;
		scopeCurator = 2;
		displayName="[315th] Clone Trooper";
		editorPreview="\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_DC15A.jpg";
		faction="315th_Main";
		editorSubcategory="315th_inf";
        backpack="315th_trooper_backpack";
		uniformClass="315th_trooper_uniform";
		hiddenSelectionsTextures[]=
		{
			"\315th-Core\textures\base\uniform\315_base_upper.paa",
			"\315th-Core\textures\base\uniform\315_base_lower.paa",
		};
		linkedItems[]=
		{
			"315th_trooper_helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"JLTS_clone_comlink"
		};
		respawnLinkedItems[]=
		{
			"315th_trooper_helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"JLTS_clone_comlink"
		};
		weapons[]=
		{
			"JLTS_DC15A_plastic",
			"JLTS_DC17SA",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"JLTS_DC15A_plastic",
			"JLTS_DC17SA",
			"Throw",
			"Put"
		};
		nakedUniform="JLTS_CloneNaked_uniform";
		magazines[]=
		{
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		items[]=
		{
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"FirstAidKit"
		};
		
	};
	class 315th_medic: 315th_trooper_unit
	{
		displayName = "[315th] Clone Medic";
		uniformClass = "315th_medic_uniform";
		backpack = "315th_medic_backpack";
		hiddenSelectionsTextures[] =
		{
			"\315th-Core\textures\base\uniform\315_base_medic_upper.paa",
			"\315th-Core\textures\base\uniform\315_base_medic_lower.paa"
		};
		linkedItems[]=
		{
			"315th_trooper_helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"JLTS_clone_comlink"
		};
		respawnLinkedItems[]=
		{
			"315th_trooper_helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"JLTS_clone_comlink"
		};
	};
	class 315th_recruit: 315th_trooper_unit
	{
		displayName = "[315th] Clone Recruit";
		uniformClass = "315th_recruit_uniform";
		backpack = "315th_trooper_backpack";
		hiddenSelectionsTextures[] =
		{
			"\315th-Core\textures\base\uniform\315_base_recruit_upper.paa",
			"\315th-Core\textures\base\uniform\315_base_recruit_lower.paa"
		};
		linkedItems[]=
		{
			"315th_recruit_helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"JLTS_clone_comlink"
		};
		respawnlinkedItems[]=
		{
			"315th_recruit_helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"JLTS_clone_comlink"
		};
	};
	class 315th_cadet: 315th_trooper_unit
	{
		displayName = "[315th] Clone Cadet";
		uniformClass = "315th_cadet_uniform";
		backpack = "315th_trooper_backpack";
		hiddenSelectionsTextures[] =
		{
			"\315th-Core\textures\base\uniform\315_base_cadet_upper.paa",
			"\315th-Core\textures\base\uniform\315_base_recruit_lower.paa"
		};
		linkedItems[]=
		{
			"315th_cadet_helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"JLTS_clone_comlink"
		};
		respawnlinkedItems[]=
		{
			"315th_cadet_helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"JLTS_clone_comlink"
		};
	};
	class 315th_EOD: 315th_trooper_unit
	{
		displayName = "[315th] Clone EOD";
		uniformClass = "315th_trooper_uniform";
		backpack = "315th_trooper_backpack";
		armor=2;
		hiddenSelectionsTextures[] =
		{
			"\315th-Core\textures\base\uniform\315_base_EOD_upper.paa",
			"\315th-Core\textures\base\uniform\315_base_EOD_lower.paa"
		};
		linkedItems[]=
		{
			"315th_trooper_helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"JLTS_clone_comlink"
		};
		respawnlinkedItems[]=
		{
			"315th_trooper_helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"JLTS_clone_comlink"
		};
	};
	class 315th_NCO: 315th_trooper_unit
	{
		displayName = "[315th] Clone NCO";
		uniformClass = "315th_NCO_uniform";
		backpack = "315th_trooper_backpack";
		hiddenSelectionsTextures[] =
		{
			"\315th-Core\textures\base\uniform\315_base_NCO_upper.paa",
			"\315th-Core\textures\base\uniform\315_base_NCO_lower.paa"
		};
		linkedItems[]=
		{
			"315th_trooper_helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"JLTS_clone_comlink"
		};
		respawnlinkedItems[]=
		{
			"315th_trooper_helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"JLTS_clone_comlink"
		};
	};
};