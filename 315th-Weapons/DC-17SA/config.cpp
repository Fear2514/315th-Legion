class CfgPatches
{
	class Aux315th_DC17SA
	{
		name = "[315th] DC17SA";
		author = "315th Aux Team";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"315_DC17SA"};
	};
};

class CfgWeapons
{
	class JLTS_DC17SA;
	class 315_DC17SA: JLTS_DC17SA
	{
		displayName="[315th] DC-17SA";
		baseweapon="315_DC17SA";
		cursor="DC_Series_Reticle";
		scope=2;
		scopeArsenal=2;
	};
};
