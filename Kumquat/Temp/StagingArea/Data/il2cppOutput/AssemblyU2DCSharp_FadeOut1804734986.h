#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Image
struct Image_t2042527209;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FadeOut
struct  FadeOut_t1804734986  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Image FadeOut::img
	Image_t2042527209 * ___img_2;

public:
	inline static int32_t get_offset_of_img_2() { return static_cast<int32_t>(offsetof(FadeOut_t1804734986, ___img_2)); }
	inline Image_t2042527209 * get_img_2() const { return ___img_2; }
	inline Image_t2042527209 ** get_address_of_img_2() { return &___img_2; }
	inline void set_img_2(Image_t2042527209 * value)
	{
		___img_2 = value;
		Il2CppCodeGenWriteBarrier(&___img_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
