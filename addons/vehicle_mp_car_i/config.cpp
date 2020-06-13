#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "I_blackorder_veh_mp_Quadbike_F",
            "I_blackorder_veh_mp_SUV_F",
            "I_blackorder_veh_mp_Offroad_F",
            "I_blackorder_veh_mp_Offroad_armed_F",
            "I_blackorder_veh_mp_Van_02_F",
            "I_blackorder_veh_mp_Van_02_transport_F",
            "I_blackorder_veh_mp_m1025_m2_F",
            "I_blackorder_veh_mp_m1025_mk19_F",
            "I_blackorder_veh_mp_m1025_F"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "blackorder_main",
            "blackorder_common",

            "blackorder_characters_i",
            "blackorder_vehicle_mp_car_o"
        };
        author = ECSTRING(common,BlackOrderTeam);
        authors[] = {"Brostrom.A (Evul)"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
