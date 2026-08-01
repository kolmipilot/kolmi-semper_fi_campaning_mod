#define USMC_VEST_MEDIUM(VestClass,BaseClass) \
class VestClass: BaseClass { \
    class ItemInfo: VestItem { \
        class HitpointsProtectionInfo \
        { \
            class Neck \
            { \
                hitpointName = "HitNeck"; \
                armor = 2; \
                passThrough = 0.5; \
                simulation = ""; \
            }; \
            class Chest \
            { \
                hitpointName = "HitChest"; \
                armor = 20; \
                passThrough = 0.5; \
                simulation = ""; \
            }; \
            class Arms \
            { \
                hitpointName = "HitArms"; \
                armor = 0; \
                passThrough = 1; \
                simulation = ""; \
            }; \
            class Diaphragm \
            { \
                hitpointName = "HitDiaphragm"; \
                armor = 20; \
                passThrough = 0.5; \
                simulation = ""; \
            }; \
            class Abdomen \
            { \
                hitpointName = "HitAbdomen"; \
                armor = 20; \
                passThrough = 0.4; \
                simulation = ""; \
            }; \
            class Pelvis \
            { \
                hitpointName = "HitPelvis"; \
                armor = 12; \
                passThrough = 0.4; \
                simulation = ""; \
            }; \
            class Body \
            { \
                hitpointName = "HitBody"; \
                passThrough = 0.6; \
                simulation = ""; \
            }; \
        }; \
    }; \
}

#define RHS_VEST_MEDIUM(VestClass,BaseClass) \
class VestClass: BaseClass { \
    class ItemInfo: ItemInfo { \
        class HitpointsProtectionInfo \
        { \
            class Neck \
            { \
                hitpointName = "HitNeck"; \
                armor = 2; \
                passThrough = 0.5; \
                simulation = ""; \
            }; \
            class Chest \
            { \
                hitpointName = "HitChest"; \
                armor = 20; \
                passThrough = 0.5; \
                simulation = ""; \
            }; \
            class Arms \
            { \
                hitpointName = "HitArms"; \
                armor = 0; \
                passThrough = 1; \
                simulation = ""; \
            }; \
            class Diaphragm \
            { \
                hitpointName = "HitDiaphragm"; \
                armor = 20; \
                passThrough = 0.5; \
                simulation = ""; \
            }; \
            class Abdomen \
            { \
                hitpointName = "HitAbdomen"; \
                armor = 20; \
                passThrough = 0.4; \
                simulation = ""; \
            }; \
            class Pelvis \
            { \
                hitpointName = "HitPelvis"; \
                armor = 12; \
                passThrough = 0.4; \
                simulation = ""; \
            }; \
            class Body \
            { \
                hitpointName = "HitBody"; \
                passThrough = 0.6; \
                simulation = ""; \
            }; \
        }; \
    }; \
}
	
	class UniformItem: InventoryItem_Base_F {};
	class Uniform_Base: ItemCore {
		class ItemInfo: UniformItem {};
	};
	class VestItem: InventoryItem_Base_F {};
	USMC_VEST_MEDIUM(CIUSMC_PCG3_Alpha_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_PCG3_Alpha,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_PCG3_Alpha_ATAK_NB,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_PCG3_Alpha_NB,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_PCG3_Alpha_Belt,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_PCG3_Bravo_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_PCG3_Bravo,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_PCG3_Bravo_ATAK_NB,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_PCG3_Bravo_NB,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_PCG3_Bravo_Belt,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_PCG3_Charlie_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_PCG3_Charlie,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_PCG3_Charlie_ATAK_NB,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_PCG3_Charlie_NB,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_PCG3_Charlie_Belt,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_PCG3_Delta_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_PCG3_Delta,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_PCG3_Delta_ATAK_NB,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_PCG3_Delta_NB,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_PCG3_Delta_Belt,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_PCG3_Echo_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_PCG3_Echo,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_PCG3_Echo_ATAK_NB,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_PCG3_Echo_NB,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_PCG3_Echo_Belt,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_PCG3_Foxtrot_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_PCG3_Foxtrot,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_PCG3_Foxtrot_ATAK_NB,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_PCG3_Foxtrot_NB,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_PCG3_Foxtrot_Belt,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_PCG3_Golf_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_PCG3_Golf,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_PCG3_Golf_ATAK_NB,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_PCG3_Golf_NB,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_PCG3_Golf_Belt,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_PCG3_Hotel_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_PCG3_Hotel,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_PCG3_Hotel_ATAK_NB,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_PCG3_Hotel_NB,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_PCG3_Hotel_Belt,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_1,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_1_NB,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_1_P,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_1_P_NB,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_1_Belt,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_1_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_1_NB_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_1_P_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_1_P_NB_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_1_Belt_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_2,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_2_NB,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_2_P,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_2_P_NB,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_2_Belt,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_2_NB_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_2_P_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_2_P_NB_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_2_Belt_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_3,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_3_NB,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_3_P,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_3_P_NB,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_3_Belt,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_3_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_3_NB_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_3_P_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_3_P_NB_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_3_Belt_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_4,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_4_NB,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_4_P,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_4_P_NB,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_4_Belt,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_4_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_4_NB_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_4_P_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_4_P_NB_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_4_Belt_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_5,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_5_NB,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_5_P,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_5_P_NB,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_5_Belt,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_5_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_5_NB_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_5_P_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_5_P_NB_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_5_Belt_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_6,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_6_NB,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_6_P,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_6_P_NB,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_6_Belt,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_6_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_6_NB_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_6_P_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_6_P_NB_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_6_Belt_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_7,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_7_NB,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_7_P,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_7_P_NB,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_7_Belt,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_7_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_7_NB_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_7_P_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_7_P_NB_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_7_Belt_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_8,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_8_NB,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_8_P,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_8_P_NB,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_8_Belt,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_8_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_8_NB_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_8_P_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_8_P_NB_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_JPC_8_Belt_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_1,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_1_NB,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_1_Belt,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_1_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_1_NB_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_1_Belt_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_2,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_2_NB,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_2_Belt,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_2_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_2_NB_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_2_Belt_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_3,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_3_NB,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_3_Belt,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_3_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_3_NB_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_3_Belt_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_4,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_4_NB,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_4_Belt,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_4_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_4_NB_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_4_Belt_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_5,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_5_NB,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_5_Belt,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_5_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_5_NB_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_5_Belt_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_6,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_6_NB,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_6_Belt,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_6_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_6_NB_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_6_Belt_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_7,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_7_NB,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_7_Belt,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_7_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_7_NB_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_7_Belt_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_8,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_8_NB,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_8_Belt,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_8_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_8_NB_ATAK,ItemCore);
	USMC_VEST_MEDIUM(CIUSMC_ARC_8_Belt_ATAK,ItemCore);


class Vest_Camo_Base: ItemCore
{
    class ItemInfo: VestItem {};
};

RHS_VEST_MEDIUM(rhsusf_iotv_ocp_base,Vest_Camo_Base);
RHS_VEST_MEDIUM(rhsusf_spc,rhsusf_iotv_ocp_base);
RHS_VEST_MEDIUM(rhsusf_spc_rifleman,rhsusf_spc);
RHS_VEST_MEDIUM(rhsusf_spc_iar,rhsusf_spc_rifleman);
RHS_VEST_MEDIUM(rhsusf_spc_corpsman,rhsusf_spc_rifleman);
RHS_VEST_MEDIUM(rhsusf_spc_crewman,rhsusf_spc_rifleman);
RHS_VEST_MEDIUM(rhsusf_spc_light,rhsusf_spc_rifleman);
RHS_VEST_MEDIUM(rhsusf_spc_marksman,rhsusf_spc_rifleman);
RHS_VEST_MEDIUM(rhsusf_spc_mg,rhsusf_spc_rifleman);
RHS_VEST_MEDIUM(rhsusf_spc_sniper,rhsusf_spc_rifleman);
RHS_VEST_MEDIUM(rhsusf_spc_squadleader,rhsusf_spc_rifleman);
RHS_VEST_MEDIUM(rhsusf_spc_teamleader,rhsusf_spc_rifleman);
RHS_VEST_MEDIUM(rhsusf_spc_patchless,rhsusf_spc_light);
RHS_VEST_MEDIUM(rhsusf_spc_patchless_radio,rhsusf_spc_squadleader);
RHS_VEST_MEDIUM(rhsusf_spcs_ocp,rhsusf_iotv_ocp_base);
RHS_VEST_MEDIUM(rhsusf_spcs_ocp_squadleader,rhsusf_spcs_ocp);
RHS_VEST_MEDIUM(rhsusf_spcs_ocp_teamleader,rhsusf_spcs_ocp);
RHS_VEST_MEDIUM(rhsusf_spcs_ocp_teamleader_alt,rhsusf_spcs_ocp);
RHS_VEST_MEDIUM(rhsusf_spcs_ocp_saw,rhsusf_spcs_ocp);
RHS_VEST_MEDIUM(rhsusf_spcs_ocp_grenadier,rhsusf_spcs_ocp);
RHS_VEST_MEDIUM(rhsusf_spcs_ocp_rifleman,rhsusf_spcs_ocp);
RHS_VEST_MEDIUM(rhsusf_spcs_ocp_rifleman_alt,rhsusf_spcs_ocp);
RHS_VEST_MEDIUM(rhsusf_spcs_ocp_medic,rhsusf_spcs_ocp);
RHS_VEST_MEDIUM(rhsusf_spcs_ocp_crewman,rhsusf_spcs_ocp);
RHS_VEST_MEDIUM(rhsusf_spcs_ocp_machinegunner,rhsusf_spcs_ocp);
RHS_VEST_MEDIUM(rhsusf_spcs_ocp_sniper,rhsusf_spcs_ocp);
RHS_VEST_MEDIUM(rhsusf_spcs_ucp,rhsusf_spcs_ocp);
RHS_VEST_MEDIUM(rhsusf_spcs_ucp_squadleader,rhsusf_spcs_ocp_squadleader);
RHS_VEST_MEDIUM(rhsusf_spcs_ucp_teamleader,rhsusf_spcs_ocp_teamleader);
RHS_VEST_MEDIUM(rhsusf_spcs_ucp_teamleader_alt,rhsusf_spcs_ocp_teamleader_alt);
RHS_VEST_MEDIUM(rhsusf_spcs_ucp_saw,rhsusf_spcs_ocp_saw);
RHS_VEST_MEDIUM(rhsusf_spcs_ucp_grenadier,rhsusf_spcs_ocp_grenadier);
RHS_VEST_MEDIUM(rhsusf_spcs_ucp_rifleman,rhsusf_spcs_ocp_rifleman);
RHS_VEST_MEDIUM(rhsusf_spcs_ucp_rifleman_alt,rhsusf_spcs_ocp_rifleman_alt);
RHS_VEST_MEDIUM(rhsusf_spcs_ucp_medic,rhsusf_spcs_ocp_medic);
RHS_VEST_MEDIUM(rhsusf_spcs_ucp_crewman,rhsusf_spcs_ocp_crewman);
RHS_VEST_MEDIUM(rhsusf_spcs_ucp_machinegunner,rhsusf_spcs_ocp_machinegunner);
RHS_VEST_MEDIUM(rhsusf_spcs_ucp_sniper,rhsusf_spcs_ocp_sniper);
