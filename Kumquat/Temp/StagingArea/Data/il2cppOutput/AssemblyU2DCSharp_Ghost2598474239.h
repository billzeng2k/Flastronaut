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
// PC
struct PC_t1669513981;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// UnityEngine.Sprite
struct Sprite_t309593783;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ghost2
struct  Ghost2_t598474239  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Ghost2::player
	GameObject_t1756533147 * ___player_2;
	// UnityEngine.GameObject Ghost2::plnt
	GameObject_t1756533147 * ___plnt_3;
	// PC Ghost2::controller
	PC_t1669513981 * ___controller_4;
	// UnityEngine.Rigidbody2D Ghost2::body
	Rigidbody2D_t502193897 * ___body_5;
	// UnityEngine.SpriteRenderer Ghost2::color
	SpriteRenderer_t1209076198 * ___color_6;
	// UnityEngine.Sprite Ghost2::N
	Sprite_t309593783 * ___N_7;
	// UnityEngine.Sprite Ghost2::H
	Sprite_t309593783 * ___H_8;
	// System.Single Ghost2::speed
	float ___speed_9;
	// System.Single Ghost2::deathTime
	float ___deathTime_10;
	// System.Single Ghost2::health
	float ___health_11;
	// System.Boolean Ghost2::lit
	bool ___lit_12;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(Ghost2_t598474239, ___player_2)); }
	inline GameObject_t1756533147 * get_player_2() const { return ___player_2; }
	inline GameObject_t1756533147 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t1756533147 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_plnt_3() { return static_cast<int32_t>(offsetof(Ghost2_t598474239, ___plnt_3)); }
	inline GameObject_t1756533147 * get_plnt_3() const { return ___plnt_3; }
	inline GameObject_t1756533147 ** get_address_of_plnt_3() { return &___plnt_3; }
	inline void set_plnt_3(GameObject_t1756533147 * value)
	{
		___plnt_3 = value;
		Il2CppCodeGenWriteBarrier(&___plnt_3, value);
	}

	inline static int32_t get_offset_of_controller_4() { return static_cast<int32_t>(offsetof(Ghost2_t598474239, ___controller_4)); }
	inline PC_t1669513981 * get_controller_4() const { return ___controller_4; }
	inline PC_t1669513981 ** get_address_of_controller_4() { return &___controller_4; }
	inline void set_controller_4(PC_t1669513981 * value)
	{
		___controller_4 = value;
		Il2CppCodeGenWriteBarrier(&___controller_4, value);
	}

	inline static int32_t get_offset_of_body_5() { return static_cast<int32_t>(offsetof(Ghost2_t598474239, ___body_5)); }
	inline Rigidbody2D_t502193897 * get_body_5() const { return ___body_5; }
	inline Rigidbody2D_t502193897 ** get_address_of_body_5() { return &___body_5; }
	inline void set_body_5(Rigidbody2D_t502193897 * value)
	{
		___body_5 = value;
		Il2CppCodeGenWriteBarrier(&___body_5, value);
	}

	inline static int32_t get_offset_of_color_6() { return static_cast<int32_t>(offsetof(Ghost2_t598474239, ___color_6)); }
	inline SpriteRenderer_t1209076198 * get_color_6() const { return ___color_6; }
	inline SpriteRenderer_t1209076198 ** get_address_of_color_6() { return &___color_6; }
	inline void set_color_6(SpriteRenderer_t1209076198 * value)
	{
		___color_6 = value;
		Il2CppCodeGenWriteBarrier(&___color_6, value);
	}

	inline static int32_t get_offset_of_N_7() { return static_cast<int32_t>(offsetof(Ghost2_t598474239, ___N_7)); }
	inline Sprite_t309593783 * get_N_7() const { return ___N_7; }
	inline Sprite_t309593783 ** get_address_of_N_7() { return &___N_7; }
	inline void set_N_7(Sprite_t309593783 * value)
	{
		___N_7 = value;
		Il2CppCodeGenWriteBarrier(&___N_7, value);
	}

	inline static int32_t get_offset_of_H_8() { return static_cast<int32_t>(offsetof(Ghost2_t598474239, ___H_8)); }
	inline Sprite_t309593783 * get_H_8() const { return ___H_8; }
	inline Sprite_t309593783 ** get_address_of_H_8() { return &___H_8; }
	inline void set_H_8(Sprite_t309593783 * value)
	{
		___H_8 = value;
		Il2CppCodeGenWriteBarrier(&___H_8, value);
	}

	inline static int32_t get_offset_of_speed_9() { return static_cast<int32_t>(offsetof(Ghost2_t598474239, ___speed_9)); }
	inline float get_speed_9() const { return ___speed_9; }
	inline float* get_address_of_speed_9() { return &___speed_9; }
	inline void set_speed_9(float value)
	{
		___speed_9 = value;
	}

	inline static int32_t get_offset_of_deathTime_10() { return static_cast<int32_t>(offsetof(Ghost2_t598474239, ___deathTime_10)); }
	inline float get_deathTime_10() const { return ___deathTime_10; }
	inline float* get_address_of_deathTime_10() { return &___deathTime_10; }
	inline void set_deathTime_10(float value)
	{
		___deathTime_10 = value;
	}

	inline static int32_t get_offset_of_health_11() { return static_cast<int32_t>(offsetof(Ghost2_t598474239, ___health_11)); }
	inline float get_health_11() const { return ___health_11; }
	inline float* get_address_of_health_11() { return &___health_11; }
	inline void set_health_11(float value)
	{
		___health_11 = value;
	}

	inline static int32_t get_offset_of_lit_12() { return static_cast<int32_t>(offsetof(Ghost2_t598474239, ___lit_12)); }
	inline bool get_lit_12() const { return ___lit_12; }
	inline bool* get_address_of_lit_12() { return &___lit_12; }
	inline void set_lit_12(bool value)
	{
		___lit_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
