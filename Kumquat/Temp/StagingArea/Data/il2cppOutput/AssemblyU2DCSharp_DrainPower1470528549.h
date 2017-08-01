#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// PC
struct PC_t1669513981;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DrainPower
struct  DrainPower_t1470528549  : public MonoBehaviour_t1158329972
{
public:
	// PC DrainPower::pc
	PC_t1669513981 * ___pc_2;

public:
	inline static int32_t get_offset_of_pc_2() { return static_cast<int32_t>(offsetof(DrainPower_t1470528549, ___pc_2)); }
	inline PC_t1669513981 * get_pc_2() const { return ___pc_2; }
	inline PC_t1669513981 ** get_address_of_pc_2() { return &___pc_2; }
	inline void set_pc_2(PC_t1669513981 * value)
	{
		___pc_2 = value;
		Il2CppCodeGenWriteBarrier(&___pc_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
