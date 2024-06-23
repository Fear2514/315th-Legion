class CfgPatches
{
    author="Mickey";
		name="198th Aux Mod";
		units[]={};
		weapons[]={};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
};


class CfgWeaponCursors
{
	class throw;
	class DC_Series_Reticle: throw
	{
		texture="315th-Weapons\Weapon_Crosshairs\DC15_Reticle.paa";
	};
	class Shotgun_Reticle: throw
	{
		texture="315th-Weapons\Weapon_Crosshairs\Shotgun_Reticle.paa";
	};
	class Marksman_Reticle: throw
	{
		texture="315th-Weapons\Weapon_Crosshairs\Sniper_Reticle.paa";
	};
};