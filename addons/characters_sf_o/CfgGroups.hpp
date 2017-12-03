class CfgGroups {
    class East {
        class OPF_BlackOrder_F {
            name = ECSTRING(common,Faction_DisplayName);
            class SpecOps {
                name="$STR_A3_CfgGroups_West_BLU_F_SpecOps0";
                class O_BlackOrder_ScoutTeam {
                    name = CSTRING(Group_ScoutTeam_Display);
                    icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
                    faction = "OPF_BlackOrder_F";
                    side = 0;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_BlackOrder_SF_TeamLeader_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "O_BlackOrder_SF_Rifleman_01_F";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_BlackOrder_SF_Rifleman_01_F";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_BlackOrder_SF_Marksmen_F";
                    };
                };
                class O_BlackOrder_AssaultTeam {
                    name = CSTRING(Group_AssaultTeam_Display);
                    icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
                    faction = "OPF_BlackOrder_F";
                    side = 0;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_BlackOrder_SF_TeamLeader_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "O_BlackOrder_SF_Rifleman_01_F";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_BlackOrder_SF_Rifleman_01_F";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_BlackOrder_SF_Rifleman_01_F";
                    };
                };
                class O_BlackOrder_InfiltrationTeam {
                    name = CSTRING(Group_InfiltrationTeam_Display);
                    icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
                    faction = "OPF_BlackOrder_F";
                    side = 0;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_BlackOrder_SF_TeamLeader_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "O_BlackOrder_SF_Rifleman_01_F";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_BlackOrder_SF_Sapper_F";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_BlackOrder_SF_Marksmen_F";
                    };
                };
            };
        };
    };
};
