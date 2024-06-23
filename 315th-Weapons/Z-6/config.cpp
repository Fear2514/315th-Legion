class CfgPatches
{
	class 315th_Z6_Cannon
	{
		name = "[315th] Z6 Rotary Cannon";
		author = "315th Aux Team";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"315th_Z6"};
		ammo[] = {"315th_bullet_charged_carbine_blue"};
		magazines[] = {"315th_Z6_charged_mag"};
	};
};

class CfgWeapons
{
	class JLTS_Z6;
	class 315th_Z6: JLTS_Z6
	{
		displayName="[315th] Z6";
		scope = 2;
		baseweapon="315th_Z6";
		magazines[]=
		{
			"JLTS_Z6_mag",
			"315th_Z6_charged_mag"
		};
	};
};

class CfgAmmo
{
	class JLTS_bullet_carbine_blue;
	class 315th_bullet_charged_carbine_blue: JLTS_bullet_carbine_blue
	{
		author = "315th Aux Team";
		lightcolor[] = {0.500000,0.050000,0.500000};
		tracercolor[] = {0.500000,0.050000,0.500000};
		brightness = 8;
		shootDistraction = 10;
		dangerRadiusBulletClose = 9;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
		caliber = 2.7;
		typicalSpeed = 1300;
		hit = 16;
		maxSpeed = 1300;
		visibleFire = 8;
		audibleFire = 10;

	}

}

class CfgMagazines
{
	class JLTS_Z6_mag;
	class 315th_Z6_charged_mag: JLTS_Z6_mag
	{
		author = "315th Aux Team";
		count = 100;
		displayName = "Z6-C mag";
		displayNameShort = "Over Clocked Mag";
		initSpeed = 1250; // -1.2 multiply by 120% original value. Neg value is multiplier, see documentation
		mass = 25;
		ammo = "315th_bullet_charged_carbine_blue";

	}

}
