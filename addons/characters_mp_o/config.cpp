#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "O_BlackOrder_MP_base_F",

            "O_BlackOrder_MP_PatrolOfficer_01_F",
            "O_BlackOrder_MP_PatrolOfficer_02_F",
            "O_BlackOrder_MP_PatrolOfficer_03_F",
            "O_BlackOrder_MP_PatrolOfficer_Sergeant_01_F",
            "O_BlackOrder_MP_PatrolOfficer_Sergeant_02_F",
            "O_BlackOrder_MP_PatrolOfficer_Sergeant_03_F",

            "O_BlackOrder_MP_PatrolOfficer_01_Armored_F",
            "O_BlackOrder_MP_PatrolOfficer_02_Armored_F",
            "O_BlackOrder_MP_PatrolOfficer_03_Armored_F",
            "O_BlackOrder_MP_PatrolOfficer_Sergeant_01_Armored_F",
            "O_BlackOrder_MP_PatrolOfficer_Sergeant_02_Armored_F",
            "O_BlackOrder_MP_PatrolOfficer_Sergeant_03_Armored_F",

            "O_BlackOrder_MP_Soldier_TeamLeader_F",
            "O_BlackOrder_MP_Soldier_Rifleman_F",
            "O_BlackOrder_MP_Soldier_Medic_F"
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
#include "CfgGroups.hpp"
