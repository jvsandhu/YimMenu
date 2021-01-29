#pragma once
#include "fwddec.hpp"

#pragma pack(push, 1)
// Created with ReClass.NET 1.2 by KN4CK3R

class CPedFactory
{
public:
	char pad_0000[8]; //0x0000
	class CPed* m_local_ped; //0x0008
}; //Size: 0x0010
static_assert(sizeof(CPedFactory) == 0x10);

class CPed
{
public:
	char pad_0000[32]; //0x0000
	class CPedModelInfo* m_ped_model_info; //0x0020
	uint8_t m_entity_type; //0x0028
	char pad_0029[3]; //0x0029
	uint8_t m_invisible; //0x002C
	char pad_002D[1]; //0x002D
	uint8_t m_freeze_momentum; //0x002E
	char pad_002F[97]; //0x002F
	rage::vector3 m_position; //0x0090
	char pad_009C[237]; //0x009C
	uint8_t m_godmode; //0x0189
	char pad_018A[246]; //0x018A
	float m_health; //0x0280
	char pad_0284[28]; //0x0284
	float m_maxhealth; //0x02A0
	char pad_02A4[124]; //0x02A4
	rage::vector3 m_velocity; //0x0320
	char pad_032C[2564]; //0x032C
	class CAutomobile* m_vehicle; //0x0D30
	char pad_0D38[896]; //0x0D38
	uint8_t m_ragdoll; //0x10B8
	char pad_10B9[15]; //0x10B9
	class CPlayerInfo* m_player_info; //0x10C8
	char pad_10D0[8]; //0x10D0
	class CPedWeaponManager* m_weapon_manager; //0x10D8
	char pad_10E0[919]; //0x10E0
	uint8_t m_in_vehicle; //0x1477
	char pad_1478[104]; //0x1478
	float m_armor; //0x14E0
}; //Size: 0x14E4
static_assert(sizeof(CPed) == 0x14E4);

class CAutomobile
{
public:
	char pad_0000[393]; //0x0000
	uint8_t m_godmode; //0x0189
	char pad_018A[1722]; //0x018A
	float m_health; //0x0844
	char pad_0848[192]; //0x0848
	float m_health2; //0x0908
	char pad_090C[44]; //0x090C
	class CHandlingData* m_handling; //0x0938
	char pad_0940[688]; //0x0940
	class WheelArray* m_wheels; //0x0BF0
	char pad_0BF8[100]; //0x0BF8
	float m_gravity; //0x0C5C
}; //Size: 0x0C60
static_assert(sizeof(CAutomobile) == 0xC60);

class CPlayerInfo
{
public:
	char pad_0000[52]; //0x0000
	uint32_t m_internal_ip; //0x0034
	uint16_t m_internal_port; //0x0038
	char pad_003A[2]; //0x003A
	uint32_t m_relay_ip; //0x003C
	uint16_t m_relay_port; //0x0040
	char pad_0042[2]; //0x0042
	uint32_t m_external_ip; //0x0044
	uint16_t m_external_port; //0x0048
	char pad_004A[38]; //0x004A
	uint64_t m_rockstar_id; //0x0070
	char pad_0078[12]; //0x0078
	char m_name[20]; //0x0084
	char pad_0098[180]; //0x0098
	float m_swim_speed; //0x014C
	float m_run_speed; //0x0150
	char pad_0154[81]; //0x0154
	bool m_is_rockstar_dev; //0x01A5
	char pad_01A6[1]; //0x01A6
	bool m_is_cheater; //0x01A7
	char pad_01A8[11]; //0x01A8
	bool m_is_online; //0x01B3
	char pad_01B4[20]; //0x01B4
	class CPed* m_ped; //0x01C8
	char pad_01D0[40]; //0x01D0
	uint32_t m_frame_flags; //0x01F8
	char pad_01FC[28]; //0x01FC
	uint32_t m_player_controls; //0x0218
	char pad_021C[1588]; //0x021C
	uint32_t m_npc_ignore; //0x0850
	char pad_0854[12]; //0x0854
	bool m_is_wanted; //0x0860
	char pad_0861[3]; //0x0861
	int8_t m_wanted_level_display; //0x0864
	char pad_0865[3]; //0x0865
	int8_t m_wanted_level; //0x0868
	char pad_0869[1131]; //0x0869
	float m_stamina; //0x0CD4
	float m_max_stamina; //0x0CD8
}; //Size: 0x0CDC
static_assert(sizeof(CPlayerInfo) == 0xCDC);

class CPedWeaponManager
{
public:
	char pad_0000[32]; //0x0000
	class CWeaponInfo* m_weapon_info; //0x0020
	char pad_0028[152]; //0x0028
}; //Size: 0x00C0
static_assert(sizeof(CPedWeaponManager) == 0xC0);

class CHandlingData
{
public:
	char pad_0000[8]; //0x0000
	uint32_t m_name_hash; //0x0008
	float m_mass; //0x000C
	float m_initial_drag_coeff; //0x0010
	float m_downforce_modifier; //0x0014
	float m_popup_light_rotation; //0x0018
	char pad_001C[4]; //0x001C
	rage::vector3 m_centre_of_mass; //0x0020
	char pad_002C[4]; //0x002C
	rage::vector3 m_inertia_multiplier; //0x0030
	char pad_003C[4]; //0x003C
	float m_buoyancy; //0x0040
	float m_drive_bias_rear; //0x0044
	float m_drive_bias_front; //0x0048
	float m_acceleration; //0x004C
	uint8_t m_initial_drive_gears; //0x0050
	char pad_0051[3]; //0x0051
	float m_drive_inertia; //0x0054
	float m_upshift; //0x0058
	float m_downshift; //0x005C
	float m_initial_drive_force; //0x0060
	float m_drive_max_flat_vel; //0x0064
	float m_initial_drive_max_flat_vel; //0x0068
	float m_brake_force; //0x006C
	char pad_0070[4]; //0x0070
	float m_brake_bias_front; //0x0074
	float m_brake_bias_rear; //0x0078
	float m_handbrake_force; //0x007C
	float m_steering_lock; //0x0080
	float m_steering_lock_ratio; //0x0084
	float m_traction_curve_max; //0x0088
	float m_traction_curve_lateral; //0x008C
	float m_traction_curve_min; //0x0090
	float m_traction_curve_ratio; //0x0094
	char pad_0098[8]; //0x0098
	float m_traction_spring_delta_max; //0x00A0
	char pad_00A4[4]; //0x00A4
	float m_low_speed_traction_loss_mult; //0x00A8
	float m_camber_stiffness; //0x00AC
	float m_traction_bias_front; //0x00B0
	char pad_00B4[4]; //0x00B4
	float m_traction_loss_mult; //0x00B8
	float m_suspension_force; //0x00BC
	float m_suspension_comp_damp; //0x00C0
	float m_suspension_rebound_damp; //0x00C4
	float m_suspension_upper_limit; //0x00C8
	float m_suspension_lower_limit; //0x00CC
	float m_suspension_raise; //0x00D0
	float m_suspension_bias_front; //0x00D4
	float m_suspension_bias_rear; //0x00D8
	float m_anti_rollbar_force; //0x00DC
	float m_anti_rollbar_bias_front; //0x00E0
	float m_anti_rollbar_bias_rear; //0x00E4
	float m_roll_centre_height_front; //0x00E8
	float m_roll_centre_height_rear; //0x00EC
	float m_collision_damage_mult; //0x00F0
	float m_weapon_damamge_mult; //0x00F4
	float m_deformation_mult; //0x00F8
	float m_engine_damage_mult; //0x00FC
	float m_petrol_tank_volume; //0x0100
	float m_oil_volume; //0x0104
	char pad_0108[4]; //0x0108
	rage::vector3 m_seat_index_dist; //0x010C
	uint32_t m_monetary_value; //0x0118
	char pad_011C[8]; //0x011C
	uint32_t m_str_model_flags; //0x0124
	uint32_t m_str_handling_flags; //0x0128
	uint32_t m_str_damage_flags; //0x012C
	char pad_0130[12]; //0x0130
	uint32_t m_ai_handling_hash; //0x013C
	char pad_0140[208]; //0x0140
}; //Size: 0x0210
static_assert(sizeof(CHandlingData) == 0x210);

class CWeaponInfo
{
public:
	char pad_0000[376]; //0x0000
}; //Size: 0x0178
static_assert(sizeof(CWeaponInfo) == 0x178);

class CPedModelInfo
{
public:
	char pad_0000[96]; //0x0000
}; //Size: 0x0060
static_assert(sizeof(CPedModelInfo) == 0x60);

class WheelArray
{
public:
	class CWheel* m_wheel1; //0x0000
	class CWheel* m_wheel2; //0x0008
	class CWheel* m_wheel3; //0x0010
	class CWheel* m_wheel4; //0x0018
	char pad_0020[88]; //0x0020
}; //Size: 0x0078
static_assert(sizeof(WheelArray) == 0x78);

class CWheel
{
public:
	char pad_0000[8]; //0x0000
	float m_camber; //0x0008
	float m_camber_inverted; //0x000C
	char pad_0010[552]; //0x0010
}; //Size: 0x0238
static_assert(sizeof(CWheel) == 0x238);
#pragma pack(pop)