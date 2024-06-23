class cfgPatches
{
	class 315_CIS_Vehicles
	{
		name="315_CIS_Vehicles";
		author="315th AUX Team";
		addonRootClass="315_CIS";
		requiredAddons[]=
		{

		};
		requiredVersion=0.1;
		units[]=
		{
            "315_CIS_AAT_Tan",
            "315_CIS_AAT_King",
            "315_CIS_GAT",
            "315_CIS_GAT_Light",
            "315_CIS_Snail",
            "315_CIS_Squad_Transport",
            "315_CIS_Sniper_Deka",
            "315_CIS_Spider_Droid",
            "315_CIS_HMP_Transport",
            "315_CIS_HMP_Gunship",
            "315_CIS_Particle_Cannon",

		};
		weapons[]=
		{

		};
		ammo[]=
		{

		};
	};
};

class CfgEditorSubcategories
{
    class 315_CIS_armoured
	{
		displayName="[CIS] Armoured";
	};
    class 315_CIS_Turrets
	{
		displayName="[CIS] Turrets";
	};
    class 315_CIS_helicopter
	{
		displayName="[CIS] Helicopter";
	};
}; 

class DefaultEventhandlers;
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class CfgVehicles
{
	class 3AS_GAT;
	class 3AS_GAT_Olive;
	class 3AS_GAT_Light;
	class 3AS_GAT_Light_Olive;
	class 3AS_AAT;
	class 3AS_AAT_tan;
	class 3AS_AAT_Green;
	class 3AS_AAT_Red;
	class Helicopter
	{
	};
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
		class HitPoints;
	};
	class Heli_Attack_01_base_F: Helicopter_Base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class components;
		class RotorLibHelicopterProperties;
	};
	class B_Heli_Attack_01_base_F: Heli_Attack_01_base_F
	{
	};
	class 3AS_HMP_Base: Heli_Attack_01_base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class components;
		class RotorLibHelicopterProperties;
	};
	class 3AS_HMP_Transport: 3AS_HMP_Base
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class components;
		class RotorLibHelicopterProperties;
	};
	class 3AS_HMP_Gunship: 3AS_HMP_Base
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class components;
		class RotorLibHelicopterProperties;
	};
    class 442_hmp;
	class 442_hmp_transport;
	class 315_CIS_HMP_Gunship: 3AS_HMP_Gunship
	{
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		displayName="HMP Gunship";
		altFullForce=6000;
		altNoForce=9000;
		armor=600;
		crew="315_CIS_B1_Droid_Crew";
		faction="315_CIS";
		editorSubcategory="315_CIS_helicopter";
		vehicleClass="315_CIS_helicopter";
		airBrakeFrictionCoef=80.400002;
		class EventHandlers
		{
		};
		class UserActions
		{
			class ThrusterEngage
			{
				condition="(!(this getvariable [""impulsorStatus"",false]) AND (player == driver this) AND (alive this) AND (speed this >50) )";
				displayName="<t color='#4C9900'>[Impulsor On]</t>";
				displayNameDefault="<t color='#4C9900'>[Impulsor On]</t>";
				onlyForPlayer=0;
				position="pilotview";
				priority=1e+008;
				radius=6;
				statement="this execVM ""\SW_Droides_2\DroidGunship\initTE.sqf""";
				textToolTip="<t color='#4C9900'>[Impulsor On]</t>";
				userActionID=64;
			};
			class ThrusterDisngage: ThrusterEngage
			{
				condition="((this getvariable [""impulsorStatus"",false]) AND (player == driver this) AND (alive this))";
				displayName="<t color='#FF9933'>[RepulsorBrake On]</t>";
				displayNameDefault="<t color='#FF9933'>[RepulsorBrake On]</t>";
				onlyForPlayer=0;
				position="pilotview";
				priority=1e+008;
				radius=6;
				statement="this execVM ""\SW_Droides_2\DroidGunship\initTD.sqf""";
				textToolTip="<t color='#FF9933'>[RepulsorBrake On]</t>";
				userActionID=65;
			};
		};
	};
    class 315_CIS_HMP_Transport: 3AS_HMP_Transport
	{
		displayName="HMP Transport";
		forceInGarage=1;
		maxSpeed=220;
		armor=600;
		armorStructural=2;
		armorLights=1;
		liftForceCoef=1;
		bodyFrictionCoef=0.67769998;
		scope=2;
		scopeCurator=2;
		crew="315_CIS_B1_Droid_Crew";
		faction="315_CIS";
		transportSoldier=22;
		editorSubcategory="315_CIS_helicopter";
		vehicleClass="315_CIS_helicopter";
		airBrakeFrictionCoef=80.400002;
		class EventHandlers
		{
		};
		class UserActions
		{
			class ThrusterEngage
			{
				condition="(!(this getvariable [""impulsorStatus"",false]) AND (player == driver this) AND (alive this) AND (speed this >50) )";
				displayName="<t color='#4C9900'>[Impulsor On]</t>";
				displayNameDefault="<t color='#4C9900'>[Impulsor On]</t>";
				onlyForPlayer=0;
				position="pilotview";
				priority=1e+008;
				radius=6;
				statement="this execVM ""\SW_Droides_2\DroidGunship\initTE.sqf""";
				textToolTip="<t color='#4C9900'>[Impulsor On]</t>";
				userActionID=64;
			};
			class ThrusterDisngage: ThrusterEngage
			{
				condition="((this getvariable [""impulsorStatus"",false]) AND (player == driver this) AND (alive this))";
				displayName="<t color='#FF9933'>[RepulsorBrake On]</t>";
				displayNameDefault="<t color='#FF9933'>[RepulsorBrake On]</t>";
				onlyForPlayer=0;
				position="pilotview";
				priority=1e+008;
				radius=6;
				statement="this execVM ""\SW_Droides_2\DroidGunship\initTD.sqf""";
				textToolTip="<t color='#FF9933'>[RepulsorBrake On]</t>";
				userActionID=65;
			};
		};
		cargoAction[]=
		{
			"MTT_Cargo",
			"MTT_Cargo",
			"MTT_Cargo",
			"MTT_Cargo",
			"MTT_Cargo",
			"MTT_Cargo",
			"MTT_Cargo",
			"MTT_Cargo",
			"MTT_Cargo",
			"MTT_Cargo"
		};
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		cargoProxyIndexes[]={1,2,3,4,5,6,7,8,9,10,11,12};
		class AnimationSources: AnimationSources
		{
			class RocketPods
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class DropRack
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
		};
		class textureSources
		{
		};
	};
    class 315_CIS_AAT_Tan: 3AS_AAT_tan
	{
		scope=2;
		scopeCurator=2;
		displayName="Medium AAT Tan ";
		armor=500;
		armorStructural=5;
		editorSubcategory="315_CIS_armoured";
		vehicleClass="315_CIS_armoured";
		side=0;
		faction="315_CIS";
		editorPreview="\3as\3as_AAT\images\3AS_AAT_tan.jpg";
		crew="315_CIS_B1_Droid_Crew";
	};
    class 3AS_N99_base_F;
	class 315_CIS_Snail: 3AS_N99_base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="N99 Snail Tank";
		editorSubcategory="315_CIS_armoured";
		vehicleClass="315_CIS_armoured";
		side=0;
		faction="315_CIS";
		crew="315_CIS_B1_Droid_Crew";
	};
    class Land;
	class LandVehicle: Land
	{
		class NewTurret;
	};
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
	};
	class ls_ground_aat_base: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
					};
				};
			};
		};
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
	};
	class ls_ground_aat: ls_ground_aat_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
					};
				};
			};
		};
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
	};
	class ls_ground_aat_black: ls_ground_aat
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
					};
				};
			};
		};
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
	};
	class 315_CIS_AAT_King: ls_ground_aat_black
	{
		displayName="Heavy King AAT";
		scope=2;
		scopeCurator=2;
		faction="315_CIS";
		editorSubcategory="315_CIS_armoured";
		driver="315_CIS_B1_Droid_Crew";
		crew="315_CIS_B1_Droid_Crew";
		typicalCargo[]=
		{
			"315_CIS_B1_Droid_Crew"
		};
		hiddenSelectionsTextures[]=
		{
			"ls_vehicles_ground\aat\data\black\body1_black_co.paa",
			"ls_vehicles_ground\aat\data\black\body2_black_co.paa",
			"ls_vehicles_ground\aat\data\black\gun_black_co.paa"
		};
		armor=700;
		armorStructural=5;
		class Hitpoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=500;
				material=-1;
				name="hull_hit";
				visual="zbytek";
				passthrough=0.029999999;
				minimalhit=0.14;
				explosionshielding=2;
				radius=0.25;
			};
			class HitEngine: HitEngine
			{
				armor=500;
				material=-1;
				name="engine_hit";
				passThrough=0.079999998;
				minimalHit=0.23999999;
				explosionShielding=1;
				radius=0.33000001;
			};
			class hitammo_l: HitEngine
			{
				name="ammo_l_hit";
			};
			class hitammo_r: hitammo_l
			{
				name="ammo_r_hit";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						body="side_turret_l";
						gun="side_gun_l";
						proxyIndex=4;
						viewGunnerInExternal=0;
						proxytype="CPCommander";
						gunnername="Commander";
						animationSourceBody="ObsTurret";
						animationSourceGun="ObsGun";
						minElev=-20;
						maxElev=30;
						minTurn=-25;
						maxTurn=25;
						initElev=0;
						initTurn=0;
						minOutElev=-25;
						maxOutElev=45;
						initOutElev=0;
						minOutTurn=-90;
						maxOutTurn=90;
						initOutTurn=0;
						maxHorizontalRotSpeed=1.8;
						maxVerticalRotSpeed=1.8;
						stabilizedInAxes=3;
						soundServo[]=
						{
							"A3\Sounds_F\vehicles\armor\noises\servo_best",
							0.0099999998,
							1,
							50
						};
						gunnerAction="";
						gunnerInAction="mbt2_slot2b_in";
						forceHideGunner=0;
						outGunnerMayFire=1;
						inGunnerMayFire=1;
						gunnerRightHandAnimName="";
						gunnerLeftHandAnimName="";
						soundAttenuationTurret="HeliAttenuationGunner";
						isPersonTurret=1;
						personTurretAction="vehicle_turnout_1";
						memoryPointGun[]=
						{
							"konec_hlavne_1",
							"konec_hlavne_2"
						};
						weapons[]=
						{
							"ls_aat_127"
						};
						magazines[]=
						{
							"ls_500Rnd_127x99_mag_red",
							"ls_500Rnd_127x99_mag_red"
						};
						turretInfoType="RscWeaponRangeZeroing";
						discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
						discreteDistanceInitIndex=2;
						memoryPointGunnerOptics="commanderview";
						memoryPointGunnerOutOptics="commanderview";
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F.p3d";
						gunnerOutOpticsModel="";
						gunnerOpticsEffect[]={};
						gunnerHasFlares=1;
						turretfollowfreelook=1;
						gunnerGetInAction="GetInHigh";
						gunnerGetOutAction="GetOutHigh";
						startEngine=0;
						LODTurnedOut="VIEW_GUNNER";
						LODTurnedIn="VIEW_GUNNER";
						selectionFireAnim="";
						class OpticsIn
						{
							class Wide: ViewOptics
							{
								initAngleX=0;
								minAngleX=-8;
								maxAngleX=8;
								initAngleY=0;
								minAngleY=-45;
								maxAngleY=80;
								initFov=0.30000001;
								minFov=0.30000001;
								maxFov=0.30000001;
								visionMode[]=
								{
									"Normal",
									"Ti"
								};
								thermalMode[]={4,5};
								gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_w_F.p3d";
								gunnerOpticsEffect[]={};
							};
						};
						class HitPoints
						{
							class HitTurret
							{
								armor=500;
								material=-1;
								name="gunner_turret_hit";
								visual="vez";
								passThrough=0;
								minimalHit=0.02;
								explosionShielding=0.30000001;
								radius=0.25;
							};
							class HitGun
							{
								armor=500;
								material=-1;
								name="gunner_turret_hit";
								visual="";
								passThrough=0;
								minimalHit=0;
								explosionShielding=1;
								radius=0.25;
							};
						};
						class Damage
						{
							tex[]={};
							mat[]=
							{
								"A3\armor_f_gamma\MBT_01\Data\MBT_01_body.rvmat",
								"A3\armor_f_gamma\MBT_01\Data\MBT_01_body_damage.rvmat",
								"A3\armor_f_gamma\MBT_01\Data\MBT_01_body_destruct.rvmat",
								"A3\armor_f_gamma\MBT_01\Data\MBT_01_int.rvmat",
								"A3\armor_f_gamma\MBT_01\Data\MBT_01_int_damage.rvmat",
								"A3\armor_f_gamma\MBT_01\Data\MBT_01_int_destruct.rvmat",
								"A3\armor_f_gamma\MBT_01\Data\MBT_01_tow.rvmat",
								"A3\armor_f_gamma\MBT_01\Data\MBT_01_tow_damage.rvmat",
								"A3\armor_f_gamma\MBT_01\Data\MBT_01_tow_destruct.rvmat",
								"A3\armor_f_gamma\MBT_01\Data\MBT_01_track.rvmat",
								"A3\armor_f_gamma\MBT_01\Data\MBT_01_track_damage.rvmat",
								"A3\armor_f_gamma\MBT_01\Data\MBT_01_track_destruct.rvmat"
							};
						};
					};
				};
				proxyIndex=2;
				minElev=-5;
				maxElev=30;
				initElev=10;
				minTurn=-360;
				maxTurn=360;
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_best",
					0.0099999998,
					1,
					50
				};
				turretInfoType="RscWeaponRangeZeroing";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
				discreteDistanceInitIndex=5;
				memoryPointGunnerOptics="gunnerview";
				gunnerOutOpticsModel="";
				gunnerOutOpticsEffect[]={};
				gunnerOpticsEffect[]={};
				gunnerForceOptics=1;
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.30000001;
						minFov=0.30000001;
						maxFov=0.30000001;
						visionMode[]=
						{
							"Normal",
							"Ti"
						};
						thermalMode[]={4,5};
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_w_F.p3d";
						gunnerOpticsEffect[]={};
					};
					class Medium: Wide
					{
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_m_F.p3d";
						initFov=0.07;
						minFov=0.07;
						maxFov=0.07;
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_n_F.p3d";
						initFov=0.028000001;
						minFov=0.028000001;
						maxFov=0.028000001;
					};
				};
				gunnerAction="mbt2_slot2a_out";
				gunnerInAction="mbt2_slot2a_in";
				forceHideGunner=0;
				inGunnerMayFire=1;
				viewGunnerInExternal=1;
				class HitPoints
				{
					class HitTurret
					{
						armor=200;
						material=-1;
						name="main_turret_hit";
						visual="vez";
						passThrough=0;
						minimalHit=0.02;
						explosionShielding=0.30000001;
						radius=0.25;
					};
					class HitGun
					{
						armor=200;
						material=-1;
						name="main_gun_hit";
						visual="";
						passThrough=0;
						minimalHit=0;
						explosionShielding=1;
						radius=0.25;
					};
				};
			};
		};
	};
    class 315_CIS_GAT: 3AS_GAT
	{
		scope=2;
		scopeCurator=2;
		displayName="GAT";
		editorSubcategory="315_CIS_armoured";
		vehicleClass="315_CIS_armoured";
		side=0;
		faction="315_CIS";
		editorPreview="3as\3as_gat\images\3AS_GAT.jpg";
		crew="315_CIS_B1_Droid_Crew";
	};
    class 315_CIS_GAT_Light: 3AS_GAT_Light
	{
		scope=2;
		scopeCurator=2;
		displayName="GAT Light";
		editorSubcategory="315_CIS_armoured";
		vehicleClass="315_CIS_armoured";
		side=0;
		faction="315_CIS";
		editorPreview="3as\3as_gat\images\3AS_GAT_light.jpg";
		crew="315_CIS_B1_Droid_Crew";
	};
    class 3as_ParticleCannon;
	class 315_CIS_Particle_Cannon: 3as_ParticleCannon
	{
		scope=2;
		scopeCurator=2;
		displayName="Particle Cannon";
		editorSubcategory="315_CIS_Turrets";
		vehicleClass="315_CIS_Turrets";
		side=0;
		faction="315_CIS";
		crew="315_CIS_B1_Droid_Crew";
	};
    class 3AS_Advanced_DSD;
	class 315_CIS_Spider_Droid: 3AS_Advanced_DSD
	{
		scope=2;
		scopeCurator=2;
		displayName="Dwarf Spider Droid ";
		editorSubcategory="315_CIS_Turrets";
		vehicleClass="315_CIS_Turrets";
		crew="315_CIS_B1_Droid_Crew";
		side=0;
		armor=300;
		faction="315_CIS";
	};
    class 3as_Deka_Static_Sniper;
	class 315_CIS_Sniper_Deka: 3as_Deka_Static_Sniper
	{
		displayName="Droideka Sniper ";
		editorSubcategory="315_CIS_Turrets";
		vehicleClass="315_CIS_Turrets";
		armor=225;
		scope=2;
		side=0;
		faction="315_CIS";
		crew="315_CIS_B1_Droid_Crew";
		scopearsenal=2;
		scopecurator=2;
	};
    class 3as_SAC_Trade;
	class 315_CIS_Squad_Transport: 3as_SAC_Trade
	{
		scope=2;
		scopeCurator=2;
		displayName="Droid Assault Craft";
		editorSubcategory="315_CIS_armoured";
		vehicleClass="315_CIS_armoured";
		side=0;
		faction="315_CIS";
		crew="315_CIS_B1_Droid_Crew";
	};
};