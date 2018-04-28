#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "I_RHS_UH60M_BlackOrder_F",
            "I_RHS_UH60M2_BlackOrder_F",
            "I_RHS_UH60M_ESSS_BlackOrder_F",
            "I_RHS_UH60M_ESSS2_BlackOrder_F",

            "I_RHS_AH1Z_BlackOrder_F",

            "I_BlackOrder_VTOL_Infantry_F",
            "I_BlackOrder_VTOL_Vehicle_F",

            "I_BlackOrder_Plane_Fighter_04_F",
            "I_BlackOrder_Plane_Fighter_04_Cluster_F",
            "I_BlackOrder_Plane_Fighter_04_AA_F",
            "I_BlackOrder_Plane_Fighter_04_CAS_F",

            "I_RHS_C130J_BlackOrder_F"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "blackorder_main",
            "blackorder_common",

            "blackorder_characters_i",
            "blackorder_vehicle_air_o"
        };
        author = ECSTRING(common,BlackOrderTeam);
        authors[] = {"Brostrom.A (Evul)"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
