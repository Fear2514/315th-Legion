class CfgPatches
{
	class 315th_DC15A
	{
		name = "[315th] DC-15A Plastic Stock";
		author = "315th Aux Team";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {""};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
	class JLTS_DC15A_plastic;
	class 315th_JLTS_DC15A_plastic: JLTS_DC15A_plastic
	{
		displayName="[315th] DC-15A (plastic stock)";
		scope=2;
        scopeArsenal=2;
		cursor="DC_Series_Reticle";
        muzzles[]=
		{
			"this",
			"Stun"
		};
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
	};
    class JLTS_DC15A;
    class JLTS_DC15A_315th: JLTS_DC15A
    {
        displayName="[315th] DC-15A (wood stock)";
		scope=2;
        scopeArsenal=2;
		cursor="DC_Series_Reticle";
        muzzles[]=
		{
			"this",
			"Stun"
		};
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
    };
};