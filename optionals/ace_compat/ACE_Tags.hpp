class ACE_Tags {
    class blackorder_progaganda_tagging_black {
        displayName = CSTRING(propaganda_black);
        requiredItem = "ACE_SpraypaintBlack";
        condition = QUOTE(faction player in [ARR_6('OPF_BlackOrder_F','OPF_BlackOrder_SCI_F','OPF_BlackOrder_MP_F','IND_BlackOrder_F','IND_BlackOrder_SCI_F','IND_BlackOrder_MP_F')]);
        textures[] = {
            QPATHTOF(data\tagging\black_00_ca.paa),
            QPATHTOF(data\tagging\black_01_ca.paa),
            QPATHTOF(data\tagging\black_02_ca.paa)
        };
        icon = QPATHTOF(UI\icon_tagging_black_ca.paa);
    };
    class blackorder_progaganda_tagging_blue {
        displayName = CSTRING(propaganda_blue);
        requiredItem = "ACE_SpraypaintBlue";
        condition = QUOTE(faction player in [ARR_6('OPF_BlackOrder_F','OPF_BlackOrder_SCI_F','OPF_BlackOrder_MP_F','IND_BlackOrder_F','IND_BlackOrder_SCI_F','IND_BlackOrder_MP_F')]);
        textures[] = {
            QPATHTOF(data\tagging\blue_00_ca.paa),
            QPATHTOF(data\tagging\blue_01_ca.paa),
            QPATHTOF(data\tagging\blue_02_ca.paa)
        };
        icon = QPATHTOF(UI\icon_tagging_blue_ca.paa);
    };
    class blackorder_progaganda_tagging_green {
        displayName = CSTRING(propaganda_green);
        requiredItem = "ACE_SpraypaintGreen";
        condition = QUOTE(faction player in [ARR_6('OPF_BlackOrder_F','OPF_BlackOrder_SCI_F','OPF_BlackOrder_MP_F','IND_BlackOrder_F','IND_BlackOrder_SCI_F','IND_BlackOrder_MP_F')]);
        textures[] = {
            QPATHTOF(data\tagging\green_00_ca.paa),
            QPATHTOF(data\tagging\green_01_ca.paa),
            QPATHTOF(data\tagging\green_02_ca.paa)
        };
        icon = QPATHTOF(UI\icon_tagging_green_ca.paa);
    };
    class blackorder_progaganda_tagging_red {
        displayName = CSTRING(propaganda_red);
        requiredItem = "ACE_SpraypaintRed";
        condition = QUOTE(faction player in [ARR_6('OPF_BlackOrder_F','OPF_BlackOrder_SCI_F','OPF_BlackOrder_MP_F','IND_BlackOrder_F','IND_BlackOrder_SCI_F','IND_BlackOrder_MP_F')]);
        textures[] = {
            QPATHTOF(data\tagging\red_00_ca.paa),
            QPATHTOF(data\tagging\red_01_ca.paa),
            QPATHTOF(data\tagging\red_02_ca.paa)
        };
        icon = QPATHTOF(UI\icon_tagging_red_ca.paa);
    };
};
