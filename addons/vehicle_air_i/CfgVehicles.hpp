class CfgVehicles {

    class RHS_UH60M_US_base;
    class RHS_UH60M : RHS_UH60M_US_base {
        class Turrets;
    };
    class O_RHS_UH60M_BlackOrder_F : RHS_UH60M {
        class Turrets : Turrets {
            class CopilotTurret;
            class MainTurret;
            class RightDoorGun;
        };
    };
    class I_RHS_UH60M_BlackOrder_F : O_RHS_UH60M_BlackOrder_F {
        _generalMacro = "I_RHS_UH60M_BlackOrder_F";
        scope = 2;
        scopeCurator = 2;
        side = 2;
        faction = "IND_BlackOrder_F";

        crew = "I_BlackOrder_HeliPilot_F";
        typicalCargo[] = {"I_BlackOrder_HeliPilot_F"};

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret {
                gunnerType = "I_BlackOrder_HeliPilot_F";
            };
            class MainTurret : MainTurret {
                gunnerType = "I_BlackOrder_HeliCrew_F";
            };
            class RightDoorGun : RightDoorGun {
                gunnerType = "I_BlackOrder_HeliCrew_F";
            };
        };
    };

    class O_RHS_UH60M2_BlackOrder_F;
    class I_RHS_UH60M2_BlackOrder_F : O_RHS_UH60M2_BlackOrder_F {
        _generalMacro = "I_RHS_UH60M2_BlackOrder_F";
        scope = 2;
        scopeCurator = 2;
        side = 2;
        faction = "IND_BlackOrder_F";

        crew = "I_BlackOrder_HeliPilot_F";
        typicalCargo[] = {"I_BlackOrder_HeliCrew_F"};
    };

    class O_RHS_UH60M_ESSS_BlackOrder_F;
    class I_RHS_UH60M_ESSS_BlackOrder_F : O_RHS_UH60M_ESSS_BlackOrder_F {
        _generalMacro = "I_RHS_UH60M_ESSS_BlackOrder_F";
        scope = 2;
        scopeCurator = 2;
        side = 2;
        faction = "IND_BlackOrder_F";

        crew = "I_BlackOrder_HeliPilot_F";
        typicalCargo[] = {"I_BlackOrder_HeliCrew_F"};
    };

    class O_RHS_AH1Z_BlackOrder_F;
    class I_RHS_AH1Z_BlackOrder_F : O_RHS_AH1Z_BlackOrder_F {
        _generalMacro = "I_RHS_AH1Z_BlackOrder_F";
        scope = 2;
        scopeCurator = 2;
        side = 2;
        faction = "IND_BlackOrder_F";

        crew = "I_BlackOrder_HeliPilot_F";
        typicalCargo[] = {"I_BlackOrder_HeliPilot_F"};
    };

    class O_RHS_MELB_AH6M_BlackOrder_F;
    class I_RHS_MELB_AH6M_BlackOrder_F : O_RHS_MELB_AH6M_BlackOrder_F {
        _generalMacro = "I_RHS_MELB_AH6M_BlackOrder_F";
        scope = 2;
        scopeCurator = 2;
        side = 2;
        faction = "IND_BlackOrder_F";

        crew = "I_BlackOrder_HeliPilot_F";
        typicalCargo[] = {"I_BlackOrder_HeliPilot_F"};
    };
    class O_RHS_MELB_MH6M_BlackOrder_F;
    class I_RHS_MELB_MH6M_BlackOrder_F : O_RHS_MELB_MH6M_BlackOrder_F {
        _generalMacro = "I_RHS_MELB_MH6M_BlackOrder_F";
        scope = 2;
        scopeCurator = 2;
        side = 2;
        faction = "IND_BlackOrder_F";

        crew = "I_BlackOrder_HeliPilot_F";
        typicalCargo[] = {"I_BlackOrder_HeliPilot_F"};
    };
    class O_RHS_MELB_H6M_BlackOrder_F;
    class I_RHS_MELB_H6M_BlackOrder_F : O_RHS_MELB_H6M_BlackOrder_F {
        _generalMacro = "I_RHS_MELB_H6M_BlackOrder_F";
        scope = 2;
        scopeCurator = 2;
        side = 2;
        faction = "IND_BlackOrder_F";

        crew = "I_BlackOrder_HeliPilot_F";
        typicalCargo[] = {"I_BlackOrder_HeliPilot_F"};
    };

    class O_BlackOrder_VTOL_Infantry_F;
    class I_BlackOrder_VTOL_Infantry_F : O_BlackOrder_VTOL_Infantry_F {
        _generalMacro = "I_BlackOrder_VTOL_Infantry_F";
        scope = 2;
        scopeCurator = 2;
        side = 2;
        faction = "IND_BlackOrder_F";

        crew = "I_BlackOrder_FighterPilot_F";
        typicalCargo[] = {"I_BlackOrder_FighterPilot_F"};
    };
    class O_BlackOrder_VTOL_Vehicle_F;
    class I_BlackOrder_VTOL_Vehicle_F : O_BlackOrder_VTOL_Vehicle_F {
        _generalMacro = "I_BlackOrder_VTOL_Vehicle_F";
        scope = 2;
        scopeCurator = 2;
        side = 2;
        faction = "IND_BlackOrder_F";

        crew = "I_BlackOrder_FighterPilot_F";
        typicalCargo[] = {"I_BlackOrder_FighterPilot_F"};
    };

    class O_BlackOrder_Plane_Fighter_04_F;
    class I_BlackOrder_Plane_Fighter_04_F : O_BlackOrder_Plane_Fighter_04_F {
        _generalMacro = "I_BlackOrder_Plane_Fighter_04_F";
        scope = 2;
        scopeCurator = 2;
        side = 2;
        faction = "IND_BlackOrder_F";

        crew = "I_BlackOrder_FighterPilot_F";
        typicalCargo[] = {"I_BlackOrder_FighterPilot_F"};
    };
    class O_BlackOrder_Plane_Fighter_04_Cluster_F;
    class I_BlackOrder_Plane_Fighter_04_Cluster_F : O_BlackOrder_Plane_Fighter_04_Cluster_F {
        _generalMacro = "I_BlackOrder_Plane_Fighter_04_AA_F";
        scope = 1;
        scopeCurator = 2;
        side = 2;
        faction = "IND_BlackOrder_F";

        crew = "I_BlackOrder_FighterPilot_F";
        typicalCargo[] = {"I_BlackOrder_FighterPilot_F"};
    };
    class O_BlackOrder_Plane_Fighter_04_AA_F;
    class I_BlackOrder_Plane_Fighter_04_AA_F : O_BlackOrder_Plane_Fighter_04_AA_F {
        _generalMacro = "I_BlackOrder_Plane_Fighter_04_AA_F";
        scope = 1;
        scopeCurator = 2;
        side = 2;
        faction = "IND_BlackOrder_F";

        crew = "I_BlackOrder_FighterPilot_F";
        typicalCargo[] = {"I_BlackOrder_FighterPilot_F"};
    };
    class O_BlackOrder_Plane_Fighter_04_CAS_F;
    class I_BlackOrder_Plane_Fighter_04_CAS_F : O_BlackOrder_Plane_Fighter_04_CAS_F {
        _generalMacro = "I_BlackOrder_Plane_Fighter_04_CAS_F";
        scope = 1;
        scopeCurator = 2;
        side = 2;
        faction = "IND_BlackOrder_F";

        crew = "I_BlackOrder_FighterPilot_F";
        typicalCargo[] = {"I_BlackOrder_FighterPilot_F"};
    };

    class O_RHS_C130J_BlackOrder_F;
    class I_RHS_C130J_BlackOrder_F : O_RHS_C130J_BlackOrder_F {
        _generalMacro = "I_RHS_C130J_BlackOrder_F";
        scope = 2;
        scopeCurator = 2;
        side = 2;
        faction = "IND_BlackOrder_F";

        crew = "I_BlackOrder_Pilot_F";
        typicalCargo[] = {"I_BlackOrder_Pilot_F"};
    };
};
