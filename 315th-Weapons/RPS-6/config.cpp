class CfgPatches
{
	class 315th_RPS6
	{
		name = "[315th RPS-6]";
		author = "315th Aux Team";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"JLTS_RPS6_315th"};
	};
};

class CfgWeapons
{
	class JLTS_RPS6;
	class JLTS_RPS6_315th: JLTS_RPS6
	{
		displayName="[315th] RPS-6";
		scope=2;
		scopeArsenal=2;
	};
};