class XtdGearModels {
    class CfgWeapons {
        class 315th_REP_Helmets {
            options[] = { "rank", "variant" };
            label = "REP Helmets";
            class rank {
                label = "Rank";
                values[] = { "CR-C", "CR", "CT", "Custom" };
            };
            class variant {
                label = "Type";
                values[] = { "P1", "EOD" };
            };
        };
        class 315th_REP_CustomHelmets {
            options[] = { "name", "variant" };
            label = "REP Custom Helmets";
            class name {
                label = "Name";
                values[] = { "Fear" };
            };
            class variant {
                label = "Type";
                values[] = { "P1" };
            };
        };
		class 315th_REP_PilotHelmets {
            options[] = { "rank", "variant" };
            label = "REP Pilot Helmets";
            class rank {
                label = "Rank";
                values[] = { "CX", "Custom" };
            };
            class variant {
                label = "Type";
                values[] = { "Pilot" };
            };
        };
		class 315th_REP_RTOHelmets {
            options[] = { "rank", "variant" };
            label = "REP RTO Helmets";
            class rank {
                label = "Rank";
                values[] = { "CT", "Custom" };
            };
            class variant {
                label = "Type";
                values[] = { "Pilot" };
            };
        };
        class 315th_REP_Uniforms {
            options[] = { "rank", "medic", "eod", "nco" };
            label = "REP Uniforms";
            class rank {
                label = "Rank";
                values[] = { "Recruit", "Cadet", "Trooper" };
            };
            class medic {
                label = "Medic";
                values[] = { "Yes", "No" };
            };
            class eod {
                label = "EOD";
                values[] = { "Yes", "No" };
            };
			class nco {
                label = "NCO";
                values[] = { "Yes", "No" };
            };
        };
        class 315th_CIS_Uniforms {
            options[] = { "type" };
            label = "CIS Uniforms";
            class type {
                label = "Type";
                values[] = { "AA", "AT", "Commander", "Crew", "Grenadier", "Heavy", "Security", "Shotgun", "Sniper", "Standard" };
            };
        };
        class 315_REP_Vests {
            options[] = { "rank", "type" };
            label = "REP Vests";
            class rank {
                label = "Rank";
                values[] = { "CR", "CT", "SCT", "CP", "CS", "Lieutenant", "Captain", "Major", "Commander" };
            };
            class type {
                label = "Type";
                values[] = { "Regular", "CGS" };
            };
        };
        class 315_REP_ARCVests {
            options[] = { "rank" };
            label = "REP ARC Vests";
            class rank {
                label = "Rank";
                values[] = { "Cadet", "Trooper" };
            };
        };
        class 315th_CIS_Vests {
            options[] = { "type" };
            label = "CIS Vests";
            class type {
                label = "Type";
                values[] = { "BX" };
            };
        };
    };
    class CfgVehicles {
        class 315th_REP_Backpacks {
            options[] = { "backpack", "type" };
            label = "REP Backpacks";
            class backpack {
                label = "Backpack";
                values[] = {"Trooper", "Anti-Tank", "EOD", "Medic", "ARC", "RTO", "Belt Bag"};
            };
            class type {
                label = "Type";
                values[] = {"Normal", "Mini", "Zeus", "Medic"};
            };
        };
        class 315th_CIS_Backpacks {
            options[] = { "rank" };
            label = "CIS Backpacks";
            class rank {
                label = "Rank";
                values[] = {"Trooper", "NCO"};
            };
        };
    };
};
class XtdGearInfos {
    class CfgWeapons {
        /**
            Helmets
        **/
        // Republic
        class 315th_recruit_helmet {
            model = "315th_REP_Helmets";
            rank = "CR-C";
            variant = "P1";
        };
		 class 315th_cadet_helmet {
            model = "315th_REP_Helmets";
            rank = "CR";
            variant = "P1";
        };
        class 315th_trooper_helmet {
            model = "315th_REP_Helmets";
            rank = "CT";
            variant = "P1";
        };
        class 315th_EOD_helmet {
            model = "315th_REP_Helmets";
            rank = "CT";
            variant = "EOD";
        };
        class 315th_pilot_helmet {
            model = "315th_REP_PilotHelmets";
            rank = "CX";
            variant = "Pilot";
        };
		class 315th_RTO_helmet {
            model = "315th_REP_RTOHelmets";
            rank = "CT";
            variant = "RTO";
        };
        // Republic - Custom
        class 315th_fear_helmet {
            model = "315th_REP_CustomHelmets";
            name = "Fear";
            variant = "P1";
        };
        /**
            Uniforms
        **/
        // Republic
        class 315th_recruit_uniform {
            model = "315th_REP_Uniforms";
            rank = "Recruit";
            medic = "No";
            eod = "No";
			nco = "No";
        };
		class 315th_cadet_uniform {
            model = "315th_REP_Uniforms";
            rank = "Cadet";
            medic = "No";
            eod = "No";
			nco = "No";
        };
        class 315th_trooper_uniform {
            model = "315th_REP_Uniforms";
            rank = "Trooper";
            medic = "No";
            eod = "No";
			nco = "No";
        };
        class 315th_medic_uniform {
            model = "315th_REP_Uniforms";
            rank = "Trooper";
            medic = "Yes";
            eod = "No";
			nco = "No";
        };
        class 315th_EOD_uniform {
            model = "315th_REP_Uniforms";
            rank = "Trooper";
            medic = "No";
            eod = "Yes";
			nco = "No";
        };
		class 315th_NCO_uniform {
            model = "315th_REP_Uniforms";
            rank = "Trooper";
            medic = "No";
            eod = "No";
			nco = "Yes";
        };
        // CIS
        class 315_CIS_B1_Droid_AA_U {
            model = "315th_CIS_Uniforms";
            type = "AA";
        };
        class 315_CIS_B1_Droid_AT_U {
            model = "315th_CIS_Uniforms";
            type = "AT";
        };
        class 315_CIS_B1_Droid_Commander_U {
            model = "315th_CIS_Uniforms";
            type = "Commander";
        };
        class 315_CIS_B1_Droid_Crew_U {
            model = "315th_CIS_Uniforms";
            type = "Crew";
        };
        class 315_CIS_B1_Droid_Grenadier_U {
            model = "315th_CIS_Uniforms";
            type = "Grenadier";
        };
        class 315_CIS_B1_Droid_Heavy_U {
            model = "315th_CIS_Uniforms";
            type = "Heavy";
        };
        class 315_CIS_B1_Droid_Security_U {
            model = "315th_CIS_Uniforms";
            type = "Security";
        };
        class 315_CIS_B1_Droid_Shotgun_U {
            model = "315th_CIS_Uniforms";
            type = "Shotgun";
        };
        class 315_CIS_B1_Droid_Sniper_U {
            model = "315th_CIS_Uniforms";
            type = "Sniper";
        };
        class 315_CIS_Base_B1_Droid_U {
            model = "315th_CIS_Uniforms";
            type = "Standard";
        };
        /**
            Vests
        **/
        // Republic
        class 315th_CT_V {
            model = "315_REP_Vests";
            rank = "CT";
            type = "Regular";
        };
        class 315th_SCT_V {
            model = "315_REP_Vests";
            rank = "SCT";
            type = "Regular";
        };
        class 315th_CP_V {
            model = "315_REP_Vests";
            rank = "CP";
            type = "Regular";
        };
        class 315th_CS_V {
            model = "315_REP_Vests";
            rank = "CS";
            type = "Regular";
        };
        class 315th_CGS_V {
            model = "315_REP_Vests";
            rank = "CS";
            type = "CGS";
        };
        class 315th_LT_V {
            model = "315_REP_Vests";
            rank = "Lieutenant";
            type = "Regular";
        };
        class 315th_CC_V {
            model = "315_REP_Vests";
            rank = "Captain";
            type = "Regular";
        };
        class 315th_CM_V {
            model = "315_REP_Vests";
            rank = "Major";
            type = "Regular";
        };
        class 315th_CO_V {
            model = "315_REP_Vests";
            rank = "Commander";
            type = "Regular";
        };
        // Republic - ARC
        class 315th_ARCC_V {
            model = "315_REP_ARCVests";
            rank = "Cadet";
        };
        class 315th_ARC_V {
            model = "315_REP_ARCVests";
            rank = "Trooper";
        };
        // CIS
        class 315_CIS_BX_Vest {
            model = "315th_CIS_Vests";
            type = "BX";
        };
    };
    class CfgVehicles {
        /**
            Backpacks
        **/
        // Republic
        class 315th_trooper_backpack {
            model = "315th_REP_Backpacks";
            backpack = "Trooper";
            type = "Normal";
        };
        class 315th_RTO_backpack {
            model = "315th_REP_Backpacks";
            backpack = "RTO";
            type = "Normal";
        };
        class 315th_RTO_pack {
            model = "315th_REP_Backpacks";
            backpack = "RTO";
            type = "Mini";
        };
        class 315th_MRTO_backpack {
            model = "315th_REP_Backpacks";
            backpack = "RTO";
            type = "Medic";
        };
        class 315th_ZRTO_backpack {
            model = "315th_REP_Backpacks";
            backpack = "RTO";
            type = "Zeus";
        };
        class 315th_eod_backpack {
            model = "315th_REP_Backpacks";
            backpack = "EOD";
            type = "Normal";
        };
        class 315th_belt_bag {
            model = "315th_REP_Backpacks";
            backpack = "Belt Bag";
            type = "Normal";
        };
        class 315th_medic_backpack {
            model = "315th_REP_Backpacks";
            backpack = "Medic";
            type = "Normal";
        };
        class 315th_ARC_backpack {
            model = "315th_REP_Backpacks";
            backpack = "ARC";
            type = "Normal";
        };
	class 315th_AT_backpack {
            model = "315th_REP_Backpacks";
            backpack = "AT";
            type = "Normal";
        // CIS
        class 315_CIS_B1_backpack {
            model = "315th_CIS_Backpacks";
            rank = "Trooper";
        };
        class 315_CIS_B1_antenna_backpack {
            model = "315th_CIS_Backpacks";
            rank = "NCO";
        };
    };
};
