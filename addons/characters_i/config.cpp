#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "I_BlackOrder_Rifleman_F",
            "I_BlackOrder_Rifleman_2_F",
            "I_BlackOrder_Rifleman_Light_F",
            "I_BlackOrder_Rifleman_Light_2_F",
            "I_BlackOrder_SquadLeader_F",
            "I_BlackOrder_TeamLeader_F",
            "I_BlackOrder_Rifleman_LAT_F",
            "I_BlackOrder_Autorifleman_F",
            "I_BlackOrder_Marksmen_F",
            "I_BlackOrder_CombatLifeSaver_F",

            "I_BlackOrder_Officer_F",
            "I_BlackOrder_Commissar_F",

            "I_BlackOrder_Soldier_AA_F",
            "I_BlackOrder_Soldier_AT_F",

            "I_BlackOrder_Crewman_F",

            "I_BlackOrder_Pilot_F",
            "I_BlackOrder_FighterPilot_F",
            "I_BlackOrder_HeliPilot_F",
            "I_BlackOrder_HeliCrew_F",

            "I_BlackOrder_Survivor_F",

            "I_BlackOrder_Unarmed_00_F",
            "I_BlackOrder_Unarmed_01_F",
            "I_BlackOrder_Unarmed_02_F",

            "I_BlackOrder_InfSquad",
            "I_BlackOrder_InfSquad_Weapons",
            "I_BlackOrder_InfAssault",
            "I_BlackOrder_InfTeam",
            "I_BlackOrder_InfTeam_AA",
            "I_BlackOrder_InfTeam_AT",
            "I_BlackOrder_InfSentry",
            "I_BlackOrder_InfSentryLight"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "blackorder_main",
            "blackorder_common",

            "blackorder_characters_o"
        };
        author = ECSTRING(common,BlackOrderTeam);
        authors[] = {"Brostrom.A (Evul)"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
