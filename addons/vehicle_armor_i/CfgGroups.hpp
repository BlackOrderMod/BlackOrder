class CfgGroups {
    class Indep {
        class IND_BlackOrder_F {
            name = ECSTRING(common,Faction_DisplayName);
            class Armored {
                name = "$STR_A3_CfgGroups_West_BLU_F_Armored0";
                class I_BlackOrder_TankSection {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankSection0";
                    icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
                    faction = "IND_BlackOrder_F";
                    side = 2;
                    class Unit0 {
                        side = 2;
                        vehicle = "I_blackorder_veh_m1a1tank_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };
                    class Unit1 {
                        side = 2;
                        vehicle = "I_blackorder_veh_m1a1tank_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
            };
        };
    };
};
