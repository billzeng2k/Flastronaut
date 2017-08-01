#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.SpriteRenderer[]
struct SpriteRendererU5BU5D_t1098056643;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PC
struct  PC_t1669513981  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform PC::arm
	Transform_t3275118058 * ___arm_2;
	// UnityEngine.GameObject PC::lightSource
	GameObject_t1756533147 * ___lightSource_3;
	// UnityEngine.Animator PC::anim
	Animator_t69676727 * ___anim_4;
	// UnityEngine.RectTransform PC::energyBar
	RectTransform_t3349966182 * ___energyBar_5;
	// UnityEngine.Rigidbody2D PC::body
	Rigidbody2D_t502193897 * ___body_6;
	// UnityEngine.GameObject PC::flashLight
	GameObject_t1756533147 * ___flashLight_7;
	// UnityEngine.SpriteRenderer[] PC::parts
	SpriteRendererU5BU5D_t1098056643* ___parts_8;
	// UnityEngine.AudioSource PC::click
	AudioSource_t1135106623 * ___click_9;
	// System.Boolean PC::grounded
	bool ___grounded_10;
	// System.Boolean PC::lightOn
	bool ___lightOn_11;
	// System.Boolean PC::stayOn
	bool ___stayOn_12;
	// System.Int32 PC::speed
	int32_t ___speed_13;
	// System.Single PC::energy
	float ___energy_14;
	// System.Single PC::intensity
	float ___intensity_15;
	// System.Single PC::chargeTime
	float ___chargeTime_16;
	// System.Single PC::notHit
	float ___notHit_17;
	// System.Boolean PC::sT
	bool ___sT_18;
	// System.Boolean PC::cT
	bool ___cT_19;

public:
	inline static int32_t get_offset_of_arm_2() { return static_cast<int32_t>(offsetof(PC_t1669513981, ___arm_2)); }
	inline Transform_t3275118058 * get_arm_2() const { return ___arm_2; }
	inline Transform_t3275118058 ** get_address_of_arm_2() { return &___arm_2; }
	inline void set_arm_2(Transform_t3275118058 * value)
	{
		___arm_2 = value;
		Il2CppCodeGenWriteBarrier(&___arm_2, value);
	}

	inline static int32_t get_offset_of_lightSource_3() { return static_cast<int32_t>(offsetof(PC_t1669513981, ___lightSource_3)); }
	inline GameObject_t1756533147 * get_lightSource_3() const { return ___lightSource_3; }
	inline GameObject_t1756533147 ** get_address_of_lightSource_3() { return &___lightSource_3; }
	inline void set_lightSource_3(GameObject_t1756533147 * value)
	{
		___lightSource_3 = value;
		Il2CppCodeGenWriteBarrier(&___lightSource_3, value);
	}

	inline static int32_t get_offset_of_anim_4() { return static_cast<int32_t>(offsetof(PC_t1669513981, ___anim_4)); }
	inline Animator_t69676727 * get_anim_4() const { return ___anim_4; }
	inline Animator_t69676727 ** get_address_of_anim_4() { return &___anim_4; }
	inline void set_anim_4(Animator_t69676727 * value)
	{
		___anim_4 = value;
		Il2CppCodeGenWriteBarrier(&___anim_4, value);
	}

	inline static int32_t get_offset_of_energyBar_5() { return static_cast<int32_t>(offsetof(PC_t1669513981, ___energyBar_5)); }
	inline RectTransform_t3349966182 * get_energyBar_5() const { return ___energyBar_5; }
	inline RectTransform_t3349966182 ** get_address_of_energyBar_5() { return &___energyBar_5; }
	inline void set_energyBar_5(RectTransform_t3349966182 * value)
	{
		___energyBar_5 = value;
		Il2CppCodeGenWriteBarrier(&___energyBar_5, value);
	}

	inline static int32_t get_offset_of_body_6() { return static_cast<int32_t>(offsetof(PC_t1669513981, ___body_6)); }
	inline Rigidbody2D_t502193897 * get_body_6() const { return ___body_6; }
	inline Rigidbody2D_t502193897 ** get_address_of_body_6() { return &___body_6; }
	inline void set_body_6(Rigidbody2D_t502193897 * value)
	{
		___body_6 = value;
		Il2CppCodeGenWriteBarrier(&___body_6, value);
	}

	inline static int32_t get_offset_of_flashLight_7() { return static_cast<int32_t>(offsetof(PC_t1669513981, ___flashLight_7)); }
	inline GameObject_t1756533147 * get_flashLight_7() const { return ___flashLight_7; }
	inline GameObject_t1756533147 ** get_address_of_flashLight_7() { return &___flashLight_7; }
	inline void set_flashLight_7(GameObject_t1756533147 * value)
	{
		___flashLight_7 = value;
		Il2CppCodeGenWriteBarrier(&___flashLight_7, value);
	}

	inline static int32_t get_offset_of_parts_8() { return static_cast<int32_t>(offsetof(PC_t1669513981, ___parts_8)); }
	inline SpriteRendererU5BU5D_t1098056643* get_parts_8() const { return ___parts_8; }
	inline SpriteRendererU5BU5D_t1098056643** get_address_of_parts_8() { return &___parts_8; }
	inline void set_parts_8(SpriteRendererU5BU5D_t1098056643* value)
	{
		___parts_8 = value;
		Il2CppCodeGenWriteBarrier(&___parts_8, value);
	}

	inline static int32_t get_offset_of_click_9() { return static_cast<int32_t>(offsetof(PC_t1669513981, ___click_9)); }
	inline AudioSource_t1135106623 * get_click_9() const { return ___click_9; }
	inline AudioSource_t1135106623 ** get_address_of_click_9() { return &___click_9; }
	inline void set_click_9(AudioSource_t1135106623 * value)
	{
		___click_9 = value;
		Il2CppCodeGenWriteBarrier(&___click_9, value);
	}

	inline static int32_t get_offset_of_grounded_10() { return static_cast<int32_t>(offsetof(PC_t1669513981, ___grounded_10)); }
	inline bool get_grounded_10() const { return ___grounded_10; }
	inline bool* get_address_of_grounded_10() { return &___grounded_10; }
	inline void set_grounded_10(bool value)
	{
		___grounded_10 = value;
	}

	inline static int32_t get_offset_of_lightOn_11() { return static_cast<int32_t>(offsetof(PC_t1669513981, ___lightOn_11)); }
	inline bool get_lightOn_11() const { return ___lightOn_11; }
	inline bool* get_address_of_lightOn_11() { return &___lightOn_11; }
	inline void set_lightOn_11(bool value)
	{
		___lightOn_11 = value;
	}

	inline static int32_t get_offset_of_stayOn_12() { return static_cast<int32_t>(offsetof(PC_t1669513981, ___stayOn_12)); }
	inline bool get_stayOn_12() const { return ___stayOn_12; }
	inline bool* get_address_of_stayOn_12() { return &___stayOn_12; }
	inline void set_stayOn_12(bool value)
	{
		___stayOn_12 = value;
	}

	inline static int32_t get_offset_of_speed_13() { return static_cast<int32_t>(offsetof(PC_t1669513981, ___speed_13)); }
	inline int32_t get_speed_13() const { return ___speed_13; }
	inline int32_t* get_address_of_speed_13() { return &___speed_13; }
	inline void set_speed_13(int32_t value)
	{
		___speed_13 = value;
	}

	inline static int32_t get_offset_of_energy_14() { return static_cast<int32_t>(offsetof(PC_t1669513981, ___energy_14)); }
	inline float get_energy_14() const { return ___energy_14; }
	inline float* get_address_of_energy_14() { return &___energy_14; }
	inline void set_energy_14(float value)
	{
		___energy_14 = value;
	}

	inline static int32_t get_offset_of_intensity_15() { return static_cast<int32_t>(offsetof(PC_t1669513981, ___intensity_15)); }
	inline float get_intensity_15() const { return ___intensity_15; }
	inline float* get_address_of_intensity_15() { return &___intensity_15; }
	inline void set_intensity_15(float value)
	{
		___intensity_15 = value;
	}

	inline static int32_t get_offset_of_chargeTime_16() { return static_cast<int32_t>(offsetof(PC_t1669513981, ___chargeTime_16)); }
	inline float get_chargeTime_16() const { return ___chargeTime_16; }
	inline float* get_address_of_chargeTime_16() { return &___chargeTime_16; }
	inline void set_chargeTime_16(float value)
	{
		___chargeTime_16 = value;
	}

	inline static int32_t get_offset_of_notHit_17() { return static_cast<int32_t>(offsetof(PC_t1669513981, ___notHit_17)); }
	inline float get_notHit_17() const { return ___notHit_17; }
	inline float* get_address_of_notHit_17() { return &___notHit_17; }
	inline void set_notHit_17(float value)
	{
		___notHit_17 = value;
	}

	inline static int32_t get_offset_of_sT_18() { return static_cast<int32_t>(offsetof(PC_t1669513981, ___sT_18)); }
	inline bool get_sT_18() const { return ___sT_18; }
	inline bool* get_address_of_sT_18() { return &___sT_18; }
	inline void set_sT_18(bool value)
	{
		___sT_18 = value;
	}

	inline static int32_t get_offset_of_cT_19() { return static_cast<int32_t>(offsetof(PC_t1669513981, ___cT_19)); }
	inline bool get_cT_19() const { return ___cT_19; }
	inline bool* get_address_of_cT_19() { return &___cT_19; }
	inline void set_cT_19(bool value)
	{
		___cT_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
