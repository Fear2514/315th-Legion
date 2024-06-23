class CfgPatches
{
	class Westar_315
	{
		name="[315th] Westar-M5";
		author="315th Aux Mod Team";
		requiredVersion=0.0099999998;
		requiredAddons[]={};
		units[]={};
		weapons[]=
		{
			"Aux315_Westar",
			"3AS_Optic_Scope_WestarM5"
		};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class CfgWeapons
{
	class CowsSlot;
	class MuzzleSlot;
	class PointerSlot;
	class UnderBarrelSlot;
	class WeaponSlotsInfo;
	class JLTS_stun_muzzle;
	class 3AS_WestarM5_Base_F;
	class Aux315_Westar_Base: 3AS_WestarM5_Base_F
	{
		magazines[]=
		{
			"3AS_60Rnd_EC50_Mag"
		};
		class 315Stun: JLTS_stun_muzzle
		{
		};
		muzzles[]=
		{
			"this",
			"315Stun"
		};
		modes[]=
		{
			"Single",
			"Burst",
			"FullAuto"
		};
		class LinkedItems
		{
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=66;
			class CowSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]=
				{
					"3as_optic_scope_westarm5"
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"acc_flashlight",
					"acc_pointer_IR"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]={};
			};
		};
		class Burst: Mode_Burst
		{
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_Westar_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_Plasma_Shot_SoundSet"
				};
			};
		};
		class Single: Mode_SemiAuto
		{
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_Westar_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_Plasma_Shot_SoundSet"
				};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			recoil="recoil_auto_mx";
			recoilProne="recoil_auto_prone_mx";
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_Westar_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_Plasma_Shot_SoundSet"
				};
			};
		};
	};
	class Aux315_Westar: Aux315_Westar_Base
	{
		displayName="[315th] Westar-M5";
		scope=2;
		model="3AS\3AS_Weapons\WestarM5\3AS_Westar_M5_F.p3d";
		picture="\3AS\3AS_Weapons\DC15A\Data\Textures\DC15A_Arsenal.paa";
		weaponInfoType="RscWeaponZeroing";
		modelOptics="3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d";
		class OpticsModes
		{
			class Ironsights
			{
				opticsID=1;
				useModelOptics=0;
				opticsFlare="true";
				opticsPPEffects[]=
				{
					"OpticsCHAbera5",
					"OpticsBlur5"
				};
				opticsDisablePeripherialVision=0.67000002;
				opticsZoomMin=0.375;
				opticsZoomMax=1.1;
				opticsZoomInit=0.75;
				memoryPointCamera="eye";
				visionMode[]={};
				distanceZoomMin=100;
				distanceZoomMax=100;
			};
			class Scope: Ironsights
			{
				opticsID=2;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera5",
					"OpticsBlur5"
				};
				opticsDisablePeripherialVision=0.67000002;
				opticsZoomMin=0.122173;
				opticsZoomMax=0.122173;
				opticsZoomInit=0.122173;
				memoryPointCamera="opticView";
				visionMode[]=
				{
					"Normal",
					"NVG"
				};
				opticsFlare="true";
				distanceZoomMin=100;
				distanceZoomMax=100;
				cameraDir="";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=60;
		};
	};
};
class cfgMods
{
	author="315th Aux Mod Team";
	timepacked="1679437742";
};
