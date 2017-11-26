#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "O_BlackOrder_base_F",

            "O_BlackOrder_Rifleman_F",
            "O_BlackOrder_Rifleman_2_F",
            "O_BlackOrder_Rifleman_Light_F",
            "O_BlackOrder_Rifleman_Light_2_F",
            "O_BlackOrder_SquadLeader_F",
            "O_BlackOrder_TeamLeader_F",
            "O_BlackOrder_Rifleman_LAT_F",
            "O_BlackOrder_Autorifleman_F",
            "O_BlackOrder_Marksmen_F",
            "O_BlackOrder_CombatLifeSaver_F",

            "O_BlackOrder_Officer_F",
            "O_BlackOrder_Commissar_F",

            "O_BlackOrder_Soldier_AA_F",
            "O_BlackOrder_Soldier_AT_F",

            "O_BlackOrder_Pilot_F",
            "O_BlackOrder_FighterPilot_F",
            "O_BlackOrder_HeliPilot_F",
            "O_BlackOrder_HeliCrew_F",

            "O_BlackOrder_Survivor_F",


            "O_BlackOrder_InfSquad",
            "O_BlackOrder_InfSquad_Weapons",
            "O_BlackOrder_InfAssault",
            "O_BlackOrder_InfTeam",
            "O_BlackOrder_InfTeam_AA",
            "O_BlackOrder_InfTeam_AT",
            "O_BlackOrder_InfSentry",
            "O_BlackOrder_InfSentryLight",

            "O_BlackOrder_ScoutTeam",
            "O_BlackOrder_AssaultTeam",

            "O_BlackOrder_MotInf_Reinforce"


        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "blackorder_main",
            "blackorder_common",

            "blackorder_gear",
            "blackorder_weapons"
        };
        author = ECSTRING(common,BlackOrderTeam);
        authors[] = {"Brostrom.A (Evul)"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
