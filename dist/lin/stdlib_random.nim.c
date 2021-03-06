/* Generated by Nim Compiler v1.3.5 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix

/* section: NIM_merge_FRAME_DEFINES */
#define nimfr_(x, y)
#define nimln_(x, y)

/* section: NIM_merge_FORWARD_TYPES */
typedef struct tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A;

/* section: NIM_merge_TYPES */
struct tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A {
NU64 a0;
NU64 a1;
};

/* section: NIM_merge_PROC_HEADERS */
N_LIB_PRIVATE N_NIMCALL(NI, rand__SN9aVN0MBPaaBWhJdtZLhNA)(tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A* r, NI max);
N_LIB_PRIVATE N_NIMCALL(NU64, next__uKPilSLGUBbsncNO5ljzag)(tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A* r);
N_LIB_PRIVATE N_NIMCALL(NU64, rotl__I9aS29bnItunNBhkLW9cSr3SA)(NU64 x, NU64 k);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);

/* section: NIM_merge_VARS */
N_LIB_PRIVATE tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A state__4atHrcHUZPts5LqH9bzbl0w = {7616934476015405061ULL, 15122295919272093642ULL}
;
extern NIM_THREADVAR NIM_BOOL nimInErrorMode__759bT87luu8XGcbkw13FUjA;

/* section: NIM_merge_PROCS */
N_LIB_PRIVATE N_NIMCALL(NU64, rotl__I9aS29bnItunNBhkLW9cSr3SA)(NU64 x, NU64 k) {
	NU64 result;
	result = (NU64)0;
	result = (NU64)((NU64)((NU64)(x) << (NU64)(k)) | (NU64)((NU64)(x) >> (NU64)((NU64)((NU64)(64ULL) - (NU64)(k)))));
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__759bT87luu8XGcbkw13FUjA);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NU64, next__uKPilSLGUBbsncNO5ljzag)(tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A* r) {
	NU64 result;
	NU64 s0;
	NU64 s1;
	NU64 T1_;
	NU64 T2_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NU64)0;
	s0 = (*r).a0;
	s1 = (*r).a1;
	result = (NU64)((NU64)(s0) + (NU64)(s1));
	s1 = (NU64)(s1 ^ s0);
	T1_ = (NU64)0;
	T1_ = rotl__I9aS29bnItunNBhkLW9cSr3SA(s0, 55ULL);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	(*r).a0 = (NU64)((NU64)(T1_ ^ s1) ^ (NU64)((NU64)(s1) << (NU64)(((NI) 14))));
	T2_ = (NU64)0;
	T2_ = rotl__I9aS29bnItunNBhkLW9cSr3SA(s1, 36ULL);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	(*r).a1 = T2_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, rand__SN9aVN0MBPaaBWhJdtZLhNA)(tyObject_Rand__liBKmwv1H6v7oYBhDFHa6A* r, NI max) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	{
		if (!(((NI) (max)) == ((NI) 0))) goto LA3_;
		goto BeforeRet_;
	}
	LA3_: ;
	{
		while (1) {
			NU64 x;
			x = next__uKPilSLGUBbsncNO5ljzag(r);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			{
				if (!((NU64)(x) <= (NU64)((NU64)((NU64)(18446744073709551615ULL) - (NU64)((NU64)((NU64)(18446744073709551615ULL) % (NU64)(((NU64) (max))))))))) goto LA9_;
				result = ((NI) ((NU64)((NU64)(x) % (NU64)((NU64)((NU64)(((NU64) (max))) + (NU64)(1ULL))))));
				goto BeforeRet_;
			}
			LA9_: ;
		}
	}
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, rand__v7jZDEs4VOsrcpvk0yo8Rg)(NI max) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	result = rand__SN9aVN0MBPaaBWhJdtZLhNA((&state__4atHrcHUZPts5LqH9bzbl0w), ((NI) (max)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
