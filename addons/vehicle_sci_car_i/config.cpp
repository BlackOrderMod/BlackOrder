#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "I_blackorder_veh_sci_SUV_F",
            "I_blackorder_veh_sci_Van_02_F",
            "I_blackorder_veh_sci_Van_02_transport_F",
            "I_blackorder_veh_sci_m1025_F",

            "I_blackorder_veh_sci_m998_2dr_fulltop_F",
            "I_blackorder_veh_sci_m998_2dr_halftop_F",
            "I_blackorder_veh_sci_m998_2dr_F",

            "I_blackorder_veh_sci_m998_4dr_fulltop_F",
            "I_blackorder_veh_sci_m998_4dr_halftop_F",
            "I_blackorder_veh_sci_m998_4dr_F"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "blackorder_main",
            "blackorder_common",

            "blackorder_characters_sci_i",
            "blackorder_vehicle_sci_car_o"
        };
        author = ECSTRING(common,BlackOrderTeam);
        authors[] = {"Brostrom.A (Evul)"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
