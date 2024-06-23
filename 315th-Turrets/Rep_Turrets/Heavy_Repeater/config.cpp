class CfgPatches
{
	class 315th_Heavy_Repeater
	{
		name="[315th] Repeater";
		author="Panda";
		requiredVersion=0.0099999998;
		requiredAddons[]=
		{
			"3AS_Static_Repeater"
		};
		units[]=
		{
			"315th_Heavy_Repeater2"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class 3AS_HeavyRepeater_Unarmoured;
	class 315th_Heavy_Repeater2: 3AS_HeavyRepeater_Unarmoured
	{
		faction="315th_Main";
		editorCategory="315th_Main";
		editorSubcategory="315th_Turret";
		side=1;
		displayName=" Repeater";
		hiddenSelectionsTextures[]={};
		crew="187th_Trooper";
		typicalCargo[]=
		{
			"315_trooper_unit"
		};
	};
};
class cfgMods
{
	author="315th Aux Team";
	timepacked="1685986325";
};
