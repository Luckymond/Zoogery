#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.String
struct String_t;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tC6C38364FD80623B1CFE7B1593B7097BA8B90AAE 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// Unity.Mathematics.float3
struct  float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7 
{
public:
	// System.Single Unity.Mathematics.float3::x
	float ___x_0;
	// System.Single Unity.Mathematics.float3::y
	float ___y_1;
	// System.Single Unity.Mathematics.float3::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}
};


// Unity.Mathematics.MinMaxAABB
struct  MinMaxAABB_t1914A5FA22F5F68686B332A026EED2FAF7C173CE 
{
public:
	// Unity.Mathematics.float3 Unity.Mathematics.MinMaxAABB::Min
	float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7  ___Min_0;
	// Unity.Mathematics.float3 Unity.Mathematics.MinMaxAABB::Max
	float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7  ___Max_1;

public:
	inline static int32_t get_offset_of_Min_0() { return static_cast<int32_t>(offsetof(MinMaxAABB_t1914A5FA22F5F68686B332A026EED2FAF7C173CE, ___Min_0)); }
	inline float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7  get_Min_0() const { return ___Min_0; }
	inline float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7 * get_address_of_Min_0() { return &___Min_0; }
	inline void set_Min_0(float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7  value)
	{
		___Min_0 = value;
	}

	inline static int32_t get_offset_of_Max_1() { return static_cast<int32_t>(offsetof(MinMaxAABB_t1914A5FA22F5F68686B332A026EED2FAF7C173CE, ___Max_1)); }
	inline float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7  get_Max_1() const { return ___Max_1; }
	inline float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7 * get_address_of_Max_1() { return &___Max_1; }
	inline void set_Max_1(float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7  value)
	{
		___Max_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Boolean Unity.Mathematics.float3::Equals(Unity.Mathematics.float3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool float3_Equals_mD9E67316EB63B276A4E7D47E0DA25377FC21C129 (float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7 * __this, float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7  p0, const RuntimeMethod* method);
// System.Boolean Unity.Mathematics.MinMaxAABB::Equals(Unity.Mathematics.MinMaxAABB)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MinMaxAABB_Equals_m11914D1B54840E28DB5C441B773CB498078BF4B1 (MinMaxAABB_t1914A5FA22F5F68686B332A026EED2FAF7C173CE * __this, MinMaxAABB_t1914A5FA22F5F68686B332A026EED2FAF7C173CE  ___other0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Unity.Mathematics.MinMaxAABB::Equals(Unity.Mathematics.MinMaxAABB)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MinMaxAABB_Equals_m11914D1B54840E28DB5C441B773CB498078BF4B1 (MinMaxAABB_t1914A5FA22F5F68686B332A026EED2FAF7C173CE * __this, MinMaxAABB_t1914A5FA22F5F68686B332A026EED2FAF7C173CE  ___other0, const RuntimeMethod* method)
{
	{
		// return Min.Equals(Min) && Max.Equals(other.Max);
		float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7 * L_0 = __this->get_address_of_Min_0();
		float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7  L_1 = __this->get_Min_0();
		bool L_2 = float3_Equals_mD9E67316EB63B276A4E7D47E0DA25377FC21C129((float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7 *)L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7 * L_3 = __this->get_address_of_Max_1();
		MinMaxAABB_t1914A5FA22F5F68686B332A026EED2FAF7C173CE  L_4 = ___other0;
		float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7  L_5 = L_4.get_Max_1();
		bool L_6 = float3_Equals_mD9E67316EB63B276A4E7D47E0DA25377FC21C129((float3_tB3DB6E304B40D8C4DA63622603E1671D83A2FDF7 *)L_3, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0025:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool MinMaxAABB_Equals_m11914D1B54840E28DB5C441B773CB498078BF4B1_AdjustorThunk (RuntimeObject * __this, MinMaxAABB_t1914A5FA22F5F68686B332A026EED2FAF7C173CE  ___other0, const RuntimeMethod* method)
{
	MinMaxAABB_t1914A5FA22F5F68686B332A026EED2FAF7C173CE * _thisAdjusted = reinterpret_cast<MinMaxAABB_t1914A5FA22F5F68686B332A026EED2FAF7C173CE *>(__this + 1);
	return MinMaxAABB_Equals_m11914D1B54840E28DB5C441B773CB498078BF4B1(_thisAdjusted, ___other0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
