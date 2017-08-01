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
// UnityEngine.SpriteRenderer[]
struct SpriteRendererU5BU5D_t1098056643;
// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.Transform
struct Transform_t3275118058;
// Plant
struct Plant_t2614518413;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ghost3
struct  Ghost3_t2164558180  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Ghost3::player
	GameObject_t1756533147 * ___player_2;
	// PC Ghost3::controller
	PC_t1669513981 * ___controller_3;
	// UnityEngine.Rigidbody2D Ghost3::body
	Rigidbody2D_t502193897 * ___body_4;
	// UnityEngine.SpriteRenderer[] Ghost3::color
	SpriteRendererU5BU5D_t1098056643* ___color_5;
	// UnityEngine.Sprite Ghost3::N
	Sprite_t309593783 * ___N_6;
	// UnityEngine.Sprite Ghost3::H
	Sprite_t309593783 * ___H_7;
	// UnityEngine.Transform Ghost3::hand
	Transform_t3275118058 * ___hand_8;
	// Plant Ghost3::plant
	Plant_t2614518413 * ___plant_9;
	// System.Single Ghost3::speed
	float ___speed_10;
	// System.Single Ghost3::health
	float ___health_11;
	// System.Single Ghost3::deathTime
	float ___deathTime_12;
	// System.Boolean Ghost3::lit
	bool ___lit_13;
	// System.Boolean Ghost3::gottem
	bool ___gottem_14;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(Ghost3_t2164558180, ___player_2)); }
	inline GameObject_t1756533147 * get_player_2() const { return ___player_2; }
	inline GameObject_t1756533147 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t1756533147 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_controller_3() { return static_cast<int32_t>(offsetof(Ghost3_t2164558180, ___controller_3)); }
	inline PC_t1669513981 * get_controller_3() const { return ___controller_3; }
	inline PC_t1669513981 ** get_address_of_controller_3() { return &___controller_3; }
	inline void set_controller_3(PC_t1669513981 * value)
	{
		___controller_3 = value;
		Il2CppCodeGenWriteBarrier(&___controller_3, value);
	}

	inline static int32_t get_offset_of_body_4() { return static_cast<int32_t>(offsetof(Ghost3_t2164558180, ___body_4)); }
	inline Rigidbody2D_t502193897 * get_body_4() const { return ___body_4; }
	inline Rigidbody2D_t502193897 ** get_address_of_body_4() { return &___body_4; }
	inline void set_body_4(Rigidbody2D_t502193897 * value)
	{
		___body_4 = value;
		Il2CppCodeGenWriteBarrier(&___body_4, value);
	}

	inline static int32_t get_offset_of_color_5() { return static_cast<int32_t>(offsetof(Ghost3_t2164558180, ___color_5)); }
	inline SpriteRendererU5BU5D_t1098056643* get_color_5() const { return ___color_5; }
	inline SpriteRendererU5BU5D_t1098056643** get_address_of_color_5() { return &___color_5; }
	inline void set_color_5(SpriteRendererU5BU5D_t1098056643* value)
	{
		___color_5 = value;
		Il2CppCodeGenWriteBarrier(&___color_5, value);
	}

	inline static int32_t get_offset_of_N_6() { return static_cast<int32_t>(offsetof(Ghost3_t2164558180, ___N_6)); }
	inline Sprite_t309593783 * get_N_6() const { return ___N_6; }
	inline Sprite_t309593783 ** get_address_of_N_6() { return &___N_6; }
	inline void set_N_6(Sprite_t309593783 * value)
	{
		___N_6 = value;
		Il2CppCodeGenWriteBarrier(&___N_6, value);
	}

	inline static int32_t get_offset_of_H_7() { return static_cast<int32_t>(offsetof(Ghost3_t2164558180, ___H_7)); }
	inline Sprite_t309593783 * get_H_7() const { return ___H_7; }
	inline Sprite_t309593783 ** get_address_of_H_7() { return &___H_7; }
	inline void set_H_7(Sprite_t309593783 * value)
	{
		___H_7 = value;
		Il2CppCodeGenWriteBarrier(&___H_7, value);
	}

	inline static int32_t get_offset_of_hand_8() { return static_cast<int32_t>(offsetof(Ghost3_t2164558180, ___hand_8)); }
	inline Transform_t3275118058 * get_hand_8() const { return ___hand_8; }
	inline Transform_t3275118058 ** get_address_of_hand_8() { return &___hand_8; }
	inline void set_hand_8(Transform_t3275118058 * value)
	{
		___hand_8 = value;
		Il2CppCodeGenWriteBarrier(&___hand_8, value);
	}

	inline static int32_t get_offset_of_plant_9() { return static_cast<int32_t>(offsetof(Ghost3_t2164558180, ___plant_9)); }
	inline Plant_t2614518413 * get_plant_9() const { return ___plant_9; }
	inline Plant_t2614518413 ** get_address_of_plant_9() { return &___plant_9; }
	inline void set_plant_9(Plant_t2614518413 * value)
	{
		___plant_9 = value;
		Il2CppCodeGenWriteBarrier(&___plant_9, value);
	}

	inline static int32_t get_offset_of_speed_10() { return static_cast<int32_t>(offsetof(Ghost3_t2164558180, ___speed_10)); }
	inline float get_speed_10() const { return ___speed_10; }
	inline float* get_address_of_speed_10() { return &___speed_10; }
	inline void set_speed_10(float value)
	{
		___speed_10 = value;
	}

	inline static int32_t get_offset_of_health_11() { return static_cast<int32_t>(offsetof(Ghost3_t2164558180, ___health_11)); }
	inline float get_health_11() const { return ___health_11; }
	inline float* get_address_of_health_11() { return &___health_11; }
	inline void set_health_11(float value)
	{
		___health_11 = value;
	}

	inline static int32_t get_offset_of_deathTime_12() { return static_cast<int32_t>(offsetof(Ghost3_t2164558180, ___deathTime_12)); }
	inline float get_deathTime_12() const { return ___deathTime_12; }
	inline float* get_address_of_deathTime_12() { return &___deathTime_12; }
	inline void set_deathTime_12(float value)
	{
		___deathTime_12 = value;
	}

	inline static int32_t get_offset_of_lit_13() { return static_cast<int32_t>(offsetof(Ghost3_t2164558180, ___lit_13)); }
	inline bool get_lit_13() const { return ___lit_13; }
	inline bool* get_address_of_lit_13() { return &___lit_13; }
	inline void set_lit_13(bool value)
	{
		___lit_13 = value;
	}

	inline static int32_t get_offset_of_gottem_14() { return static_cast<int32_t>(offsetof(Ghost3_t2164558180, ___gottem_14)); }
	inline bool get_gottem_14() const { return ___gottem_14; }
	inline bool* get_address_of_gottem_14() { return &___gottem_14; }
	inline void set_gottem_14(bool value)
	{
		___gottem_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
