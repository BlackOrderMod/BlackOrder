class CfgGroups {
    class Indep {
        class IND_BlackOrder_F {
            name = ECSTRING(common,Faction_DisplayName);
            class Infantry {
                name="$STR_A3_CfgGroups_West_BLU_F_Infantry0";
                class I_BlackOrder_InfSquad {
                    name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "IND_BlackOrder_F";
                    side = 2;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "I_BlackOrder_SquadLeader_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_BlackOrder_Rifleman_LAT_F";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "I_BlackOrder_Rifleman_2_F";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_BlackOrder_Autorifleman_F";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "I_BlackOrder_TeamLeader_F";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "I_BlackOrder_Autorifleman_F";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_BlackOrder_Rifleman_2_F";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_BlackOrder_CombatLifeSaver_F";
                    };
                };
                class I_BlackOrder_InfSquad_Weapons {
                    name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "IND_BlackOrder_F";
                    side = 2;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "I_BlackOrder_SquadLeader_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_BlackOrder_Autorifleman_F";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "I_BlackOrder_Soldier_AT_F";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "I_BlackOrder_TeamLeader_F";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "I_BlackOrder_Soldier_AT_F";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "I_BlackOrder_Autorifleman_F";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_BlackOrder_Rifleman_2_F";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_BlackOrder_Marksmen_F";
                    };
                };
                class I_BlackOrder_InfAssault {
                    name = ECSTRING(characters_o,Group_InfAssault_Display);
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "IND_BlackOrder_F";
                    side = 2;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "I_BlackOrder_SquadLeader_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_BlackOrder_Autorifleman_F";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "I_BlackOrder_Soldier_AT_F";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "I_BlackOrder_TeamLeader_F";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "I_BlackOrder_Soldier_AT_F";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "I_BlackOrder_Autorifleman_F";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_BlackOrder_Autorifleman_F";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_BlackOrder_Rifleman_LAT_F";
                    };
                };
                class I_BlackOrder_InfTeam {
                    name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "IND_BlackOrder_F";
                    side = 2;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "I_BlackOrder_TeamLeader_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "I_BlackOrder_Autorifleman_F";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_BlackOrder_Rifleman_F";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_BlackOrder_Rifleman_LAT_F";
                    };
                };
                class I_BlackOrder_InfTeam_AA {
                    name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "IND_BlackOrder_F";
                    side = 2;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "I_BlackOrder_TeamLeader_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "I_BlackOrder_Soldier_AA_F";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_BlackOrder_Soldier_AA_F";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_BlackOrder_Rifleman_F";
                    };
                };
                class I_BlackOrder_InfTeam_AT {
                    name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "IND_BlackOrder_F";
                    side = 2;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "I_BlackOrder_TeamLeader_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "I_BlackOrder_Soldier_AT_F";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_BlackOrder_Soldier_AT_F";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_BlackOrder_Rifleman_F";
                    };
                };
                class I_BlackOrder_InfSentry {
                    name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "IND_BlackOrder_F";
                    side = 2;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "I_BlackOrder_Rifleman_2_F";
                    };
                    class Unit1 {
                        position[] = {5,-2,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_BlackOrder_Rifleman_F";
                    };
                };
                class I_BlackOrder_InfSentryLight {
                    name = ECSTRING(characters_o,Group_InfSentryLight_Display);
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "IND_BlackOrder_F";
                    side = 2;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "I_BlackOrder_Rifleman_Light_2_F";
                    };
                    class Unit1 {
                        position[] = {5,-2,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_BlackOrder_Rifleman_Light_F";
                    };
                };
            };
        };
    };
};
