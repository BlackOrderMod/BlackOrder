#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "O_blackorder_veh_sci_SUV_F",
            "O_blackorder_veh_sci_Van_02_F",
            "O_blackorder_veh_sci_Van_02_transport_F",
            "O_blackorder_veh_sci_m1025_F",

            "O_blackorder_veh_sci_m998_2dr_fulltop_F",
            "O_blackorder_veh_sci_m998_2dr_halftop_F",
            "O_blackorder_veh_sci_m998_2dr_F",

            "O_blackorder_veh_sci_m998_4dr_fulltop_F",
            "O_blackorder_veh_sci_m998_4dr_halftop_F",
            "O_blackorder_veh_sci_m998_4dr_F"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "blackorder_main",
            "blackorder_common",

            "blackorder_characters_sci_o"
        };
        author = ECSTRING(common,BlackOrderTeam);
        authors[] = {"Brostrom.A (Evul)"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
