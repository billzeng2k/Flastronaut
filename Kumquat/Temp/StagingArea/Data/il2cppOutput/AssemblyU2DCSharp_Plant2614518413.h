#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.Transform
struct Transform_t3275118058;
// GM
struct GM_t506714548;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Plant
struct  Plant_t2614518413  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] Plant::G
	GameObjectU5BU5D_t3057952154* ___G_2;
	// UnityEngine.Transform Plant::shine
	Transform_t3275118058 * ___shine_3;
	// GM Plant::gm
	GM_t506714548 * ___gm_4;
	// UnityEngine.RectTransform Plant::growthBar
	RectTransform_t3349966182 * ___growthBar_5;
	// UnityEngine.RectTransform Plant::danger
	RectTransform_t3349966182 * ___danger_6;
	// System.Int32 Plant::curPlant
	int32_t ___curPlant_7;
	// System.Single Plant::growth
	float ___growth_8;
	// System.Single Plant::notHit
	float ___notHit_9;
	// System.Boolean Plant::alive
	bool ___alive_10;
	// System.Boolean Plant::lost
	bool ___lost_11;
	// System.Boolean Plant::won
	bool ___won_12;

public:
	inline static int32_t get_offset_of_G_2() { return static_cast<int32_t>(offsetof(Plant_t2614518413, ___G_2)); }
	inline GameObjectU5BU5D_t3057952154* get_G_2() const { return ___G_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_G_2() { return &___G_2; }
	inline void set_G_2(GameObjectU5BU5D_t3057952154* value)
	{
		___G_2 = value;
		Il2CppCodeGenWriteBarrier(&___G_2, value);
	}

	inline static int32_t get_offset_of_shine_3() { return static_cast<int32_t>(offsetof(Plant_t2614518413, ___shine_3)); }
	inline Transform_t3275118058 * get_shine_3() const { return ___shine_3; }
	inline Transform_t3275118058 ** get_address_of_shine_3() { return &___shine_3; }
	inline void set_shine_3(Transform_t3275118058 * value)
	{
		___shine_3 = value;
		Il2CppCodeGenWriteBarrier(&___shine_3, value);
	}

	inline static int32_t get_offset_of_gm_4() { return static_cast<int32_t>(offsetof(Plant_t2614518413, ___gm_4)); }
	inline GM_t506714548 * get_gm_4() const { return ___gm_4; }
	inline GM_t506714548 ** get_address_of_gm_4() { return &___gm_4; }
	inline void set_gm_4(GM_t506714548 * value)
	{
		___gm_4 = value;
		Il2CppCodeGenWriteBarrier(&___gm_4, value);
	}

	inline static int32_t get_offset_of_growthBar_5() { return static_cast<int32_t>(offsetof(Plant_t2614518413, ___growthBar_5)); }
	inline RectTransform_t3349966182 * get_growthBar_5() const { return ___growthBar_5; }
	inline RectTransform_t3349966182 ** get_address_of_growthBar_5() { return &___growthBar_5; }
	inline void set_growthBar_5(RectTransform_t3349966182 * value)
	{
		___growthBar_5 = value;
		Il2CppCodeGenWriteBarrier(&___growthBar_5, value);
	}

	inline static int32_t get_offset_of_danger_6() { return static_cast<int32_t>(offsetof(Plant_t2614518413, ___danger_6)); }
	inline RectTransform_t3349966182 * get_danger_6() const { return ___danger_6; }
	inline RectTransform_t3349966182 ** get_address_of_danger_6() { return &___danger_6; }
	inline void set_danger_6(RectTransform_t3349966182 * value)
	{
		___danger_6 = value;
		Il2CppCodeGenWriteBarrier(&___danger_6, value);
	}

	inline static int32_t get_offset_of_curPlant_7() { return static_cast<int32_t>(offsetof(Plant_t2614518413, ___curPlant_7)); }
	inline int32_t get_curPlant_7() const { return ___curPlant_7; }
	inline int32_t* get_address_of_curPlant_7() { return &___curPlant_7; }
	inline void set_curPlant_7(int32_t value)
	{
		___curPlant_7 = value;
	}

	inline static int32_t get_offset_of_growth_8() { return static_cast<int32_t>(offsetof(Plant_t2614518413, ___growth_8)); }
	inline float get_growth_8() const { return ___growth_8; }
	inline float* get_address_of_growth_8() { return &___growth_8; }
	inline void set_growth_8(float value)
	{
		___growth_8 = value;
	}

	inline static int32_t get_offset_of_notHit_9() { return static_cast<int32_t>(offsetof(Plant_t2614518413, ___notHit_9)); }
	inline float get_notHit_9() const { return ___notHit_9; }
	inline float* get_address_of_notHit_9() { return &___notHit_9; }
	inline void set_notHit_9(float value)
	{
		___notHit_9 = value;
	}

	inline static int32_t get_offset_of_alive_10() { return static_cast<int32_t>(offsetof(Plant_t2614518413, ___alive_10)); }
	inline bool get_alive_10() const { return ___alive_10; }
	inline bool* get_address_of_alive_10() { return &___alive_10; }
	inline void set_alive_10(bool value)
	{
		___alive_10 = value;
	}

	inline static int32_t get_offset_of_lost_11() { return static_cast<int32_t>(offsetof(Plant_t2614518413, ___lost_11)); }
	inline bool get_lost_11() const { return ___lost_11; }
	inline bool* get_address_of_lost_11() { return &___lost_11; }
	inline void set_lost_11(bool value)
	{
		___lost_11 = value;
	}

	inline static int32_t get_offset_of_won_12() { return static_cast<int32_t>(offsetof(Plant_t2614518413, ___won_12)); }
	inline bool get_won_12() const { return ___won_12; }
	inline bool* get_address_of_won_12() { return &___won_12; }
	inline void set_won_12(bool value)
	{
		___won_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
