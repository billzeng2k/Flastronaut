#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.SpriteRenderer[]
struct SpriteRendererU5BU5D_t1098056643;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t3535523695;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Coroutine
struct Coroutine_t2299508840;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AI
struct  AI_t2476083018  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject AI::player
	GameObject_t1756533147 * ___player_2;
	// UnityEngine.SpriteRenderer[] AI::parts
	SpriteRendererU5BU5D_t1098056643* ___parts_3;
	// System.Boolean AI::grounded
	bool ___grounded_4;
	// UnityEngine.Animator AI::anim
	Animator_t69676727 * ___anim_5;
	// UnityEngine.ParticleSystem AI::ps
	ParticleSystem_t3394631041 * ___ps_6;
	// UnityEngine.Rigidbody2D AI::body
	Rigidbody2D_t502193897 * ___body_7;
	// UnityEngine.Collider2D[] AI::colliders
	Collider2DU5BU5D_t3535523695* ___colliders_8;
	// UnityEngine.Transform AI::arm
	Transform_t3275118058 * ___arm_9;
	// UnityEngine.GameObject AI::antilight
	GameObject_t1756533147 * ___antilight_10;
	// System.Single AI::energy
	float ___energy_11;
	// System.Single AI::fadeTimer
	float ___fadeTimer_12;
	// System.Single AI::waitTime
	float ___waitTime_13;
	// System.Boolean AI::fading
	bool ___fading_14;
	// System.Boolean AI::lit
	bool ___lit_15;
	// System.Boolean AI::shining
	bool ___shining_16;
	// UnityEngine.Coroutine AI::shine
	Coroutine_t2299508840 * ___shine_17;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(AI_t2476083018, ___player_2)); }
	inline GameObject_t1756533147 * get_player_2() const { return ___player_2; }
	inline GameObject_t1756533147 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t1756533147 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_parts_3() { return static_cast<int32_t>(offsetof(AI_t2476083018, ___parts_3)); }
	inline SpriteRendererU5BU5D_t1098056643* get_parts_3() const { return ___parts_3; }
	inline SpriteRendererU5BU5D_t1098056643** get_address_of_parts_3() { return &___parts_3; }
	inline void set_parts_3(SpriteRendererU5BU5D_t1098056643* value)
	{
		___parts_3 = value;
		Il2CppCodeGenWriteBarrier(&___parts_3, value);
	}

	inline static int32_t get_offset_of_grounded_4() { return static_cast<int32_t>(offsetof(AI_t2476083018, ___grounded_4)); }
	inline bool get_grounded_4() const { return ___grounded_4; }
	inline bool* get_address_of_grounded_4() { return &___grounded_4; }
	inline void set_grounded_4(bool value)
	{
		___grounded_4 = value;
	}

	inline static int32_t get_offset_of_anim_5() { return static_cast<int32_t>(offsetof(AI_t2476083018, ___anim_5)); }
	inline Animator_t69676727 * get_anim_5() const { return ___anim_5; }
	inline Animator_t69676727 ** get_address_of_anim_5() { return &___anim_5; }
	inline void set_anim_5(Animator_t69676727 * value)
	{
		___anim_5 = value;
		Il2CppCodeGenWriteBarrier(&___anim_5, value);
	}

	inline static int32_t get_offset_of_ps_6() { return static_cast<int32_t>(offsetof(AI_t2476083018, ___ps_6)); }
	inline ParticleSystem_t3394631041 * get_ps_6() const { return ___ps_6; }
	inline ParticleSystem_t3394631041 ** get_address_of_ps_6() { return &___ps_6; }
	inline void set_ps_6(ParticleSystem_t3394631041 * value)
	{
		___ps_6 = value;
		Il2CppCodeGenWriteBarrier(&___ps_6, value);
	}

	inline static int32_t get_offset_of_body_7() { return static_cast<int32_t>(offsetof(AI_t2476083018, ___body_7)); }
	inline Rigidbody2D_t502193897 * get_body_7() const { return ___body_7; }
	inline Rigidbody2D_t502193897 ** get_address_of_body_7() { return &___body_7; }
	inline void set_body_7(Rigidbody2D_t502193897 * value)
	{
		___body_7 = value;
		Il2CppCodeGenWriteBarrier(&___body_7, value);
	}

	inline static int32_t get_offset_of_colliders_8() { return static_cast<int32_t>(offsetof(AI_t2476083018, ___colliders_8)); }
	inline Collider2DU5BU5D_t3535523695* get_colliders_8() const { return ___colliders_8; }
	inline Collider2DU5BU5D_t3535523695** get_address_of_colliders_8() { return &___colliders_8; }
	inline void set_colliders_8(Collider2DU5BU5D_t3535523695* value)
	{
		___colliders_8 = value;
		Il2CppCodeGenWriteBarrier(&___colliders_8, value);
	}

	inline static int32_t get_offset_of_arm_9() { return static_cast<int32_t>(offsetof(AI_t2476083018, ___arm_9)); }
	inline Transform_t3275118058 * get_arm_9() const { return ___arm_9; }
	inline Transform_t3275118058 ** get_address_of_arm_9() { return &___arm_9; }
	inline void set_arm_9(Transform_t3275118058 * value)
	{
		___arm_9 = value;
		Il2CppCodeGenWriteBarrier(&___arm_9, value);
	}

	inline static int32_t get_offset_of_antilight_10() { return static_cast<int32_t>(offsetof(AI_t2476083018, ___antilight_10)); }
	inline GameObject_t1756533147 * get_antilight_10() const { return ___antilight_10; }
	inline GameObject_t1756533147 ** get_address_of_antilight_10() { return &___antilight_10; }
	inline void set_antilight_10(GameObject_t1756533147 * value)
	{
		___antilight_10 = value;
		Il2CppCodeGenWriteBarrier(&___antilight_10, value);
	}

	inline static int32_t get_offset_of_energy_11() { return static_cast<int32_t>(offsetof(AI_t2476083018, ___energy_11)); }
	inline float get_energy_11() const { return ___energy_11; }
	inline float* get_address_of_energy_11() { return &___energy_11; }
	inline void set_energy_11(float value)
	{
		___energy_11 = value;
	}

	inline static int32_t get_offset_of_fadeTimer_12() { return static_cast<int32_t>(offsetof(AI_t2476083018, ___fadeTimer_12)); }
	inline float get_fadeTimer_12() const { return ___fadeTimer_12; }
	inline float* get_address_of_fadeTimer_12() { return &___fadeTimer_12; }
	inline void set_fadeTimer_12(float value)
	{
		___fadeTimer_12 = value;
	}

	inline static int32_t get_offset_of_waitTime_13() { return static_cast<int32_t>(offsetof(AI_t2476083018, ___waitTime_13)); }
	inline float get_waitTime_13() const { return ___waitTime_13; }
	inline float* get_address_of_waitTime_13() { return &___waitTime_13; }
	inline void set_waitTime_13(float value)
	{
		___waitTime_13 = value;
	}

	inline static int32_t get_offset_of_fading_14() { return static_cast<int32_t>(offsetof(AI_t2476083018, ___fading_14)); }
	inline bool get_fading_14() const { return ___fading_14; }
	inline bool* get_address_of_fading_14() { return &___fading_14; }
	inline void set_fading_14(bool value)
	{
		___fading_14 = value;
	}

	inline static int32_t get_offset_of_lit_15() { return static_cast<int32_t>(offsetof(AI_t2476083018, ___lit_15)); }
	inline bool get_lit_15() const { return ___lit_15; }
	inline bool* get_address_of_lit_15() { return &___lit_15; }
	inline void set_lit_15(bool value)
	{
		___lit_15 = value;
	}

	inline static int32_t get_offset_of_shining_16() { return static_cast<int32_t>(offsetof(AI_t2476083018, ___shining_16)); }
	inline bool get_shining_16() const { return ___shining_16; }
	inline bool* get_address_of_shining_16() { return &___shining_16; }
	inline void set_shining_16(bool value)
	{
		___shining_16 = value;
	}

	inline static int32_t get_offset_of_shine_17() { return static_cast<int32_t>(offsetof(AI_t2476083018, ___shine_17)); }
	inline Coroutine_t2299508840 * get_shine_17() const { return ___shine_17; }
	inline Coroutine_t2299508840 ** get_address_of_shine_17() { return &___shine_17; }
	inline void set_shine_17(Coroutine_t2299508840 * value)
	{
		___shine_17 = value;
		Il2CppCodeGenWriteBarrier(&___shine_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
