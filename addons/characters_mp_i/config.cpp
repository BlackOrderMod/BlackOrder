#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "I_BlackOrder_MP_PatrolOfficer_01_F",
            "I_BlackOrder_MP_PatrolOfficer_01_Armored_F",
            "I_BlackOrder_MP_PatrolOfficer_02_F",
            "I_BlackOrder_MP_PatrolOfficer_02_Armored_F",
            "I_BlackOrder_MP_PatrolOfficer_03_F",
            "I_BlackOrder_MP_PatrolOfficer_03_Armored_F",
            
            "I_BlackOrder_MP_PatrolOfficer_Sergeant_01_F",
            "I_BlackOrder_MP_PatrolOfficer_Sergeant_01_Armored_F",
            "I_BlackOrder_MP_PatrolOfficer_Sergeant_02_F",
            "I_BlackOrder_MP_PatrolOfficer_Sergeant_02_Armored_F",
            "I_BlackOrder_MP_PatrolOfficer_Sergeant_03_F",
            "I_BlackOrder_MP_PatrolOfficer_Sergeant_03_Armored_F",

            "I_BlackOrder_MP_Soldier_Rifleman_F",
            "I_BlackOrder_MP_Soldier_TeamLeader_F",
            "I_BlackOrder_MP_Soldier_Medic_F",
            "I_BlackOrder_MP_Soldier_Officer_F"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "blackorder_main",
            "blackorder_common",

            "blackorder_characters_mp_o"
        };
        author = ECSTRING(common,BlackOrderTeam);
        authors[] = {"Brostrom.A (Evul)"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
