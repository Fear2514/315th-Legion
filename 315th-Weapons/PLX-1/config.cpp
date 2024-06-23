class CfgPatches
{
 class 315th_PLX1
 {
  name="[315th] PLX-1";
  author="315th Aux Team";
  requiredAddons[]={};
  units[]={};
  weapons[]={"315th_JLTS_PLX1"};
 };	
};
class CfgWeapons
{
 class JLTS_PLX1_AT;
 class 315th_JLTS_PLX1: JLTS_PLX1_AT
 {
  displayName="[315th] PLX-1";
  scope=2;
  scopeArsenal=2;
 };
};
