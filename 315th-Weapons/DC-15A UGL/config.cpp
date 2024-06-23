class CfgPatches
{
	class 315th_DC15AUGL
	{
		name = "[315th] DC-15A UGL";
		author = "315th Aux Team";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"315th_JLTS_DC15A_ugl_plastic"};
		ammo[]={"315th_HEDP"};
		magazines[]={"315th_HEDP_Grenade_Shell"};
	};
};

class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
	class UGL_F;
	class JLTS_DC15A_ugl_plastic;
	class 315th_JLTS_DC15A_ugl_plastic: JLTS_DC15A_ugl_plastic
	{
		displayName="[315th] DC-15A UGL (plastic stock)";
		scope=2;
		modes[]=
		{
			"Single",
            "FullAuto"
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
					"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",
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
			reloadTime=0.15000001;
			dispersion=0.0030149999;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
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
					"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",
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
			reloadTime=0.15000001;
			dispersion=0.0014545;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
	    class OpticsModes
	    {
	        class sight
	        {
	            opticsID = 1;
	            useModelOptics = 1;
	            opticsPPEffects[] = {""};
	            opticsDisablePeripherialVision = 0;
	            opticsZoomMin = 0.25;
	            opticsZoomMax = 0.5;
	            opticsZoomInit = 0.75;
	            discreteInitIndex = 0;
	            distanceZoomMin = 200;
	            distanceZoomMax = 200;
	            memoryPointCamera = "eye";
	            visionMode[] = {};
	            opticsFlare = "false";
	            cameraDir = "";
	        };
	        class scope: sight
	        {
	            opticsID = 2;
	            opticsZoomMin = 0.125;
	            opticsZoomMax = 0.125;
	            opticsZoomInit = 0.125;
	            distanceZoomMin = 300;
	            distanceZoomMax = 300;
	        };
	    };
	    class EGLM: UGL_F
	    {
	    	displayName="315th UGL";
	    	magazines[]=
	    	{
	    		"315th_HE_Grenade_Shell",
				"315th_HEDP_Grenade_Shell",
	    		"UGL_FlareWhite_F",
	    		"UGL_FlareGreen_F",
	    		"UGL_FlareRed_F",
	    		"UGL_FlareYellow_F",
	    		"UGL_FlareCIR_F",
	    		"1Rnd_Smoke_Grenade_shell",
	    		"1Rnd_SmokeRed_Grenade_shell",
	    		"1Rnd_SmokeGreen_Grenade_shell",
	    		"1Rnd_SmokeYellow_Grenade_shell",
	    		"1Rnd_SmokePurple_Grenade_shell",
	    		"1Rnd_SmokeBlue_Grenade_shell",
	    		"1Rnd_SmokeOrange_Grenade_shell",
	    		"3Rnd_HE_Grenade_shell",
	    		"3Rnd_UGL_FlareWhite_F",
	    		"3Rnd_UGL_FlareGreen_F",
	    		"3Rnd_UGL_FlareRed_F",
	    		"3Rnd_UGL_FlareYellow_F",
	    		"3Rnd_UGL_FlareCIR_F",
				"OPTRE_3Rnd_Smoke_Grenade_shell",
				"OPTRE_3Rnd_SmokeRed_Grenade_shell",
				"OPTRE_3Rnd_SmokeGreen_Grenade_shell",
				"OPTRE_3Rnd_SmokeYellow_Grenade_shell",
				"OPTRE_3Rnd_SmokePurple_Grenade_shell",
				"OPTRE_3Rnd_SmokeBlue_Grenade_shell",
				"OPTRE_3Rnd_SmokeOrange_Grenade_shell",
	    		"3Rnd_Smoke_Grenade_shell",
	    		"3Rnd_SmokeRed_Grenade_shell",
	    		"3Rnd_SmokeGreen_Grenade_shell",
	    		"3Rnd_SmokeYellow_Grenade_shell",
	    		"3Rnd_SmokePurple_Grenade_shell",
	    		"3Rnd_SmokeBlue_Grenade_shell",
	    		"3Rnd_SmokeOrange_Grenade_shell",
	    	};
	    	descriptionShort="315th UGL";
	    	useModelOptics=0;
	    	useExternalOptic=0;
	    	cameraDir="OP_look";
	    	discreteDistance[]={100,200,300,400};
	    	discreteDistanceCameraPoint[]=
	    	{
	    		"OP_eye",
	    		"OP_eye2",
	    		"OP_eye3",
	    		"OP_eye4"
	    	};
	    	discreteDistanceInitIndex=0;
	    	};
	};
};

class CfgAmmo
{
	class G_40mm_HEDP;
	class G_40mm_HE;
	
	class 315th_HEDP: G_40mm_HEDP
	{
		explosive = 0.05; //Undefine this for default value of ??
		hit = 500; //Undefine this for default value of ??
		caliber=60;
		indirecthit = 5;
		indrectrange = 2;
		model="3AS\3AS_Weapons\Data\tracer_shell_green.p3d";
		tracerScale=1;
	};
	
	class 315th_HE: G_40mm_HE
	{
		model="3AS\3AS_Weapons\Data\tracer_shell_red.p3d";
		tracerScale=1;
	};
};

class CfgMagazines
{
	class 1Rnd_HE_Grenade_Shell;
	
	class 315th_HEDP_Grenade_Shell: 1Rnd_HE_Grenade_Shell
	{
		dlc="315th Aux";
		displayName="315th AP";
		//model="OPTRE_weapons\gl\mag_hedp.p3d"; Could use a JLTS model or OPTRE model if we want. Right now vanilla
		ammo="315th_HEDP";
		displayNameShort="AP";
		mass=12;
	};
	
	class 315th_HE_Grenade_Shell: 1Rnd_HE_Grenade_Shell
	{
		dlc="315th Aux";
		displayName="315th HE";
		//model="OPTRE_weapons\gl\mag_hedp.p3d"; Could use a JLTS model or OPTRE model if we want. Right now vanilla
		ammo="315th_HE";
		displayNameShort="HE";
		count = 3;
		mass=12;
	};
};