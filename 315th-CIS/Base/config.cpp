class cfgPatches
{
	class 315_CIS
	{
		name="315_CIS";
		author="315th AUX Team";
		requiredAddons[]=
		{
			"JLTS_Core",
		};
        weapons[]=
		{
            "315_CIS_Base_B1_Droid_U",
            "315_CIS_B1_Droid_AT_U",
            "315_CIS_B1_Droid_AA_U",
            "315_CIS_B1_Droid_Sniper_U",
            "315_CIS_B1_Droid_Shotgun_U",
            "315_CIS_B1_Droid_Heavy_U",
            "315_CIS_B1_Droid_Grenadier_U",
            "315_CIS_B1_Droid_Security_U",
            "315_CIS_B1_Droid_Crew_U",
            "315_CIS_B1_Droid_Commander_U",
			"315_CIS_BX_U_Base",
			"315_CIS_BX_Lead_U_Base",
			"315_CIS_BX_Vest"

		};
        units[]=
		{
			"315_CIS_B1_backpack",
			"315_CIS_B1_antenna_backpack",
			"315_CIS_Base_B1_Droid",
            "315_CIS_B1_Droid_AT",
            "315_CIS_B1_Droid_AA",
            "315_CIS_B1_Droid_Sniper",
            "315_CIS_B1_Droid_Shotgun",
            "315_CIS_B1_Droid_Heavy",
            "315_CIS_B1_Droid_Grenadier",
            "315_CIS_B1_Droid_Security",
            "315_CIS_B1_Droid_Crew",
            "315_CIS_B1_Droid_Commander",
			"315_CIS_TSeries",
			"315_CIS_B2_Droid",
			"315_CIS_BX_Base",
			"315_CIS_BX_Lead",
			"315_CIS_BX_Sniper",
			"315_CIS_BX_Heavy",
			"315_CIS_BX_AT"
		};
	};
};
class CfgFactionClasses
{
	class 315_CIS
	{
		displayName="[315th] CIS Faction";
		author="315th AUX Team";
		flag="\a3\Data_f\Flags\flag_nato_co.paa";
		icon="";
		priority=1;
		side=0;
	};
};
class CfgEditorSubcategories
{
	class 315_CIS_inf
	{
		displayName="[CIS] B1 Infantry";
	};
    class 315_CIS_B2
	{
		displayName="[CIS] B2 Infantry";
	};
    class 315_CIS_aircraft
	{
		displayName="[CIS] Aircraft";
	};
    class 315_CIS_helicopter
	{
		displayName="[CIS] Helicopter";
	};
    class 315_CIS_armoured
	{
		displayName="[CIS] Armoured";
	};
    class 315_CIS_Mercenary
	{
		displayName="[CIS] Mercenary Division";
	};
    class 315_CIS_AA
	{
		displayName="[CIS] Anti-Air";
	};
    class 315_CIS_HVT
	{
		displayName="[CIS] HVT";
    };
    class 315_CIS_Turrets
	{
		displayName="[CIS] Turrets";
	};
    class 315_CIS_Special
	{
		displayName="[CIS] Special Forces";
	};
};
class CfgWeapons
{
	class U_I_CombatUniform;
	class UniformItem;
	class JLTS_DroidB1;
	class 315_CIS_Base_B1_Droid_U: JLTS_DroidB1
	{
		JLTS_isDroid=1;
		JLTS_hasEMPProtection=0;
		JLTS_deathSounds="DeathDroid";
		author="315th AUX Team";
		scope=2;
		displayName="[315th CIS] B1 Uniform";
		picture="\MRC\JLTS\characters\DroidArmor\data\ui\b1_uniform_ui_ca.paa";
		model="\MRC\JLTS\characters\DroidArmor\DroidUniformB1.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="315_CIS_Base_B1_Droid";
			containerClass="Supply150";
			mass=100;
		};
	};
    class 315_CIS_B1_Droid_AT_U: 315_CIS_Base_B1_Droid_U
	{
		displayName="[315th CIS] B1 AT Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass="315_CIS_B1_Droid_AT";
		};
	};
    class 315_CIS_B1_Droid_AA_U: 315_CIS_Base_B1_Droid_U
	{
		displayName="[315th CIS] B1 AA Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass="315_CIS_B1_Droid_AA";
		};
	};
    class 315_CIS_B1_Droid_Sniper_U: 315_CIS_Base_B1_Droid_U
	{
		displayName="[315th CIS] B1 Sniper Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass="315_CIS_B1_Droid_Sniper";
		};
	};
    class 315_CIS_B1_Droid_Shotgun_U: 315_CIS_Base_B1_Droid_U
	{
		displayName="[315th CIS] B1 Shotgun Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass="315_CIS_B1_Droid_Shotgun";
		};
	};
    class 315_CIS_B1_Droid_Heavy_U: 315_CIS_Base_B1_Droid_U
	{
		displayName="[315th CIS] B1 Heavy Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass="315_CIS_B1_Droid_Heavy";
		};
	};
    class 315_CIS_B1_Droid_Grenadier_U: 315_CIS_Base_B1_Droid_U
	{
		displayName="[315th CIS] B1 Grenadier Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass="315_CIS_B1_Droid_Grenadier";
		};
	};
    class 315_CIS_B1_Droid_Security_U: 315_CIS_Base_B1_Droid_U
	{
		displayName="[315th CIS] B1 Security Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass="315_CIS_B1_Droid_Security";
		};
	};
    class 315_CIS_B1_Droid_Crew_U: 315_CIS_Base_B1_Droid_U
	{
		displayName="[315th CIS] B1 Crew Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass="315_CIS_B1_Droid_Crew";
		};
	};
    class 315_CIS_B1_Droid_Commander_U: 315_CIS_Base_B1_Droid_U
	{
		displayName="[315th CIS] B1 Commander Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass="315_CIS_B1_Droid_Commander";
		};
	};
	class V_PlateCarrier1_rgr;
	class ls_redforVest_base: V_PlateCarrier1_rgr
	{
		class ItemInfo;
	};
	class ls_cis_bxCommando_vest: ls_redforVest_base
	{
		class ItemInfo;
	};
	class 315_CIS_BX_Vest: ls_cis_bxCommando_vest
	{
		scope=2;
		scopeArsenal=2;
		displayName="[315th CIS] BX Vest";
		model="\ls_armor_redfor\vest\cis\bxCommando\ls_cis_bxCommando_vest.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\ls_armor_redfor\vest\cis\bxCommando\ls_cis_bxCommando_vest.p3d";
			containerClass="Supply40";
			hiddenSelections[]={};
			mass=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=6;
					PassThrough=0.30000001;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=6;
					passThrough=0.30000001;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=4;
					passThrough=0.30000001;
				};
			};
		};
	};
};
class CfgVehicles
{
	class JLTS_B1_backpack;
	class JLTS_B1_backpack_prototype;
	class JLTS_B1_antenna;
	class 315_CIS_B1_backpack: JLTS_B1_backpack
    {
		author="315th AUX Team";
		scope=2;
		scopeArsenal=2;
		displayName="[315th CIS] Droid B1 Backpack ";
		maximumload=600;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_backpack_co.paa"
		};
		class TransportItems
		{
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=15;
			};
		};
		class TransportMagazines
		{
			class _xx_rps6mag
			{
				magazine="JLTS_RPS6_mag";
				count=2;
			};
			class _xx_aa_mag
			{
				count=2;
				magazine="Titan_AA";
			};
		};
	};
    class 315_CIS_B1_antenna_backpack: JLTS_B1_antenna
	{
		author="315th AUX Team";
		scope=2;
		scopeArsenal=2;
		displayName="[315 CIS] B1 Backpack NCO";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_antenna_co.paa"
		};
		class TransportItems
		{
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=10;
			};
		};
	};
    class O_soldier_base_F;
	class O_Soldier_02_F;
	class O_Soldier_sniper_base_F;
	class O_Soldier_F: O_soldier_base_F
	{
		class HitPoints;
	};
	class O_Soldier_LAT_f: O_soldier_base_F
	{
		class HitPoints;
	};
	class O_Soldier_AT_F: O_soldier_base_F
	{
		class HitPoints;
	};
	class O_soldier_AR_F: O_soldier_base_F
	{
		class HitPoints;
	};
	class O_Crew_f: O_soldier_base_F
	{
		class HitPoints;
	};
	class O_Helipilot_F: O_Soldier_02_F
	{
		class HitPoints;
	};
	class O_Officer_f: O_soldier_base_F
	{
		class HitPoints;
	};
	class O_Sniper_f: O_Soldier_sniper_base_F
	{
		class HitPoints;
	};
	class O_soldier_UAV_F: O_soldier_base_F
	{
		class HitPoints;
	};
	class JLTS_Droid_B1_E5: O_Soldier_F
	{
		class HitPoints;
	};
    class JLTS_Droid_B1_Marine;
	class JLTS_Droid_B1_Security;
	class JLTS_Droid_B1_Commander;
	class JLTS_Droid_B1_Pilot;
	class JLTS_Droid_B1_Crew;
	class JLTS_Droid_B1_Sniper;
	class JLTS_Droid_B1_Prototype;
	class JLTS_Droid_B1_SBB3;
    class 315_CIS_Base_B1_Droid: JLTS_Droid_B1_E5
	{
		author="315th AUX Team";
		scope=2;
		faction="315_CIS";
		editorSubcategory="315_CIS_inf";
		editorPreview="\MRC\JLTS\characters\DroidArmor\data\ui\editorPreviews\JLTS_Droid_B1_E5.jpg";
		displayName="B1 Droid";
		backpack="315_CIS_B1_backpack";
		uniformClass="315_CIS_Base_B1_Droid_U";
		identityTypes[]=
		{
			"lsd_voice_b1Droid"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_co.paa"
		};
		LinkedItems[]=
		{
			"ItemMap",
			"315_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		Weapons[]=
		{
			"JLTS_E5",
			"JLTS_RG4D",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"JLTS_E5",
			"JLTS_RG4D",
			"Throw",
			"Put"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"315_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		Magazines[]=
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=2;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=2;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=2;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=8;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="";
			};
			class HitAbdomen: HitPelvis
			{
				armor=6;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.16;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=6;
				material=-1;
				name="spine2";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=8;
				material=-1;
				name="spine3";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=6;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=6;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=6;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=3;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=6;
				material=-1;
				name="hand_l";
				passThrough=1;
				radius=0.079999998;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=6;
				material=-1;
				name="leg_l";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
		};
		armor=2;
		armorStructural=4;
		explosionShielding=0.40000001;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
	};
    class 315_CIS_B1_Droid_AA: 315_CIS_Base_B1_Droid
	{
		author="315th AUX Team";
		scope=2;
		displayName="B1 Anti-Air Droid";
		editorPreview="\MRC\JLTS\characters\DroidArmor\data\ui\editorPreviews\JLTS_Droid_B1_Marine.jpg";
		faction="315_CIS";
		editorSubcategory="315_CIS_inf";
		identityTypes[]=
		{
			"lsd_voice_b1Droid"
		};
		uniformClass="315_CIS_B1_Droid_AA_U";
		backpack="315_CIS_B1_backpack";
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_co.paa"
		};
		linkedItems[]=
		{
			"ItemMap",
			"315_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"315_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"JLTS_E5",
			"SWLW_E60R_AA",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"JLTS_E5",
			"SWLW_E60R_AA",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"SWLW_e60r_aa_mag",
			"SmokeShell",
			"SmokeShellGreen"
		};
		respawnMagazines[]=
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"SWLW_e60r_aa_mag",
			"SmokeShell",
			"SmokeShellGreen"
		};
	};
    class 315_CIS_B1_Droid_AT: 315_CIS_Base_B1_Droid
	{
		author="315th AUX Team";
		scope=2;
		displayName="B1 AT Droid";
		editorPreview="\MRC\JLTS\characters\DroidArmor\data\ui\editorPreviews\JLTS_Droid_B1_Marine.jpg";
		faction="315_CIS";
		editorSubcategory="315_CIS_inf";
		uniformClass="315_CIS_B1_Droid_AT_U";
		identityTypes[]=
		{
			"lsd_voice_b1Droid"
		};
		backpack="315_CIS_B1_backpack";
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_co.paa"
		};
		linkedItems[]=
		{
			"ItemMap",
			"315_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"315_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"JLTS_E5",
			"JLTS_RPS6",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"JLTS_E5",
			"JLTS_RPS6",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_RPS6_mag",
			"SmokeShell",
			"SmokeShellGreen"
		};
		respawnMagazines[]=
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_RPS6_mag",
			"SmokeShell",
			"SmokeShellGreen"
		};
	};
    class 315_CIS_B1_Droid_Sniper: 315_CIS_Base_B1_Droid
	{
		author="315th AUX Team";
		scope=2;
		displayName="B1 Sniper Droid";
		editorPreview="\MRC\JLTS\characters\DroidArmor\data\ui\editorPreviews\JLTS_Droid_B1_Sniper.jpg";
		icon="JLTS_iconManSniper";
		faction="315_CIS";
		editorSubcategory="315_CIS_inf";
		identityTypes[]=
		{
			"lsd_voice_b1Droid"
		};
		uniformClass="315_CIS_B1_Droid_Sniper_U";
		backpack="315_CIS_B1_backpack";
		model="\MRC\JLTS\characters\DroidArmor\DroidUniformB1.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_co.paa"
		};
		linkedItems[]=
		{
			"ItemMap",
			"315_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"315_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"JLTS_E5S",
			"JLTS_RG4D",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"JLTS_E5S",
			"JLTS_RG4D",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"SmokeShell",
			"SmokeShellGreen"
		};
		respawnMagazines[]=
		{
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"SmokeShell",
			"SmokeShellGreen"
		};
	};
    class 315_CIS_B1_Droid_Shotgun: 315_CIS_Base_B1_Droid
	{
		author="315th AUX Team";
		scope=2;
		faction="315_CIS";
		editorSubcategory="315_CIS_inf";
		displayName="B1 Shotgun Droid";
		backpack="315_CIS_B1_backpack";
		uniformClass="315_CIS_B1_Droid_Shotgun_U";
		editorPreview="\MRC\JLTS\characters\DroidArmor\data\ui\editorPreviews\JLTS_Droid_B1_SBB3.jpg";
		identityTypes[]=
		{
			"lsd_voice_b1Droid"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_co.paa"
		};
		LinkedItems[]=
		{
			"ItemMap",
			"315_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"315_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"JLTS_SBB3",
			"JLTS_RG4D",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"JLTS_SBB3",
			"JLTS_RG4D",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"SmokeShell",
			"SmokeShellGreen"
		};
		respawnMagazines[]=
		{
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"SmokeShell",
			"SmokeShellGreen"
		};
	};
	
    class 315_CIS_B1_Droid_Heavy: 315_CIS_Base_B1_Droid
	{
		author="315th AUX Team";
		scope=2;
		faction="315_CIS";
		editorSubcategory="315_CIS_inf";
		editorPreview="\MRC\JLTS\characters\DroidArmor\data\ui\editorPreviews\JLTS_Droid_B1_E5.jpg";
		displayName="B1 Heavy Droid";
		uniformClass="315_CIS_B1_Droid_Heavy_U";
		backpack="315_CIS_B1_backpack";
		identityTypes[]=
		{
			"lsd_voice_b1Droid"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_co.paa"
		};
		LinkedItems[]=
		{
			"ItemMap",
			"315_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"315_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"JLTS_E5C",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"JLTS_E5C",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag"
		};
		respawnMagazines[]=
		{
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag"
		};
	};
	
	class 315_CIS_B1_Droid_Grenadier: 315_CIS_Base_B1_Droid
	{
		author="315th AUX Team";
		scope=2;
		faction="315_CIS";
		editorSubcategory="315_CIS_inf";
		editorPreview="\MRC\JLTS\characters\DroidArmor\data\ui\editorPreviews\JLTS_Droid_B1_E5.jpg";
		displayName="B1 Grenadier Droid";
		uniformClass="315_CIS_B1_Droid_Grenadier_U";
		backpack="315_CIS_B1_backpack";
		identityTypes[]=
		{
			"lsd_voice_b1Droid"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_co.paa"
		};
		LinkedItems[]=
		{
			"ItemMap",
			"315_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"315_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"JLTS_EPL2",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"JLTS_EPL2",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"3AS_6Rnd_RocketGrenades_HE",
			"3AS_6Rnd_RocketGrenades_HE",
			"3AS_6Rnd_RocketGrenades_HE",
			"3AS_6Rnd_RocketGrenades_HE",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"3AS_6Rnd_RocketGrenades_HE",
			"3AS_6Rnd_RocketGrenades_HE",
			"3AS_6Rnd_RocketGrenades_HE",
			"3AS_6Rnd_RocketGrenades_HE",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"HandGrenade",
			"HandGrenade"
		};
	};
    class 315_CIS_B1_Droid_Commander: 315_CIS_Base_B1_Droid
	{
		author="315th AUX Team";
		scope=2;
		faction="315_CIS";
		editorSubcategory="315_CIS_inf";
		displayName="B1 Commander Droid";
		editorPreview="\MRC\JLTS\characters\DroidArmor\data\ui\editorPreviews\JLTS_Droid_B1_Commander.jpg";
		uniformClass="315_CIS_B1_Droid_Commander_U";
		backpack="315_CIS_B1_antenna_backpack";
		identityTypes[]=
		{
			"lsd_voice_b1Droid"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_commander_co.paa"
		};
		linkedItems[]=
		{
			"ItemMap",
			"315_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		Weapons[]=
		{
			"JLTS_E5",
			"JLTS_RG4D",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"JLTS_E5",
			"JLTS_RG4D",
			"Throw",
			"Put"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"315_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		Magazines[]=
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
	};
    class 315_CIS_B1_Droid_Crew: JLTS_Droid_B1_Crew
	{
		author="315th AUX Team";
		scope=2;
		faction="315_CIS";
		editorSubcategory="315_CIS_inf";
		displayName="B1 Crew Droid";
		editorPreview="\MRC\JLTS\characters\DroidArmor\data\ui\editorPreviews\JLTS_Droid_B1_Crew.jpg";
		identityTypes[]=
		{
			"lsd_voice_b1Droid"
		};
		uniformClass="315_CIS_B1_Droid_Crew_U";
		backpack="315_CIS_B1_backpack";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_crew_co.paa"
		};
		linkedItems[]=
		{
			"ItemMap",
			"315_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"315_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"JLTS_E5",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"JLTS_E5",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		items[]={};
		respawnItems[]={};
	};
    class 315_CIS_B1_Droid_Security: 315_CIS_Base_B1_Droid
	{
		author="315th AUX Team";
		scope=2;
		faction="315_CIS";
		editorSubcategory="315_CIS_inf";
		displayName="B1 Security Droid";
		editorPreview="\MRC\JLTS\characters\DroidArmor\data\ui\editorPreviews\JLTS_Droid_B1_Security.jpg";
		backpack="315_CIS_B1_backpack";
		uniformClass="315_CIS_B1_Droid_Security_U";
		identityTypes[]=
		{
			"lsd_voice_b1Droid"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_security_co.paa"
		};
		LinkedItems[]=
		{
			"ItemMap",
			"315_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		Weapons[]=
		{
			"JLTS_E5",
			"JLTS_RG4D",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"JLTS_E5",
			"JLTS_RG4D",
			"Throw",
			"Put"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"315_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		Magazines[]=
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
	};
	class 3AS_CIS_TS_Base;
	class 315_CIS_TSeries: 3AS_CIS_TS_Base
	{
		scope=2;
		displayName="T-Series Droid";
		faction="315_CIS";
		editorSubcategory="315_CIS_HVT";
		uniformClass="3AS_U_CIS_TS";
		weapons[]=
		{
			"JLTS_RG4D",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"JLTS_RG4D",
			"Throw",
			"Put"
		};
		Items[]=
		{
			""
		};
		RespawnItems[]=
		{
			""
		};
		magazines[]=
		{
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag"
		};
		respawnMagazines[]=
		{
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio"
		};
	};
	class 3AS_CIS_B2_Base;
	class 3AS_CIS_B2_F : 3AS_CIS_B2_Base
	{
		class HitPoints;
	};
	class 315_CIS_B2_Droid: 3AS_CIS_B2_F
	{
		author="315th AUX Team";
		scope=2;
		faction="315_CIS";
		displayName="B2 Standard Droid";
		editorSubcategory="315_CIS_B2";
		uniformClass="3AS_U_CIS_B2";
		model="\3AS\3AS_Characters\Droids\B2\3AS_AB2.p3d";
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink_droid"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink_droid"
		};
		weapons[]=
		{
			"3AS_DWBlaster_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"3AS_DWBlaster_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"3AS_500rnd_EM30_mag",
			"3AS_500rnd_EM30_mag",
			"3AS_500rnd_EM30_mag",
			"3AS_500rnd_EM30_mag",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"3AS_500rnd_EM30_mag",
			"3AS_500rnd_EM30_mag",
			"3AS_500rnd_EM30_mag",
			"3AS_500rnd_EM30_mag",
			"Chemlight_green",
			"Chemlight_green"
		};
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=20;
				material=-1;
				name="face_hub";
				passThrough=0.1;
				radius=0.079999998;
				explosionShielding=1.5;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=20;
				material=-1;
				name="neck";
				passThrough=0.1;
				radius=0.1;
				explosionShielding=1.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=20;
				material=-1;
				name="head";
				passThrough=0.1;
				radius=0.2;
				explosionShielding=1.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis
			{
				armor=20;
				material=-1;
				name="pelvis";
				passThrough=0.1;
				radius=0.2;
				explosionShielding=2;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitAbdomen: HitPelvis
			{
				armor=20;
				material=-1;
				name="spine1";
				passThrough=0.1;
				radius=0.15000001;
				explosionShielding=2;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=20;
				material=-1;
				name="spine2";
				passThrough=0.1;
				radius=0.15000001;
				explosionShielding=2;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=20;
				material=-1;
				name="spine3";
				passThrough=0.1;
				radius=0.15000001;
				explosionShielding=2;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=2000;
				material=-1;
				name="body";
				passThrough=0.1;
				radius=0.16;
				explosionShielding=2;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms
			{
				armor=40;
				material=-1;
				name="arms";
				passThrough=0.1;
				radius=0.1;
				explosionShielding=2;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitHands: HitArms
			{
				armor=40;
				material=-1;
				name="hands";
				passThrough=0.1;
				radius=0.1;
				explosionShielding=2;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs
			{
				armor=40;
				material=-1;
				name="legs";
				passThrough=0.1;
				radius=0.12;
				explosionShielding=2;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitLeftArm
			{
				armor=40;
				material=-1;
				name="hand_l";
				passThrough=0.1;
				radius=0.1;
				explosionShielding=2;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				armor=40;
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=40;
				material=-1;
				name="leg_l";
				passThrough=0.1;
				radius=0.1;
				explosionShielding=2;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				armor=40;
				name="leg_r";
			};
		};
		armor=150;
		armorStructural=4;
		explosionShielding=4;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
	};
	class ls_redforDroid_base;
	class lsd_cis_bxDroid_base: ls_redforDroid_base
	{
		class HitPoints;
	};
	class lsd_cis_bxdroid_specops: lsd_cis_bxDroid_base
	{
		class HitPoints;
	};
	class lsd_cis_bxCaptain_specops: lsd_cis_bxdroid_specops
	{
		class HitPoints;
	};
	class lsd_cis_bxAssassin_specops: lsd_cis_bxdroid_specops
	{
		class HitPoints;
	};
	class lsd_cis_bxSecurity_specops: lsd_cis_bxdroid_specops
	{
		class HitPoints;
	};
	class lsd_cis_bxDiplomat_specops: lsd_cis_bxdroid_specops
	{
		class HitPoints;
	};
	class 315_CIS_BX_Base: lsd_cis_bxdroid_specops
	{
		scope=2;
		scopeCurator=2;
		displayName="BX Droid Commando";
		editorSubcategory="315_CIS_Special";
		vehicleClass="315_CIS_Special";
		side=0;
		faction="315_CIS";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_NATO"
		};
		facewear="";
		backpack="";
		uniformClass="lsd_cis_bxDroid_uniform";
		LinkedItems[]=
		{
			"ItemMap",
			"315_CIS_BX_Vest",
			"315_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"315_CIS_BX_Vest",
			"315_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"JLTS_E5",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"JLTS_E5",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag"
		};
		respawnMagazines[]=
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag"
		};
		items[]={};
		respawnItems[]={};
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=10;
				material=-1;
				name="face_hub";
				passThrough=0.90000004;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=10;
				material=-1;
				name="neck";
				passThrough=0.90000004;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=10;
				material=-1;
				name="head";
				passThrough=0.90000004;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=75;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="";
			};
			class HitAbdomen: HitPelvis
			{
				armor=75;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.16;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=75;
				material=-1;
				name="spine2";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=75;
				material=-1;
				name="spine3";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=2000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=86;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=75;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=75;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=75;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=2000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=3;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=75;
				material=-1;
				name="hand_l";
				passThrough=1;
				radius=0.079999998;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=75;
				material=-1;
				name="leg_l";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
		};
		armor=5;
		armorStructural=5;
		explosionShielding=0.60000002;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
		impactEffectsBlood="ImpactMetal";
		impactEffectsNoBlood="ImpactPlastic";
		canBleed=0;
	};
	class 315_CIS_BX_Lead: 315_CIS_BX_Base
	{
		scope=2;
		scopeCurator=2;
		displayName="BX Droid Commander";
		editorSubcategory="315_CIS_Special";
		vehicleClass="315_CIS_Special";
		side=0;
		faction="315_CIS";
		uniformClass="lsd_cis_bxCaptainDroid_uniform";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_NATO"
		};
		facewear="";
		LinkedItems[]=
		{
			"ItemMap",
			"315_CIS_BX_Vest",
			"315_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"315_CIS_BX_Vest",
			"315_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"JLTS_E5",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"JLTS_E5",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag"
		};
		respawnMagazines[]=
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag"
		};
		items[]={};
		respawnItems[]={};
	};
	class 315_CIS_BX_Sniper: 315_CIS_BX_Base
	{
		scope=2;
		scopeCurator=2;
		displayName="BX Droid Sniper";
		editorSubcategory="315_CIS_Special";
		vehicleClass="315_CIS_Special";
		side=0;
		faction="315_CIS";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_NATO"
		};
		facewear="";
		uniformClass="lsd_cis_bxDroid_uniform";
		LinkedItems[]=
		{
			"ItemMap",
			"315_CIS_BX_Vest",
			"315_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"315_CIS_BX_Vest",
			"315_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"JLTS_E5S",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"JLTS_E5S",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag"
		};
		respawnMagazines[]=
		{
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag"
		};
		items[]={};
		respawnItems[]={};
	};
	class 315_CIS_BX_Heavy: 315_CIS_BX_Base
	{
		scope=2;
		scopeCurator=2;
		displayName="BX Droid Heavy";
		editorSubcategory="315_CIS_Special";
		vehicleClass="315_CIS_Special";
		side=0;
		faction="315_CIS";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_NATO"
		};
		facewear="";
		uniformClass="lsd_cis_bxDroid_uniform";
		LinkedItems[]=
		{
			"ItemMap",
			"315_CIS_BX_Vest",
			"315_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"315_CIS_BX_Vest",
			"315_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"JLTS_E5C",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"JLTS_E5C",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag"
		};
		respawnMagazines[]=
		{
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag"
		};
	};
	class 315_CIS_BX_AT: 315_CIS_BX_Base
	{
		scope=2;
		scopeCurator=2;
		displayName="BX Droid AT";
		editorSubcategory="315_CIS_Special";
		vehicleClass="315_CIS_Special";
		side=0;
		faction="315_CIS";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_NATO"
		};
		facewear="";
		uniformClass="lsd_cis_bxDroid_uniform";
		linkedItems[]=
		{
			"ItemMap",
			"315_CIS_BX_Vest",
			"315_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"315_CIS_BX_Vest",
			"315_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"JLTS_E5",
			"JLTS_RPS6",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"JLTS_E5",
			"JLTS_RPS6",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_RPS6_mag",
			"SmokeShell",
			"SmokeShellGreen"
		};
		respawnMagazines[]=
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_RPS6_mag",
			"SmokeShell",
			"SmokeShellGreen"
		};
	};
};
class CfgGroups
{
	class East
	{
		class 315_CIS_faction
		{
			name="315th AC CIS";
            class B1Infantry
			{
				name="B1 Groups";
				class 315_CIS_Command
				{
					name="B1 Command Team";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="315_CIS";
					class Unit0
					{
						side=0;
						vehicle="315_CIS_B1_Droid_Commander";
						rank="MAJOR";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="315_CIS_B1_Droid_Security";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
					class Unit2
					{
						side=0;
						vehicle="315_CIS_B1_Droid_Security";
						rank="PRIVATE";
						position[]={-3,0,0};
					};
				};
                class 315_CIS_Base_Duo
				{
					name="B1 Duo";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="315_CIS";
					class Unit0
					{
						side=0;
						vehicle="315_CIS_Base_B1_Droid";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="315_CIS_Base_B1_Droid";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
				};
                class 315_CIS_Fireteam
				{
					name="B1 Fire Team";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="315_CIS";
					class Unit0
					{
						side=0;
						vehicle="315_CIS_Base_B1_Droid";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="315_CIS_Base_B1_Droid";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
					class Unit2
					{
						side=0;
						vehicle="315_CIS_Base_B1_Droid";
						rank="PRIVATE";
						position[]={-3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="315_CIS_B1_Droid_Heavy";
						rank="PRIVATE";
						position[]={-6,0,0};
					};
				};
                class 315_CIS_Firesquad
				{
					name="B1 Squad";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="315_CIS";
					class Unit0
					{
						side=0;
						vehicle="315_CIS_Base_B1_Droid";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="315_CIS_Base_B1_Droid";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
					class Unit2
					{
						side=0;
						vehicle="315_CIS_Base_B1_Droid";
						rank="PRIVATE";
						position[]={-3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="315_CIS_B1_Droid_Heavy";
						rank="PRIVATE";
						position[]={-6,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="315_CIS_Base_B1_Droid";
						rank="CORPORAL";
						position[]={0,-6,0};
					};
					class Unit5
					{
						side=0;
						vehicle="315_CIS_Base_B1_Droid";
						rank="PRIVATE";
						position[]={0,-9,0};
					};
					class Unit6
					{
						side=0;
						vehicle="315_CIS_Base_B1_Droid";
						rank="PRIVATE";
						position[]={-9,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="315_CIS_B1_Droid_Heavy";
						rank="PRIVATE";
						position[]={-12,0,0};
					};
				};
                class 315_CIS_AT
				{
					name="B1 AT Team";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="315_CIS";
					class Unit0
					{
						side=0;
						vehicle="315_CIS_Base_B1_Droid";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="315_CIS_B1_Droid_AT";
						rank="PRIVATE";
						position[]={-3,0,0};
					};
                    class Unit2
					{
						side=0;
						vehicle="315_CIS_Base_B1_Droid";
						rank="PRIVATE";
						position[]={-6,0,0};
					};
                    class Unit3
					{
						side=0;
						vehicle="315_CIS_Base_B1_Droid";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
				};
                class 315_CIS_AA
				{
					name="B1 AA Team";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="315_CIS";
					class Unit0
					{
						side=0;
						vehicle="315_CIS_Base_B1_Droid";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="315_CIS_B1_Droid_AA";
						rank="PRIVATE";
						position[]={-3,0,0};
					};
                    class Unit2
					{
						side=0;
						vehicle="315_CIS_Base_B1_Droid";
						rank="PRIVATE";
						position[]={-6,0,0};
					};
                    class Unit3
					{
						side=0;
						vehicle="315_CIS_Base_B1_Droid";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
				};
				class 315_CIS_Assault
				{
					name="Assault Squad";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="315_CIS";
					class Unit0
					{
						side=0;
						vehicle="315_CIS_B1_Droid_Commander";
						rank="MAJOR";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="315_CIS_Base_B1_Droid";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
					class Unit2
					{
						side=0;
						vehicle="315_CIS_B2_Droid";
						rank="PRIVATE";
						position[]={-3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="315_CIS_B1_Droid_Heavy";
						rank="PRIVATE";
						position[]={-6,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="315_CIS_Base_B1_Droid";
						rank="CORPORAL";
						position[]={0,-6,0};
					};
					class Unit5
					{
						side=0;
						vehicle="315_CIS_B1_Droid_Sniper";
						rank="PRIVATE";
						position[]={0,-9,0};
					};
					class Unit6
					{
						side=0;
						vehicle="315_CIS_Base_B1_Droid";
						rank="PRIVATE";
						position[]={-9,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="315_CIS_B1_Droid_Heavy";
						rank="PRIVATE";
						position[]={-12,0,0};
					};
				};
			};
			class BXInfantry
			{
				name="BX Groups";
				class 315_CIS_BX_Assault
				{
					name="BX Assault Team";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="315_CIS";
					class Unit0
					{
						side=0;
						vehicle="315_CIS_BX_Lead";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="315_CIS_BX_Base";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
					class Unit2
					{
						side=0;
						vehicle="315_CIS_BX_Base";
						rank="PRIVATE";
						position[]={-3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="315_CIS_BX_Base";
						rank="PRIVATE";
						position[]={-6,0,0};
					};
				};
				class 315_CIS_BX_Team
				{
					name="BX Team";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="315_CIS";
					class Unit0
					{
						side=0;
						vehicle="315_CIS_BX_Lead";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="315_CIS_BX_Base";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
					class Unit2
					{
						side=0;
						vehicle="315_CIS_BX_Heavy";
						rank="PRIVATE";
						position[]={-3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="315_CIS_BX_AT";
						rank="PRIVATE";
						position[]={-6,0,0};
					};
				};
				class 315_CIS_BX_Sniper_Duo
				{
					name="BXSniper Duo";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="315_CIS";
					class Unit0
					{
						side=0;
						vehicle="315_CIS_BX_Lead";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="315_CIS_BX_Sniper";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
					class Unit2
					{
						side=0;
						vehicle="315_CIS_BX_Sniper";
						rank="PRIVATE";
						position[]={-3,0,0};
					};
				};
				class 315_CIS_BX_Squad
				{
					name="BX Squad";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="315_CIS";
					class Unit0
					{
						side=0;
						vehicle="315_CIS_BX_Lead";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="315_CIS_BX_Base";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
					class Unit2
					{
						side=0;
						vehicle="315_CIS_BX_Base";
						rank="PRIVATE";
						position[]={-3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="315_CIS_BX_Heavy";
						rank="PRIVATE";
						position[]={-6,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="315_CIS_BX_AT";
						rank="CORPORAL";
						position[]={0,-6,0};
					};
					class Unit5
					{
						side=0;
						vehicle="315_CIS_BX_Base";
						rank="PRIVATE";
						position[]={0,-9,0};
					};
					class Unit6
					{
						side=0;
						vehicle="315_CIS_BX_Sniper";
						rank="PRIVATE";
						position[]={-9,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="315_CIS_BX_Heavy";
						rank="PRIVATE";
						position[]={-12,0,0};
					};
				};
			};
		};
	};
};