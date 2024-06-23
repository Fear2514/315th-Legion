class CfgPatches
{
	class 315th_Grenades
	{
		name = "315th Grenades";
		author = "315th Aux Team";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {""};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {""};
	};
};

class CfgMagazines
{
	class 3AS_SonicDet;
	class 315th_3AS_SonicDet: 3AS_SonicDet
	{
		displayName = "[315th] Sonic Detonator";
		scope = 2;
	};
};