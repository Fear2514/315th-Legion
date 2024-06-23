class Cfgpatches
{
 class 315th_DW32S
 {
  name="315th DW-32S";
  author="315th Aux Team";
  requiredAddons[]={};
  units[]={};
  weapons[]={"315thAUX_DW32S"};
 };
};
class CfgWeapons
{
	class PointerSlot;
	class WeaponSlotsInfo;
	class JLTS_DW32S;
	class 315thAUX_DW32S: JLTS_DW32S
	{
		displayName="[315th] DW-32S";
		scope=2;
		scopeArsenal=2;
		magazines[]=
		{
			"JLTS_DW32S_mag"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"acc_flashlight",
					"acc_pointer_IR"
				};   
			};
		};
	};
};