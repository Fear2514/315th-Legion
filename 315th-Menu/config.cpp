class CfgPatches
{
	class Intro_315th
	{
		author="Mickey";
		requiredAddons[]=
		{
			"A3_Data_F_Enoch_Loadorder"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CAWorld;
class RscStandardDisplay;
class RscVignette;
class RscControlsGroupNoScrollbars;
class RscFrame;
class RscText;
class RscPicture;
class RscTitle;
class RscButtonMenu;
class RscHTML;
class RscControlsGroupNoHScrollbars;
class RscListBox;
class RscPictureKeepAspect;
class RscButton;
class RscButtonImages;
class RscShortcutButton;
class RscDisplayConfigure
{
	enableDisplay=1;
};
class RscDisplayMain: RscStandardDisplay
{
	idd=0;
	idc=1;
    access=1;
	enableDisplay=1;
	text="315th-Menu\Main_Menu_315th.paa";
	class RscActiveText;
	class RscActivePicture: RscActiveText
	{
		style=48;
		color[]={1,1,1,0.5};
		colorActive[]={1,1,1,1};
	};
	class Spotlight
	{
	};
	class controls
	{
		class Spotlight1
		{
		};
		class Spotlight2
		{
		};
		class Spotlight3
		{
		};
		class BackgroundSpotlightRight
		{
		};
		class BackgroundSpotlightLeft
		{
		};
		class BackgroundSpotlight
		{
		};
		class B_Credits
		{
		};
		class ConnectServer1: RscButton
		{
			idc=-1;
			text="Join 315th Main Server";
			style=2;
			onbuttonclick="connectToServer ['144.48.104.130', 2306, '315th']";
			colorBackground[]={0,0,0,0.69999999};
			colorBackgroundActive[]={1,0,0,0,2};
			borderSize=0.054000001;
			colorBorder[]={0,0,0,0};
			x="safeZoneX + safeZoneW - 0.6";
			y="safeZoneY + 0.2 * safeZoneH";
			w="0.25";
			h="0.05";
		};
		class ConnectServer2: RscButton
		{
			idc=-1;
			text="Join 315th Training Server";
			style=2;
			onbuttonclick="connectToServer ['104.223.101.68', 2330, '315th']";
			colorBackground[]={0,0,0,0.69999999};
			colorBackgroundActive[]={1,0,0,0,2};
			borderSize=0.055;
			colorBorder[]={0,0,0,0};
			x="safeZoneX + 0.2 * safeZoneW";
			y="safeZoneY + 0.2 * safeZoneH";
			w="0.25";
			h="0.05";
		};
	};
	class controlsBackground
	{
		class LoadingPicture_315th: RscPicture
		{
			idc=1;
            access = 1;
			colorText[]={1,1,1,1};
			x="SafeZoneX";
			y="SafeZoneY";
			h="SafeZoneH";
			w="SafeZoneW";
			text="315th-Menu\Main_Menu_315th.paa";
		};
	};
};
class RscDisplayLoading {
	class Variants {
		class LoadingOne {
			idd = 250;
			class controls {
				class LoadingPic : RscPicture {
					idc=1000;
					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "315th-Menu\Main_Menu_315th.paa";
				};
			};
		};

		class Loading_West1 : LoadingOne {
			class controls {
				class LoadingPic {
					idc=1000;
					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "315th-Menu\Main_Menu_315th.paa";
				};
			};
		};

		class Loading_West2 : LoadingOne {
			class controls {
				class LoadingPic {
					idc=1000;
					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "315th-Menu\Main_Menu_315th.paa";
				};
			};
		};

		class Loading_East1 : LoadingOne {
			class controls {
				class LoadingPic {
					idc=1000;
					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "315th-Menu\Main_Menu_315th.paa";
				};
			};
		};
		class Loading_East2 : LoadingOne {
			class controls {
				class LoadingPic {
					idc=1000;
					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "315th-Menu\Main_Menu_315th.paa";
				};
			};
		};
	};
};

class RscDisplayLoadMission : RscStandardDisplay {
	class controlsBackground {
		class LoadingPic : RscPicture {
			idc=1000;
			x = SafeZoneX;
			y = SafeZoneY;
			h = SafeZoneH;
			w = SafeZoneW;
			text = "315th-Menu\Main_Menu_315th.paa";
		};
	};
};