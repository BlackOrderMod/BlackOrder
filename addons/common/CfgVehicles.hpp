
class CfgVehicles {
    class FlagCarrier;
    class FlagChecked_F;
    class Banner_01_base_F;

    class blackorder_flag_F : FlagCarrier {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(flag_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\blackorder_flag_F.jpg);

        class EventHandlers {
            init = (_this select 0) setFlagTexture QPATHTOF(data\flag_blackorder_co.paa);
        };
    };
    class blackorder_flagsmall_F : FlagChecked_F {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(flagsmall_Display);
        author = CSTRING(BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\blackorder_flagsmall_F.jpg);

        class EventHandlers {
            init = (_this select 0) setFlagTexture QPATHTOF(data\flag_blackordersmall_co.paa);
        };
    };
    class blackorder_banner_F : Banner_01_base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(banner_Display);
        author = CSTRING(BlackOrderTeam);
        editorPreview = QPATHTOF(EditorPreviews\blackorder_banner_F.jpg);

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\flag_blackorder_co.paa)
        };
    };
};
