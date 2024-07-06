class CfgPatches
{
	class 315th_backpacks
	{
		author="315th Aux Mod Team";
		name="315th_Backpacks";
		requiredAddons[]=
		{
			"A3_data_F";
			"A3_anims_F";
			"A3_weapons_F";
			"A3_characters_F"
		};
		units[]=
		{
			"315th_trooper_backpack",
			"315th_eod_backpack",
			"315th_medic_backpack",
			"315th_RTO_backpack",
			"315th_ARC_backpack",
			"315th_belt_bag",
			"315th_RTO_pack",
			"315th_MRTO_backpack"
		};
	};
};
class CfgVehicles
{
	class B_Kitbag_rgr;
	class B_AssaultPack_blk;
	class 315th_trooper_backpack: B_Kitbag_rgr
	{
		author="315th Aux Mod team";
		scope=2
		picture="\315thAUX-main\logo.paa";
		displayName="[315th] Clone Trooper Backpack";
		model="\MRC\JLTS\characters\CloneArmor\CloneBackpack.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"315th-Backpacks\textures\backpacks\backpack_315th.paa"
		};
	};
	class 315th_medic_backpack: 315th_trooper_backpack
	{
		displayName="[315th] Clone Medical Backpack";
		maximumLoad=550;
		hiddenSelectionsTextures[]=
		{
			"315th-Backpacks\textures\backpacks\backpack_medic_315th.paa"
		};
	};
	class 315th_MRTO_backpack: 315th_trooper_backpack
	{
		picture="\315thAUX-main\logo.paa";
		displayName="[315th] Clone Medical Long Range Backpack";
		maximumLoad=550;
		model="\MRC\JLTS\characters\CloneArmor\CloneBackpackRTO.p3d";
		hiddenSelectionsTextures[]=
		{
			"315th-Backpacks\textures\backpacks\backpack_medic_315th.paa"
		};
		tf_dialog="JLTS_clone_rto_radio_dialog";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_west_radio_code";
		tf_hasLRradio=1;
		tf_range=25000;
		tf_subtype="digital_lr";
	};
	class 315th_eod_backpack: 315th_trooper_backpack
	{
		displayName="[315th] Clone EOD Backpack";
		maximumLoad=500;
		hiddenSelectionsTextures[]=
		{
			"315th-Backpacks\textures\backpacks\backpack_eod_315th.paa"
		};
	};
	class 315th_RTO_backpack: 315th_trooper_backpack
	{
		picture="\315thAUX-main\logo.paa";
		displayName="[315th] Clone Long Range Backpack";
		model="\MRC\JLTS\characters\CloneArmor\CloneBackpackRTO.p3d";
		hiddenSelectionsTextures[]=
		{
			"315th-Backpacks\textures\backpacks\backpack_315th.paa"
		};
		tf_dialog="JLTS_clone_rto_radio_dialog";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_west_radio_code";
		tf_hasLRradio=1;
		tf_range=25000;
		tf_subtype="digital_lr";
	};
	class 315th_ZRTO_backpack: 315th_trooper_backpack
	{
		picture="\315thAUX-main\logo.paa";
		displayName="[315th] Zeus Long Range Backpack";
		model="\MRC\JLTS\characters\CloneArmor\CloneBackpackRTO.p3d";
		hiddenSelectionsTextures[]=
		{
			"315th-Backpacks\textures\backpacks\backpack_315th.paa"
		};
		tf_dialog="JLTS_clone_rto_radio_dialog";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_west_radio_code";
		tf_hasLRradio=1;
		tf_range=1000000;
		tf_subtype="digital_lr";
	};
	class 315th_belt_bag: B_AssaultPack_blk
	{
		author="315th Aux Mod Team";
		scope=2
		picture="\315thAUX-main\logo.paa";
		displayName="[315th] Clone Belt Bag";
		model="\MRC\JLTS\characters\CloneArmor\CloneBeltBag.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\CloneArmor\data\Clone_belt_bag_co.paa"
		};
	};
	class 315th_RTO_pack: B_AssaultPack_blk
	{
		author="315th Aux Mod Team";
		scope=2
		picture="\315AUX-main\logo.paa";
		displayName="[315th] Clone Mini Long Range Pack";
		model="\MRC\JLTS\characters\CloneArmor\CloneRTOPack.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"315th-Backpacks\textures\backpacks\backpack_rtomini_315th.paa"
		};
		maximumload=0;
		tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_west_radio_code";
		tf_hasLRradio=1;
		tf_range=25000;
		tf_subtype="digital_lr";
		mass=22;
	};
	class 315th_ARC_backpack: B_Kitbag_rgr
	{
		author="315th Aux Mod Team";
		scope=2;
		picture="\315AUX-main\logo.paa";
		displayName="[315th] Clone Arc Trooper Backpack";
		model="\MRC\JLTS\characters\CloneArmor\CloneBackpackARC.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\CloneArmor\data\Clone_backpack_arc_co.paa"
		};
		tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_west_radio_code";
		tf_hasLRradio=1;
		tf_range=12000;
		tf_subtype="digital_lr";
	};
	class 315th_medic_backpack_predef: 315th_medic_backpack
	{
		scope=1;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				count=10;
				name="FirstAidKit";
			};
			class _xx_MediKit
			{
				count=1;
				name="Medikit";
			};
		};
	};
	class 315th_eod_backpack_predef: 315th_eod_backpack
	{
		scope=1;
		class TransportItems
		{
			class _xx_MineDetector
			{
				count=1;
				name="MineDetector";
			};
			class _xx_ToolKit
			{
				count=1;
				name="ToolKit";
			};
		};
		class TransportMagazines
		{
			class _xx_APERSBoundingMine_Range_Mag
			{
				count=3;
				magazine="APERSBoundingMine_Range_Mag";
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				count=3;
				magazine="ClaymoreDirectionalMine_Remote_Mag";
			};
			class _xx_DemoCharge_Remote_Mag
			{
				count=3;
				magazine="DemoCharge_Remote_Mag";
			};
			class _xx_SLAMDirectionalMine_Wire_Mag
			{
				count=3;
				magazine="SLAMDirectionalMine_Wire_Mag";
			};
		};
	};
};
