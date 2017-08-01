#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// AI
struct AI_t2476083018;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GroundedAI
struct  GroundedAI_t2939961960  : public MonoBehaviour_t1158329972
{
public:
	// AI GroundedAI::player
	AI_t2476083018 * ___player_2;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(GroundedAI_t2939961960, ___player_2)); }
	inline AI_t2476083018 * get_player_2() const { return ___player_2; }
	inline AI_t2476083018 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(AI_t2476083018 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
