class CfgPatches
{
	class 315th_DC15L
	{
		name = "[315th] DC-15L";
		author = "315th Aux Team";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"315th_DC15L"};
	};
};

class CfgWeapons
{   
    class 3AS_DC15L_F;
    class 315th_DC15L: 3AS_DC15L_F
    {
        displayName="[315th] DC-15L Rifle";
        baseweapon="315th_DC15L";
        scope=2;
        scopeArsenal=2;
        cursor="DC_Series_Reticle";
    };
};