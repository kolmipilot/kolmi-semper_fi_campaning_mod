class CfgMagazines
{
    class Default {};
    class CA_Magazine: Default {};
    class 30Rnd_556x45_Stanag: CA_Magazine {};
	class rhs_mag_30Rnd_556x45_M855A1_Stanag: 30Rnd_556x45_Stanag {};
	class rhsusf_20Rnd_762x51_m118_special_Mag: CA_Magazine {};
	class rhsusf_20Rnd_762x51_SR25_m118_special_Mag: rhsusf_20Rnd_762x51_m118_special_Mag {};
	class rhsusf_50Rnd_762x51: CA_Magazine {};
	class rhsusf_50Rnd_762x51_m80a1epr: rhsusf_50Rnd_762x51 {};
	class rhsusf_100Rnd_762x51_m80a1epr: rhsusf_50Rnd_762x51_m80a1epr {};
	class rhsusf_50Rnd_762x51_m62_tracer: rhsusf_50Rnd_762x51 {};
	class rhsusf_100Rnd_762x51_m62_tracer: rhsusf_50Rnd_762x51_m62_tracer {};
	class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red: rhs_mag_30Rnd_556x45_M855A1_Stanag {};
	class rhs_mag_30Rnd_556x45_MK262_Stanag: rhs_mag_30Rnd_556x45_M855A1_Stanag {};
	class CIUSMC_M110_PMAG_20rnd: rhsusf_20Rnd_762x51_SR25_m118_special_Mag {};
	class CIUSMC_M110_PMAG_Tan_20rnd: CIUSMC_M110_PMAG_20rnd {};
	class 26th_CIUSMC_PMAG_BLK_556x45_M855A1: rhs_mag_30Rnd_556x45_M855A1_Stanag {};
	class 26th_CIUSMC_PMAG_TAN_556x45_M855A1: 26th_CIUSMC_PMAG_BLK_556x45_M855A1 {};
	class 26th_CIUSMC_PMAG_BLK_556x45_M856A1: rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {};
	class 26th_CIUSMC_PMAG_TAN_556x45_M856A1: 26th_CIUSMC_PMAG_BLK_556x45_M856A1 {};
	class 26th_CIUSMC_PMAG_BLK_556x45_MK262: rhs_mag_30Rnd_556x45_MK262_Stanag {};
	class 26th_CIUSMC_PMAG_TAN_556x45_MK262: 26th_CIUSMC_PMAG_BLK_556x45_MK262 {};
	class 26th_CIUSMC_PMAG_40_BLK_556x45_M856A1: rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {};
	class 26th_CIUSMC_PMAG_40_Tan_556x45_M856A1: rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {};
};
class CfgMagazineWells
{
	class STANAG_556x45
	{
		26th_CIUSMC_Magazines[]=
		{
			"26th_CIUSMC_PMAG_BLK_556x45_M855A1",
			"26th_CIUSMC_PMAG_TAN_556x45_M855A1",
			"26th_CIUSMC_PMAG_BLK_556x45_M856A1",
			"26th_CIUSMC_PMAG_TAN_556x45_M856A1",
			"26th_CIUSMC_PMAG_40_TAN_556x45_M856A1",
			"26th_CIUSMC_PMAG_40_BLK_556x45_M856A1",
			"26th_CIUSMC_PMAG_TAN_556x45_MK262",
			"26th_CIUSMC_PMAG_BLK_556x45_MK262"
		};
	};
	class STANAG_762x51
	{
		26th_CIUSMC_Magazines[]=
		{
			"CIUSMC_M110_PMAG_20rnd",
			"CIUSMC_M110_PMAG_Tan_20rnd"
		};
	};
};
class CfgWeapons
{
	class Default{};
	class RifleCore: Default {};

	//orginal mod fix, dont look at this
	//ignor error during loading
    class ItemInfo: RifleCore {
        scope = 1;          
        displayName = "";
        picture = "";
        model = "";
    };
	class InventoryItem_Base_F;
	class ItemCore: Default {};
	class InventoryFlashLightItem_Base_F: InventoryItem_Base_F {};
	class acc_pointer_IR: ItemCore {
		class ItemInfo: InventoryFlashLightItem_Base_F {};
	};
	class acc_flashlight: ItemCore {
		class ItemInfo: InventoryFlashLightItem_Base_F {};
	};
	class Optic_arco: ItemCore {};
	class CBA_MiscItem_ItemInfo: InventoryItem_Base_F {};
	class CBA_MiscItem: ItemCore {
		class ItemInfo: CBA_MiscItem_ItemInfo {};
	};
	class CIUSMC_CNVDT: CBA_MiscItem {};
	class 26th_CIUSMC_BASE_LASER: acc_pointer_IR {};
	class 26th_CIUSMC_BASE_IR_DUAL_LOW: acc_flashlight {};
	class 26th_CIUSMC_BASE_IR_DUAL_HIGH: acc_flashlight {};
	class 26th_CIUSMC_BASE_VIS_LIGHT: acc_flashlight {};
	class 26th_CIUSMC_416_DEVICE_1_LASER: 26th_CIUSMC_BASE_LASER {};
	class 26th_CIUSMC_416_DEVICE_1_IR_DUAL_LOW: 26th_CIUSMC_BASE_IR_DUAL_LOW {};
	class 26th_CIUSMC_416_DEVICE_1_IR_DUAL_HIGH: 26th_CIUSMC_BASE_IR_DUAL_HIGH {};
	class 26th_CIUSMC_416_DEVICE_1_VIS_LIGHT: 26th_CIUSMC_BASE_VIS_LIGHT {};
	class 26th_CIUSMC_416_DEVICE_2_LASER: 26th_CIUSMC_BASE_LASER {};
	class 26th_CIUSMC_416_DEVICE_2_IR_DUAL_LOW: 26th_CIUSMC_BASE_IR_DUAL_LOW {};
	class 26th_CIUSMC_416_DEVICE_2_IR_DUAL_HIGH: 26th_CIUSMC_BASE_IR_DUAL_HIGH {};
	class 26th_CIUSMC_416_DEVICE_2_VIS_LIGHT: 26th_CIUSMC_BASE_VIS_LIGHT {};
	class 26th_CIUSMC_416_DEVICE_3_LASER: 26th_CIUSMC_BASE_LASER {};
	class 26th_CIUSMC_416_DEVICE_3_IR_DUAL_LOW: 26th_CIUSMC_BASE_IR_DUAL_LOW {};
	class 26th_CIUSMC_416_DEVICE_3_IR_DUAL_HIGH: 26th_CIUSMC_BASE_IR_DUAL_HIGH {};
	class 26th_CIUSMC_416_DEVICE_3_VIS_LIGHT: 26th_CIUSMC_BASE_VIS_LIGHT {};
	class 26th_CIUSMC_4CON_DEVICE_1_LASER: 26th_CIUSMC_BASE_LASER {};
	class 26th_CIUSMC_4CON_DEVICE_1_IR_DUAL_LOW: 26th_CIUSMC_BASE_IR_DUAL_LOW {};
	class 26th_CIUSMC_4CON_DEVICE_1_IR_DUAL_HIGH: 26th_CIUSMC_BASE_IR_DUAL_HIGH {};
	class 26th_CIUSMC_4CON_DEVICE_1_VIS_LIGHT: 26th_CIUSMC_BASE_VIS_LIGHT {};
	class 26th_CIUSMC_4CON_DEVICE_2_LASER: 26th_CIUSMC_BASE_LASER {};
	class 26th_CIUSMC_4CON_DEVICE_2_IR_DUAL_LOW: 26th_CIUSMC_BASE_IR_DUAL_LOW {};
	class 26th_CIUSMC_4CON_DEVICE_2_IR_DUAL_HIGH: 26th_CIUSMC_BASE_IR_DUAL_HIGH {};
	class 26th_CIUSMC_4CON_DEVICE_2_VIS_LIGHT: 26th_CIUSMC_BASE_VIS_LIGHT {};
	class 26th_CIUSMC_4CON_DEVICE_3_LASER: 26th_CIUSMC_BASE_LASER {};
	class 26th_CIUSMC_4CON_DEVICE_3_IR_DUAL_LOW: 26th_CIUSMC_BASE_IR_DUAL_LOW {};
	class 26th_CIUSMC_4CON_DEVICE_3_IR_DUAL_HIGH: 26th_CIUSMC_BASE_IR_DUAL_HIGH {};
	class 26th_CIUSMC_4CON_DEVICE_3_VIS_LIGHT: 26th_CIUSMC_BASE_VIS_LIGHT {};
	class 26th_CIUSMC_4CON_DEVICE_4_LASER: 26th_CIUSMC_BASE_LASER {};
	class 26th_CIUSMC_4CON_DEVICE_4_IR_DUAL_LOW: 26th_CIUSMC_BASE_IR_DUAL_LOW {};
	class 26th_CIUSMC_4CON_DEVICE_4_IR_DUAL_HIGH: 26th_CIUSMC_BASE_IR_DUAL_HIGH {};
	class 26th_CIUSMC_4CON_DEVICE_4_VIS_LIGHT: 26th_CIUSMC_BASE_VIS_LIGHT {};
	class 26th_CIUSMC_4CON_DEVICE_5_LASER: 26th_CIUSMC_BASE_LASER {};
	class 26th_CIUSMC_4CON_DEVICE_5_IR_DUAL_LOW: 26th_CIUSMC_BASE_IR_DUAL_LOW {};
	class 26th_CIUSMC_4CON_DEVICE_5_IR_DUAL_HIGH: 26th_CIUSMC_BASE_IR_DUAL_HIGH {};
	class 26th_CIUSMC_4CON_DEVICE_5_VIS_LIGHT: 26th_CIUSMC_BASE_VIS_LIGHT {};
	class 26th_CIUSMC_4CON_DEVICE_6_LASER: 26th_CIUSMC_BASE_LASER {};
	class 26th_CIUSMC_4CON_DEVICE_6_IR_DUAL_LOW: 26th_CIUSMC_BASE_IR_DUAL_LOW {};
	class 26th_CIUSMC_4CON_DEVICE_6_IR_DUAL_HIGH: 26th_CIUSMC_BASE_IR_DUAL_HIGH {};
	class 26th_CIUSMC_4CON_DEVICE_6_VIS_LIGHT: 26th_CIUSMC_BASE_VIS_LIGHT {};
	class 26th_CIUSMC_M110_DEVICE_1_LASER: 26th_CIUSMC_BASE_LASER {};
	class 26th_CIUSMC_M110_DEVICE_1_IR_DUAL_LOW: 26th_CIUSMC_BASE_IR_DUAL_LOW {};
	class 26th_CIUSMC_M110_DEVICE_1_IR_DUAL_HIGH: 26th_CIUSMC_BASE_IR_DUAL_HIGH {};
	class 26th_CIUSMC_M110_DEVICE_1_VIS_LIGHT: 26th_CIUSMC_BASE_VIS_LIGHT {};
	class 26th_CIUSMC_M240L_DEVICE_1_LASER: 26th_CIUSMC_BASE_LASER{};
	class 26th_CIUSMC_M240L_DEVICE_1_IR_DUAL_LOW: 26th_CIUSMC_BASE_IR_DUAL_LOW {};
	class 26th_CIUSMC_M240L_DEVICE_1_IR_DUAL_HIGH: 26th_CIUSMC_BASE_IR_DUAL_HIGH {};
	class 26th_CIUSMC_M240L_DEVICE_1_VIS_LIGHT: 26th_CIUSMC_BASE_VIS_LIGHT {};
	class 26th_CIUSMC_M110_DEVICE_2_LASER: 26th_CIUSMC_BASE_LASER {};
	class 26th_CIUSMC_M38_DEVICE_1_LASER: 26th_CIUSMC_BASE_LASER {};
	class 26th_CIUSMC_M38_DEVICE_1_IR_DUAL_LOW: 26th_CIUSMC_BASE_IR_DUAL_LOW {};
	class 26th_CIUSMC_M38_DEVICE_1_IR_DUAL_HIGH: 26th_CIUSMC_BASE_IR_DUAL_HIGH{};
	class 26th_CIUSMC_M38_DEVICE_1_VIS_LIGHT: 26th_CIUSMC_BASE_VIS_LIGHT {};
	class InventoryUnderItem_Base_F: InventoryItem_Base_F {};
	class bipod_01_F_snd: ItemCore {};
	class bipod_01_F_blk: bipod_01_F_snd {
		class ItemInfo: InventoryUnderItem_Base_F {};
	};
	class CIUSMC_HARRIS: bipod_01_F_blk {};
	class InventoryOpticsItem_Base_F: InventoryItem_Base_F {};
	class CIUSMC_SU230B: ItemCore {};
	class CIUSMC_Leupold_MK4: ItemCore {};
	class CIUSMC_Leupold_MK4_CNVDT: ItemCore {};
	class CIUSMC_Optic_TS30A2: ItemCore {};
	class CIUSMC_Optic_TS30A2_CNVDT: ItemCore {};
	class CIUSMC_optic_VCOG: ItemCore {};
	class CIUSMC_EXPS: ItemCore {};
	class CIUSMC_G33_EXPS_DOWN: ItemCore {};
	class CIUSMC_G33_EXPS_UP: ItemCore {};
	class InventoryMuzzleItem_Base_F: InventoryItem_Base_F {};
	class muzzle_snds_H: ItemCore {
		class ItemInfo: InventoryMuzzleItem_Base_F {};
	};
	class 26th_CIUSMC_SUPPRESSOR_BASE: muzzle_snds_H {};
	class 26th_CIUSMC_RC_WRAPPED_TAN: 26th_CIUSMC_SUPPRESSOR_BASE {};
	class 26th_CIUSMC_RC_WRAPPED_MC: 26th_CIUSMC_SUPPRESSOR_BASE {};
	class 26th_CIUSMC_SOCOM_RC2_TAN: 26th_CIUSMC_SUPPRESSOR_BASE {};
	class 26th_CIUSMC_SOCOM_RC2_BLK: 26th_CIUSMC_SUPPRESSOR_BASE {};
	class 26th_CIUSMC_M110_SUPPRESSOR: 26th_CIUSMC_SUPPRESSOR_BASE {};

	#include "CfgVest.hpp"
	#include "CfgHeadgear.hpp"

};
