class CfgPatches
{
	class 315th_DC15C
	{
		name = "[315th] DC-15C";
		author = "315th Aux Team";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"315th_DC15C","315th_DC15C_GL"};
	};
};

class CfgWeapons
{   
    class 3AS_DC15C_F;
    class 315th_DC15C: 3AS_DC15C_F
    {
        displayName="[315th] DC-15C Rifle";
        baseweapon="315th_DC15";
        scope=2;
        scopeArsenal=2;
        cursor="DC_Series_Reticle";
    };

    class 3AS_DC15C_GL;
    class 315th_DC15C_GL: 3AS_DC15C_GL
    {
        displayName="[315th] DC-15C GL Rifle";
        baseweapon="315th_DC15C_GL";
        scope=2;
        scopeArsenal=2;
        cursor="DC_Series_Reticle";
    };
};