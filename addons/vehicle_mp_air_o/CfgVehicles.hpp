
class CfgVehicles {
    class O_RHS_UH60M2_BlackOrder_F;
    class O_RHS_UH60M2_BlackOrderSci_F : O_RHS_UH60M2_BlackOrder_F {
        _generalMacro = "O_RHS_UH60M2_BlackOrderSci_F";
        scope = 2;
        scopeCurator = 2;
        //displayName = CSTRING(UH60M_BlackOrder_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOEF(vehicle_air,EditorPreviews\O_RHS_UH60M2_BlackOrder_F.jpg);

        faction = "OPF_BlackOrder_MP_F";
        side = 0;

        crew = "O_BlackOrder_HeliPilot_F";
        typicalCargo[] = {"O_BlackOrder_HeliCrew_F"};

        class TransportBackpacks {};
        class TransportItems {};
        class TransportMagazines {};
        class TransportWeapons {};
    };
};
