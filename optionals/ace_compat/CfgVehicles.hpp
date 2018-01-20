class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class BlackOrder_Ace_Actions {
                condition = QUOTE(faction player in [ARR_6('OPF_BlackOrder_F','OPF_BlackOrder_SCI_F','OPF_BlackOrder_MP_F','IND_BlackOrder_F','IND_BlackOrder_SCI_F','IND_BlackOrder_MP_F')]);
                displayName = ECSTRING(common,BlackOrder_Display);
                exceptions[] = {"isNotInside","notOnMap","isNotSitting"};
                icon = QPATHTOF(UI\icon_action_co.paa);
                priority = 0;
                showDisabled = 1;
                statement = "";
                class BlackOrder_Cyanide {
                    displayName = CSTRING(Action_Cyanide_Display);
                    condition = QUOTE(!(_player getVariable [ARR_2(QQGVAR(cyanide_flag), false])));
                    statement = "";
                    icon = QPATHTOF(UI\icon_cyanide_co.paa);
                    class BlackOrder_Cyanide_Take {
                        displayName = CSTRING(Action_Cyanide_Take_Display);
                        condition = QUOTE(!(_player getVariable [ARR_2(QQGVAR(cyanide_flag), false])));
                        statement = QUOTE((_player spawn {sleep (random [ARR_3(5, 10, 15)]); [_this] call ace_medical_fnc_setCardiacArrest;}); (_player setVariable [ARR_2(QQGVAR(cyanide_flag), true])));
                        icon = "";
                    };
                };
            };
        };
    };

    class Weapon_Base_F;
    class Weapon_srifle_DMR_03_blackorder_F : Weapon_Base_F {
        displayName = CSTRING(DMR_Display);
    };
};
