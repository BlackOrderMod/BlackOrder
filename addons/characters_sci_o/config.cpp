#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "O_BlackOrder_Sci_base_F",
            "O_BlackOrder_Sci_Scientist_01_F",
            "O_BlackOrder_Sci_Scientist_01_Armed_F"
            "O_BlackOrder_Sci_Scientist_02_F",
            "O_BlackOrder_Sci_Scientist_02_Armed_F",
          "O_BlackOrder_Sci_Scientist_03_F",
            "O_BlackOrder_Sci_Scientist_03_Armed_F",

            "O_BlackOrder_Sci_Security_base_F",
            "O_BlackOrder_Sci_Security_F",
            "O_BlackOrder_Sci_Security_Light_F",
            "O_BlackOrder_Sci_SecurityOfficer_F",
            "O_BlackOrder_Sci_SecurityOfficer_Light_F",

            "O_BlackOrder_Sci_SpecialSecurity_base_F",
            "O_BlackOrder_Sci_SpecialSecurityOfficer_F",
            "O_BlackOrder_Sci_SpecialSecurity_01_F",
            "O_BlackOrder_Sci_SpecialSecurity_02_F",

            "O_BlackOrder_Sci_SpecialSecurity_TeamLeader_F",
            "O_BlackOrder_Sci_SpecialSecurity_Soldier_F"

        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "blackorder_main",
            "blackorder_common"

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
