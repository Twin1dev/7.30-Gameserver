#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EVectorVMOp : uint8
{
	Done                           = 0,
	Add                            = 1,
	Sub                            = 2,
	Mul                            = 3,
	Div                            = 4,
	Mad                            = 5,
	Lerp                           = 6,
	Rcp                            = 7,
	Rsq                            = 8,
	Sqrt                           = 9,
	Neg                            = 10,
	Abs                            = 11,
	Exp                            = 12,
	Exp2                           = 13,
	Log                            = 14,
	Log2                           = 15,
	Sin                            = 16,
	Cos                            = 17,
	Tan                            = 18,
	Asin                           = 19,
	Acos                           = 20,
	Atan                           = 21,
	Atan2                          = 22,
	Ceil                           = 23,
	Floor                          = 24,
	Fmod                           = 25,
	Frac                           = 26,
	Trunc                          = 27,
	Clamp                          = 28,
	Min                            = 29,
	Max                            = 30,
	Pow                            = 31,
	Round                          = 32,
	Sign                           = 33,
	Step                           = 34,
	Random                         = 35,
	Noise                          = 36,
	Cmplt                          = 37,
	Cmple                          = 38,
	Cmpgt                          = 39,
	Cmpge                          = 40,
	Cmpeq                          = 41,
	Cmpneq                         = 42,
	Select                         = 43,
	Addi                           = 44,
	Subi                           = 45,
	Muli                           = 46,
	Clampi                         = 47,
	Mini                           = 48,
	Maxi                           = 49,
	Absi                           = 50,
	Negi                           = 51,
	Signi                          = 52,
	Randomi                        = 53,
	Cmplti                         = 54,
	Cmplei                         = 55,
	Cmpgti                         = 56,
	Cmpgei                         = 57,
	Cmpeqi                         = 58,
	Cmpneqi                        = 59,
	bit_and                        = 60,
	bit_or                         = 61,
	bit_xor                        = 62,
	bit_not                        = 63,
	Logic_and                      = 64,
	Logic_or                       = 65,
	Logic_xor                      = 66,
	Logic_not                      = 67,
	F2i                            = 68,
	I2f                            = 69,
	F2b                            = 70,
	b2f                            = 71,
	I2b                            = 72,
	b2i                            = 73,
	Inputdata_32bit                = 74,
	Inputdata_noadvance_32bit      = 75,
	Outputdata_32bit               = 76,
	Acquireindex                   = 77,
	External_func_call             = 78,
	Exec_index                     = 79,
	Noise2D                        = 80,
	Noise3D                        = 81,
	Enter_stat_scope               = 82,
	Exit_stat_scope                = 83,
	Update_id                      = 84,
	Acquire_id                     = 85,
	NumOpcodes                     = 86,
};

enum class EVectorVMOperandLocation : uint8
{
	Register                       = 0,
	Constant                       = 1,
	Num                            = 2,
	EVectorVMOperandLocation_MAX   = 3,
};

enum class EVectorVMBaseTypes : uint8
{
	Float                          = 0,
	Int                            = 1,
	Bool                           = 2,
	Num                            = 3,
	EVectorVMBaseTypes_MAX         = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}


