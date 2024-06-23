class CfgPatches
{
	class DC15X_315
	{
		author="MrClock";
		name="315th DC-15X";
		requiredAddons[]=
		{
			"A3_data_F",
			"A3_anims_F",
			"A3_weapons_F",
			"A3_characters_F",
			"JLTS_weapons_Reloads"
		};
		weapons[]=
		{
			"315th_JLTS_DC15X",
			"315th_JLTS_DC15X_fried",
			"315th_JLTS_DC15X_scope",
			"315th_JLTS_DC15X_scoped"
		};
		units[]=
		{
			"JLTS_GH_DC15X"
		};
		magazines[]={};
	};
};
class CfgMagazines
{
	class 30Rnd_65x39_caseless_mag;
	class CA_Magazine;
	class 315th_JLTS_DC15X_mag: 30Rnd_65x39_caseless_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		author="MrClock";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\MRC\JLTS\weapons\DC15x\data\ui\DC15X_mag_ui_ca.paa";
		model="\MRC\JLTS\weapons\DC15x\DC15x_mag.p3d";
		count=15;
		displayName="$STR_JLTS_names_DC15x_mag";
		displayNameShort="$STR_JLTS_snames_EnergyCellHigh";
		descriptionShort="$STR_JLTS_descs_DC15x_mag";
		ammo="JLTS_bullet_sniper_blue";
		tracersEvery=1;
	};
};
class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
	class optic_lrps;
	class InventoryOpticsItem_Base_F;
	class 315th_JLTS_DC15X_scope: optic_lrps
	{
		displayName="$STR_JLTS_names_DC15X_scope";
		picture="\MRC\JLTS\weapons\DC15X\data\ui\DC15X_scope_ui_ca.paa";
		descriptionShort="$STR_JLTS_descs_DC15X_scope";
		model="\MRC\JLTS\weapons\DC15X\DC15X_scope.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\DC15X\data\DC15X_scope_co.paa"
		};
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=16;
			opticType=2;
			weaponInfoType="RscWeaponRangeZeroingFOV";
			optics=1;
			modelOptics="\A3\Weapons_F\acc\reticle_sniper_F";
			class OpticsModes
			{
				class Snip
				{
					opticsID=1;
					opticsDisplayName="WFOV";
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.0099999998;
					opticsZoomMax=0.041999999;
					opticsZoomInit=0.041999999;
					discreteDistance[]={300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
					discreteDistanceInitIndex=2;
					distanceZoomMin=300;
					distanceZoomMax=2400;
					discretefov[]={0.041999999,0.0099999998};
					discreteInitIndex=0;
					memoryPointCamera="opticView";
					modelOptics[]=
					{
						"\A3\Weapons_F\acc\reticle_lrps_F",
						"\A3\Weapons_F\acc\reticle_lrps_z_F"
					};
					visionMode[]=
					{
						"Normal",
						"NVG",
						"TI"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
			};
		};
	};
	class Rifle_Base_F;
	class arifle_MX_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;
	class 315th_JLTS_DC15X: arifle_MX_Base_F
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		JLTS_friedItem="315th_JLTS_DC15X_fried";
		JLTS_repairTime=33;
		author="MrClock";
		scope=2;
		displayName="[315th] DC-15X";
		descriptionShort="$STR_JLTS_descs_BlasterRifle";
		picture="\MRC\JLTS\weapons\DC15X\data\ui\DC15X_ui_ca.paa";
		model="\MRC\JLTS\weapons\DC15X\DC15X.p3d";
		baseWeapon="315th_JLTS_DC15X";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\DC15X\data\DC15X_co.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\DC15X\anims\DC15X_handanim.rtm"
		};
		magazines[]=
		{
			"315th_JLTS_DC15X_mag"
		};
		magazineWell[]={};
		modes[]=
		{
			"Single"
		};
		fireLightDiffuse[]={0,0,1};
		drySound[]=
		{
			"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss",
			5,
			1,
			10
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
					"MRC\JLTS\weapons\DC15X\sounds\dc15x_fire",
					2.5,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.5;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			dispersion=0.00073000003;
			minRange=2;
			minRangeProbab=0.5;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.30000001;
		};
		class FullAuto: Mode_FullAuto
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
					"MRC\JLTS\weapons\DC15X\sounds\dc15x_fire",
					2.5,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.096000001;
			recoil="recoil_auto_mx";
			recoilProne="recoil_auto_prone_mx";
			dispersion=0.00073000003;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class fullauto_medium: FullAuto
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
					"MRC\JLTS\weapons\DC15X\sounds\dc15x_fire",
					2.5,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			dispersion=0.00073000003;
			showToPlayer=0;
			burst=3;
			aiBurstTerminable=1;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
		};
		class single_medium_optics1: Single
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
					"MRC\JLTS\weapons\DC15X\sounds\dc15x_fire",
					2.5,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			dispersion=0.00073000003;
			requiredOpticType=1;
			minRange=2;
			minRangeProbab=0.2;
			midRange=450;
			midRangeProbab=0.69999999;
			maxRange=650;
			maxRangeProbab=0.2;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
		};
		class single_far_optics2: single_medium_optics1
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
					"MRC\JLTS\weapons\DC15X\sounds\dc15x_fire",
					2.5,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			dispersion=0.00073000003;
			requiredOpticType=2;
			minRange=100;
			minRangeProbab=0.2;
			midRange=550;
			midRangeProbab=0.69999999;
			maxRange=800;
			maxRangeProbab=0.050000001;
			aiRateOfFire=8;
			aiRateOfFireDistance=800;
		};
		class Pointer
		{
			irLaserPos="laser pos";
			irLaserEnd="laser dir";
			irDistance=5;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=92;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"315th_JLTS_DC15X_scope"
				};
				iconPicture="";
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
		class GunParticles
		{
			class FirstEffect
			{
				directionName="Konec hlavne";
				effectName="RifleAssaultCloud";
				positionName="Usti hlavne";
			};
		};
	};
	class 315th_JLTS_DC15X_scoped: 315th_JLTS_DC15X
	{
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="315th_JLTS_DC15X_scope";
			};
		};
	};
	class 315th_JLTS_DC15X_fried: 315th_JLTS_DC15X
	{
		baseWeapon="315th_JLTS_DC15X_fried";
		displayName="$STR_JLTS_names_DC15XFried";
		descriptionShort="$STR_JLTS_descs_BlasterFried";
		scope=1;
		picture="\MRC\JLTS\weapons\DC15X\data\ui\DC15X_fried_ui_ca.paa";
		muzzles[]=
		{
			"this"
		};
		magazines[]={};
		JLTS_isFried=1;
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",
			0.56234097,
			1,
			10
		};
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class JLTS_GH_DC15X: Weapon_Base_F
	{
		author="MrClock";
		displayName="$STR_JLTS_names_DC15X";
		scope=2;
		class TransportWeapons
		{
			class 315th_JLTS_DC15X_scoped
			{
				count=1;
				weapon="315th_JLTS_DC15X_scoped";
			};
		};
		class TransportMagazines
		{
			class 315th_JLTS_DC15X_mag
			{
				count=1;
				magazine="315th_JLTS_DC15X_mag";
			};
		};
	};
};
