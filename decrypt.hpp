#pragma once
#include "api.h"


ULONG64 gpid = 0;


template <typename T>
T readEx(const uintptr_t address)
{
	T buffer{ };
	Api_ReadProcMemory(gpid, address, (ULONG64)&buffer, sizeof(T), 0);
	return buffer;
}
__int64 __fastcall sub_1427F4170(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG32>(readEx<ULONG64>(readEx<ULONG64>(a2 + 840) + 432LL) + 576LL);
	*a1 ^= result;
	return result;
}
__int64 __fastcall sub_1427F4190(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = (unsigned int)(readEx<ULONG32>(a2 + 384) - 1545366194) >> 16;
	*a1 ^= result;
	return result;
}
__int64 __fastcall sub_1427F41B0(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG32>(readEx<ULONG64>(readEx<ULONG64>(a2 + 592) + 840LL) + 176LL);
	*a1 ^= result;
	return result;
}
__int64 __fastcall sub_1427F41D0(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG32>(readEx<ULONG64>(readEx<ULONG64>(a2 + 896) + 128LL) + 872LL);
	*a1 ^= result;
	return result;
}
__int64 __fastcall sub_1427F41F0(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG32>(readEx<ULONG64>(readEx<ULONG64>(a2 + 704) + 272LL) + 320LL);
	*a1 ^= result;
	return result;
}
__int64 __fastcall sub_1427F4210(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG32>(readEx<ULONG64>(readEx<ULONG64>(a2 + 824) + 880LL) + 312LL);
	*a1 ^= result;
	return result;
}__int64 __fastcall sub_1427F4230(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG64>(a2 + 600);
	*a1 ^= readEx<ULONG32>(result + 744) ^ 0x58032C80;
	return result;
}
__int64 __fastcall sub_1427F4250(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG32>(readEx<ULONG64>(readEx<ULONG64>(a2 + 896) + 8LL) + 312LL);
	*a1 ^= result;
	return result;
}
__int64 __fastcall sub_1427F4270(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG32>(readEx<ULONG64>(readEx<ULONG64>(a2 + 736) + 840LL) + 776LL);
	*a1 ^= result;
	return result;
}
__int64 __fastcall sub_1427F4290(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG32>(readEx<ULONG64>(readEx<ULONG64>(a2 + 368) + 832LL) + 248LL);
	*a1 ^= result;
	return result;
}
__int64 __fastcall sub_1427F42B0(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = (368154926 * readEx<ULONG32>(a2 + 848)) | 0x10u;
	*a1 ^= result;
	return result;
}
__int64 __fastcall sub_1427F42C0(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG64>(a2 + 40);
	*a1 ^= readEx<ULONG32>(result + 544) ^ 0x3DBBD539;
	return result;
}
__int64 __fastcall sub_1427F42E0(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG32>(a2 + 744);
	*a1 ^= result;
	return result;
}
__int64 __fastcall sub_1427F42F0(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG64>(a2 + 240);
	*a1 ^= ~readEx<ULONG32>(result + 312);
	return result;
}
__int64 __fastcall sub_1427F4310(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG64>(a2 + 128);
	*a1 ^= 1410686829 * readEx<ULONG32>(result + 616);
	return result;
}
__int64 __fastcall sub_1427F4330(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG32>(readEx<ULONG64>(readEx<ULONG64>(a2 + 144) + 144LL) + 408LL);
	*a1 ^= result;
	return result;
}
__int64 __fastcall sub_1427F4350(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG64>(a2 + 664);
	*a1 ^= -1758292448 * readEx<ULONG32>(result + 712);
	return result;
}
__int64 __fastcall sub_1427F4370(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG32>(readEx<ULONG64>(readEx<ULONG64>(a2 + 144) + 704LL) + 744LL);
	*a1 ^= result;
	return result;
}
__int64 __fastcall sub_1427F4397(DWORD *a1)
{
	__int64 v1; // rax
	__int64 result; // rax

	result = readEx<ULONG32>(readEx<ULONG64>(v1 + 664) + 848LL);
	*a1 ^= result;
	return result;
}
__int64 __fastcall sub_1427F43B7(DWORD *a1)
{
	__int64 v1; // rax
	__int64 result; // rax

	result = readEx<ULONG32>(readEx<ULONG64>(v1 + 368) + 176LL);
	*a1 ^= result;
	return result;
}
__int64 __fastcall sub_1427F43D0(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG32>(readEx<ULONG64>(readEx<ULONG64>(a2 + 664) + 608LL) + 512LL);
	*a1 ^= result;
	return result;
}
__int64 __fastcall sub_1427F43F0(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG64>(a2 + 432);
	*a1 ^= readEx<ULONG32>(result + 312) - 1031935447;
	return result;
}
__int64 __fastcall sub_1427F4410(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG32>(readEx<ULONG64>(readEx<ULONG64>(a2 + 416) + 376LL) + 512LL);
	*a1 ^= result;
	return result;
}
__int64 __fastcall sub_1427F4430(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG32>(readEx<ULONG64>(readEx<ULONG64>(a2 + 240) + 200LL) + 312LL);
	*a1 ^= result;
	return result;
}
__int64 __fastcall sub_1427F4450(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG32>(readEx<ULONG64>(readEx<ULONG64>(a2 + 184) + 608LL) + 784LL);
	*a1 ^= result;
	return result;
}
__int64 __fastcall sub_1427F4470(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG32>(readEx<ULONG64>(readEx<ULONG64>(a2 + 360) + 736LL) + 384LL);
	*a1 ^= result;
	return result;
}
__int64 __fastcall sub_1427F4490(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG32>(readEx<ULONG64>(readEx<ULONG64>(a2 + 600) + 136LL) + 480LL);
	*a1 ^= result;
	return result;
}
__int64 __fastcall sub_1427F44B0(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG32>(readEx<ULONG64>(readEx<ULONG64>(a2 + 896) + 832LL) + 640LL);
	*a1 ^= result;
	return result;
}
__int64 __fastcall sub_1427F44D0(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG32>(readEx<ULONG64>(readEx<ULONG64>(a2 + 128) + 472LL) + 320LL);
	*a1 ^= result;
	return result;
}
__int64 __fastcall sub_1427F44F0(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG32>(readEx<ULONG64>(readEx<ULONG64>(a2 + 240) + 832LL) + 152LL);
	*a1 ^= result;
	return result;
}
__int64 __fastcall sub_1427F4510(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = (unsigned int)(-1487969476 * readEx<ULONG32>(a2 + 312));
	*a1 ^= result;
	return result;
}
__int64 __fastcall sub_1427F4520(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG64>(a2 + 704);
	*a1 ^= readEx<ULONG32>(result + 784) - 759160017;
	return result;
}
__int64 __fastcall sub_1427F4540(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG32>(readEx<ULONG64>(readEx<ULONG64>(a2 + 376) + 272LL) + 616LL);
	*a1 ^= result;
	return result;
}
__int64 __fastcall sub_1427F4560(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = (unsigned int)(537995190 - readEx<ULONG32>(a2 + 152));
	*a1 ^= result;
	return result;
}
__int64 __fastcall sub_1427F4570(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG32>(readEx<ULONG64>(readEx<ULONG64>(a2 + 432) + 832LL) + 576LL);
	*a1 ^= result;
	return result;
}
__int64 __fastcall sub_1427F4590(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG64>(a2 + 432);
	*a1 ^= readEx<ULONG32>(result + 280) + 1115317462;
	return result;
}
__int64 __fastcall sub_1427F45B0(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG32>(readEx<ULONG64>(readEx<ULONG64>(a2 + 824) + 432LL) + 552LL);
	*a1 ^= result;
	return result;
}
__int64 __fastcall sub_1427F45D0(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG64>(a2 + 736);
	*a1 ^= -684970392 * readEx<ULONG32>(result + 480);
	return result;
}
__int64 __fastcall sub_1427F45F0(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG32>(readEx<ULONG64>(readEx<ULONG64>(a2 + 128) + 608LL) + 408LL);
	*a1 ^= result;
	return result;
}
__int64 __fastcall sub_1427F4610(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG32>(readEx<ULONG64>(readEx<ULONG64>(a2 + 880) + 592LL) + 744LL);
	*a1 ^= result;
	return result;
}
__int64 __fastcall sub_1427F4630(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG32>(readEx<ULONG64>(readEx<ULONG64>(a2 + 472) + 272LL) + 512LL);
	*a1 ^= result;
	return result;
}
__int64 __fastcall sub_1427F4650(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG32>(readEx<ULONG64>(readEx<ULONG64>(a2 + 240) + 240LL) + 616LL);
	*a1 ^= result;
	return result;
}
__int64 __fastcall sub_1427F4670(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = (unsigned int)(1953993160 * readEx<ULONG32>(a2 + 48));
	*a1 ^= 884775418 - result;
	return result;
}
__int64 __fastcall sub_1427F4690(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG64>(a2 + 600);
	*a1 ^= readEx<ULONG32>(result + 480) ^ 0x22BF4651;
	return result;
}
__int64 __fastcall sub_1427F46B0(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG64>(a2 + 40);
	*a1 ^= readEx<ULONG32>(result + 248) + 373575852;
	return result;
}
__int64 __fastcall sub_1427F46D0(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = (unsigned int)(1651793398 * readEx<ULONG32>(a2 + 616));
	*a1 ^= -1597050210 - result;
	return result;
}
__int64 __fastcall sub_1427F46F0(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG32>(readEx<ULONG64>(readEx<ULONG64>(a2 + 240) + 896LL) + 744LL);
	*a1 ^= result;
	return result;
}
__int64 __fastcall sub_1427F4710(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG32>(readEx<ULONG64>(readEx<ULONG64>(a2 + 432) + 832LL) + 640LL);
	*a1 ^= result;
	return result;
}
__int64 __fastcall sub_1427F4730(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG32>(readEx<ULONG64>(readEx<ULONG64>(a2 + 416) + 8LL) + 544LL);
	*a1 ^= result;
	return result;
}
__int64 __fastcall sub_1427F4750(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG64>(a2 + 608);
	*a1 ^= readEx<ULONG32>(result + 48) ^ 0x7EE7D657;
	return result;
}
__int64 __fastcall sub_1427F4770(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG32>(a2 + 744) >> 26;
	*a1 ^= result;
	return result;
}
__int64 __fastcall sub_1427F4780(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = (unsigned int)(1240573155 * readEx<ULONG32>(a2 + 312));
	*a1 ^= -1836173323 - result;
	return result;
}
__int64 __fastcall sub_1427F47A0(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG32>(readEx<ULONG64>(readEx<ULONG64>(a2 + 200) + 608LL) + 552LL);
	*a1 ^= result;
	return result;
}
__int64 __fastcall sub_1427F47C0(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG64>(a2 + 240);
	*a1 ^= readEx<ULONG32>(result + 176) << 26;
	return result;
}
__int64 __fastcall sub_1427F47E0(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG64>(a2 + 664);
	*a1 ^= 1025280362 * readEx<ULONG32>(result + 88);
	return result;
}
__int64 __fastcall sub_1427F4800(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG32>(readEx<ULONG64>(readEx<ULONG64>(a2 + 184) + 832LL) + 552LL);
	*a1 ^= result;
	return result;
}
__int64 __fastcall sub_1427F4820(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG64>(a2 + 416);
	*a1 ^= ~readEx<ULONG32>(result + 744);
	return result;
}
__int64 __fastcall sub_1427F4840(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG32>(readEx<ULONG64>(readEx<ULONG64>(a2 + 272) + 600LL) + 848LL);
	*a1 ^= result;
	return result;
}
__int64 __fastcall sub_1427F4860(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG32>(readEx<ULONG64>(readEx<ULONG64>(a2 + 648) + 40LL) + 872LL);
	*a1 ^= result;
	return result;
}
__int64 __fastcall sub_1427F4880(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = 527131409 * (readEx<ULONG32>(a2 + 320) ^ 0x919CB27C);
	*a1 ^= result;
	return result;
}
__int64 __fastcall sub_1427F48A0(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG32>(readEx<ULONG64>(readEx<ULONG64>(a2 + 824) + 240LL) + 48LL);
	*a1 ^= result;
	return result;
}
__int64 __fastcall sub_1427F48C0(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG32>(readEx<ULONG64>(readEx<ULONG64>(a2 + 144) + 360LL) + 384LL);
	*a1 ^= result;
	return result;
}
__int64 __fastcall sub_1427F48E0(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = *a1 ^ (readEx<ULONG32>(a2 + 152) - 1244570511) ^ 0x1601736Au;
	*a1 = result;
	return result;
}
__int64 __fastcall sub_1427F4900(DWORD *a1, __int64 a2)
{
	__int64 result; // rax

	result = readEx<ULONG32>(a2 + 152) >> 28;
	*a1 ^= result;
	return result;
}

ULONG64 decall1(ULONG64 callPtr, int* arg) {
	
	switch (readEx<ULONG64>(callPtr))
	{
	case 0x1427F4397: return sub_1427F4397((DWORD*)arg);
	case 0x1427F43B7: return sub_1427F43B7((DWORD*)arg);
	}
	return 0;
}

ULONG64 decall2(ULONG64 callPtr, int* arg1,ULONG64 arg2) {
	switch (readEx<ULONG64>(callPtr))
	{
	case 0x1427F4170: return sub_1427F4170((DWORD*)arg1, arg2);
	case 0x1427F4190: return sub_1427F4190((DWORD*)arg1, arg2);
	case 0x1427F41B0: return sub_1427F41B0((DWORD*)arg1, arg2);
	case 0x1427F41D0: return sub_1427F41D0((DWORD*)arg1, arg2);
	case 0x1427F41F0: return sub_1427F41F0((DWORD*)arg1, arg2);
	case 0x1427F4210: return sub_1427F4210((DWORD*)arg1, arg2);
	case 0x1427F4230: return sub_1427F4230((DWORD*)arg1, arg2);
	case 0x1427F4250: return sub_1427F4250((DWORD*)arg1, arg2);
	case 0x1427F4270: return sub_1427F4270((DWORD*)arg1, arg2);
	case 0x1427F4290: return sub_1427F4290((DWORD*)arg1, arg2);
	case 0x1427F42B0: return sub_1427F42B0((DWORD*)arg1, arg2);
	case 0x1427F42C0: return sub_1427F42C0((DWORD*)arg1, arg2);
	case 0x1427F42E0: return sub_1427F42E0((DWORD*)arg1, arg2);
	case 0x1427F42F0: return sub_1427F42F0((DWORD*)arg1, arg2);
	case 0x1427F4310: return sub_1427F4310((DWORD*)arg1, arg2);
	case 0x1427F4330: return sub_1427F4330((DWORD*)arg1, arg2);
	case 0x1427F4350: return sub_1427F4350((DWORD*)arg1, arg2);
	case 0x1427F4370: return sub_1427F4370((DWORD*)arg1, arg2);
	case 0x1427F43D0: return sub_1427F43D0((DWORD*)arg1, arg2);
	case 0x1427F43F0: return sub_1427F43F0((DWORD*)arg1, arg2);
	case 0x1427F4410: return sub_1427F4410((DWORD*)arg1, arg2);
	case 0x1427F4430: return sub_1427F4430((DWORD*)arg1, arg2);
	case 0x1427F4450: return sub_1427F4450((DWORD*)arg1, arg2);
	case 0x1427F4470: return sub_1427F4470((DWORD*)arg1, arg2);
	case 0x1427F4490: return sub_1427F4490((DWORD*)arg1, arg2);
	case 0x1427F44B0: return sub_1427F44B0((DWORD*)arg1, arg2);
	case 0x1427F44D0: return sub_1427F44D0((DWORD*)arg1, arg2);
	case 0x1427F44F0: return sub_1427F44F0((DWORD*)arg1, arg2);
	case 0x1427F4510: return sub_1427F4510((DWORD*)arg1, arg2);
	case 0x1427F4520: return sub_1427F4520((DWORD*)arg1, arg2);
	case 0x1427F4540: return sub_1427F4540((DWORD*)arg1, arg2);
	case 0x1427F4560: return sub_1427F4560((DWORD*)arg1, arg2);
	case 0x1427F4570: return sub_1427F4570((DWORD*)arg1, arg2);
	case 0x1427F4590: return sub_1427F4590((DWORD*)arg1, arg2);
	case 0x1427F45B0: return sub_1427F45B0((DWORD*)arg1, arg2);
	case 0x1427F45D0: return sub_1427F45D0((DWORD*)arg1, arg2);
	case 0x1427F45F0: return sub_1427F45F0((DWORD*)arg1, arg2);
	case 0x1427F4610: return sub_1427F4610((DWORD*)arg1, arg2);
	case 0x1427F4630: return sub_1427F4630((DWORD*)arg1, arg2);
	case 0x1427F4650: return sub_1427F4650((DWORD*)arg1, arg2);
	case 0x1427F4670: return sub_1427F4670((DWORD*)arg1, arg2);
	case 0x1427F4690: return sub_1427F4690((DWORD*)arg1, arg2);
	case 0x1427F46B0: return sub_1427F46B0((DWORD*)arg1, arg2);
	case 0x1427F46D0: return sub_1427F46D0((DWORD*)arg1, arg2);
	case 0x1427F46F0: return sub_1427F46F0((DWORD*)arg1, arg2);
	case 0x1427F4710: return sub_1427F4710((DWORD*)arg1, arg2);
	case 0x1427F4730: return sub_1427F4730((DWORD*)arg1, arg2);
	case 0x1427F4750: return sub_1427F4750((DWORD*)arg1, arg2);
	case 0x1427F4770: return sub_1427F4770((DWORD*)arg1, arg2);
	case 0x1427F4780: return sub_1427F4780((DWORD*)arg1, arg2);
	case 0x1427F47A0: return sub_1427F47A0((DWORD*)arg1, arg2);
	case 0x1427F47C0: return sub_1427F47C0((DWORD*)arg1, arg2);
	case 0x1427F47E0: return sub_1427F47E0((DWORD*)arg1, arg2);
	case 0x1427F4800: return sub_1427F4800((DWORD*)arg1, arg2);
	case 0x1427F4820: return sub_1427F4820((DWORD*)arg1, arg2);
	case 0x1427F4840: return sub_1427F4840((DWORD*)arg1, arg2);
	case 0x1427F4860: return sub_1427F4860((DWORD*)arg1, arg2);
	case 0x1427F4880: return sub_1427F4880((DWORD*)arg1, arg2);
	case 0x1427F48A0: return sub_1427F48A0((DWORD*)arg1, arg2);
	case 0x1427F48C0: return sub_1427F48C0((DWORD*)arg1, arg2);
	case 0x1427F48E0: return sub_1427F48E0((DWORD*)arg1, arg2);
	case 0x1427F4900: return sub_1427F4900((DWORD*)arg1, arg2);
	}
	return 0;
}

void __fastcall sub_1409FE730(ULONG64 pid,ULONG64 a1, int *a2, unsigned int n3, __int16 a4)
{
	int v8; // r14d
	int v9; // r10d
	__int64 v10; // rax
	int v11; // r10d
	__int64 v12; // rax
	__int64 v13; // rdx
	__int64 v14; // rax
	__int64 v15; // r8
	__int64 v16; // rdx
	__int64 v17; // rax
	__int64 v18; // rax
	__int64 v19; // rdx
	__int64 v20; // rdx
	__int64 v21; // rcx
	__int64 v22; // rax
	__int64 v23; // rcx
	__int64 v24; // rdx
	__int64 v25; // r8
	__int64 v26; // rdx
	__int64 v27; // rdx
	__int64 v28; // r8
	__int64 v29; // rdx
	__int64 v30; // rdx
	__int64 v31; // r8
	__int64 v32; // rdx
	__int64 v33; // rax
	__int64 v34; // rax
	__int64 v35; // rdx
	__int64 v36; // r8
	__int64 v37; // r8
	__int64 v38; // rcx
	__int64 v39; // rdx
	__int64 v40; // rcx
	__int64 v41; // rax
	__int64 v42; // rdx
	__int64 v43; // rdx
	__int64 v44; // rdx
	__int64 v45; // rdx
	__int64 v46; // rdx
	__int64 v47; // rax
	__int64 v48; // r8
	__int64 v49; // rcx
	__int64 v50; // rdx
	__int64 v51; // rcx
	__int64 v52; // rcx
	__int64 v53; // rax
	__int64 v54; // rcx
	__int64 v55; // r8
	__int64 v56; // rax
	__int64 v57; // rax
	__int64 v58; // r8
	__int64 v59; // rdx
	__int64 v60; // rcx
	__int64 v61; // rdx
	__int64 v62; // rcx
	__int64 v63; // rcx
	__int64 v64; // rdx
	__int64 v65; // rdx
	__int64 v66; // rdx
	__int64 v67; // rdx
	__int64 v68; // r8
	__int64 v69; // rax
	__int64 v70; // rdx
	__int64 v71; // rax
	__int64 v72; // rdx
	__int64 v73; // rcx
	__int64 v74; // rdx
	__int64 v75; // rcx
	__int64 v76; // rdx
	__int64 v77; // rax
	__int64 v78; // rcx
	__int64 v79; // rdx
	__int64 v80; // rax
	__int64 v81; // rax
	__int64 v82; // rcx
	__int64 v83; // rcx
	__int64 v84; // rdx
	__int64 v85; // rdx
	__int64 v86; // rdx
	__int64 v87; // rax
	__int64 v88; // r8
	__int64 v89; // r8
	__int64 v90; // rax
	__int64 v91; // rax
	__int64 v92; // rdx
	__int64 v93; // rcx
	__int64 v94; // rcx
	__int64 v95; // rcx
	__int64 v96; // r8
	__int64 v97; // rdx
	__int64 v98; // rdx
	__int64 v99; // rcx
	__int64 v100; // rdx
	__int64 v101; // rcx
	__int64 v102; // rdx
	__int64 v103; // rax
	__int64 v104; // r8
	__int64 v105; // rdx
	__int64 v106; // rdx
	__int64 v107; // rdx
	__int64 v108; // rcx
	__int64 v109; // rdx
	__int64 v110; // r8
	__int64 v111; // rax
	__int64 v112; // rcx
	__int64 v113; // rcx
	__int64 v114; // rcx
	__int64 v115; // rdx
	__int64 v116; // rcx
	__int64 v117; // rax
	__int64 v118; // r8
	__int64 v119; // rdx
	__int64 v120; // rdx
	__int64 v121; // rdx
	__int64 v122; // rdx
	__int64 v123; // rcx
	DWORD *v124; // rdx
	__int64 v125; // rcx
	__int64 v126; // rax
	__int64 v127; // rax
	__int64 v128; // rax
	__int64 v129; // rdx
	__int64 v130; // rax
	__int64 v131; // rax
	__int64 v132; // rdx
	__int64 v133; // r8
	__int64 v134; // rdx
	__int64 v135; // rax
	__int64 v136; // rax
	__int64 v137; // rdx
	__int64 v138; // r8
	int v139; // ecx
	__int64 v140; // rcx
	__int64 v141; // rax
	__int64 v142; // rdx
	__int64 v143; // rax
	__int64 v144; // rdx
	__int64 v145; // rax
	__int64 v146; // rcx
	__int64 v147; // r8
	__int64 v148; // rcx
	__int64 v149; // rax
	__int64 v150; // r8
	__int64 v151; // rdx
	__int64 v152; // r8
	__int64 v153; // rdx
	__int64 v154; // rax
	__int64 v155; // rdx
	__int64 v156; // rdx
	__int64 v157; // rax
	__int64 v158; // rdx
	__int64 v159; // rdx
	__int64 v160; // rdx
	__int64 v161; // rax
	__int64 v162; // rcx
	DWORD *v163; // r8
	__int64 v164; // rdx
	__int64 v165; // rdx
	__int64 v166; // rdx
	__int64 v167; // rcx
	__int64 v168; // rax
	__int64 v169; // rcx
	__int64 v170; // rax
	__int64 v171; // rdx
	__int64 v172; // rcx
	DWORD *v173; // rdx
	__int64 v174; // rdx
	__int64 v175; // rax
	__int64 v176; // rcx
	__int64 v177; // rdx
	__int64 v178; // rcx
	__int64 v179; // rcx
	__int64 v180; // rdx
	__int64 v181; // rcx
	__int64 v182; // rdx
	__int64 v183; // rcx
	__int64 v184; // rcx
	__int64 v185; // rax
	__int64 v186; // rdx
	__int64 v187; // rax
	__int64 v188; // rdx
	__int64 v189; // rdx
	__int64 v190; // rdx
	__int64 v191; // r8
	__int64 v192; // rax
	__int64 v193; // rax
	__int64 v194; // rax
	__int64 v195; // rdx
	__int64 v196; // rcx
	__int64 v197; // rcx
	__int64 v198; // rdx
	__int64 v199; // rcx
	__int64 v200; // r8
	__int64 v201; // rax
	__int64 v202; // rdx
	__int64 v203; // rdx
	__int64 v204; // rdx
	__int64 v205; // rdx
	__int64 v206; // rcx
	__int64 v207; // rax
	__int64 v208; // rax
	__int64 v209; // r8
	int v210; // eax
	__int64 v211; // rdx
	__int64 v212; // rdx
	__int64 v213; // rdx
	__int64 v214; // rdx
	__int64 v215; // rcx
	__int64 v216; // r8
	__int64 v217; // rcx
	__int64 v218; // rdx
	int v219; // r10d
	__int64 v220; // rcx
	__int64 v221; // rdx
	__int64 v222; // rax
	__int64 v223; // rax
	__int64 v224; // rcx
	__int64 v225; // rdx
	__int64 v226; // rdx
	__int64 v227; // rax
	__int64 v228; // rdx
	__int64 v229; // rdx
	__int64 v230; // rax
	__int64 v231; // rdx
	DWORD *v232; // rdx
	__int64 v233; // rcx
	__int64 v234; // rdx
	__int64 v235; // rdx
	__int64 v236; // rax
	__int64 v237; // rcx
	__int64 v238; // rdx
	__int64 v239; // rcx
	__int64 v240; // rcx
	__int64 v241; // rdx
	__int64 v242; // rcx
	__int64 v243; // rdx
	__int64 v244; // rdx
	__int64 v245; // rdx
	__int64 v246; // r8
	__int64 v247; // r8
	__int64 v248; // rcx
	__int64 v249; // rdx
	__int64 v250; // rdx
	__int64 v251; // rdx
	__int64 v252; // rcx
	__int64 v253; // rdx
	__int64 v254; // rdx
	__int64 v255; // rdx
	__int64 v256; // rdx
	__int64 v257; // rcx
	__int64 v258; // rax
	__int64 v259; // rax
	__int64 v260; // rdx
	__int64 v261; // rdx
	__int64 v262; // rax
	__int64 v263; // rdx
	__int64 v264; // rdx
	__int64 v265; // r8
	__int64 v266; // rdx
	__int64 v267; // rcx
	__int64 v268; // rdx
	__int64 v269; // rdx
	__int64 v270; // rdx
	__int64 v271; // rcx
	__int64 v272; // rax
	__int64 v273; // rcx
	__int64 v274; // rdx
	__int64 v275; // rcx
	__int64 v276; // rax
	__int64 v277; // rax
	__int64 v278; // rdx
	__int64 v279; // rdx
	__int64 v280; // rdx
	__int64 v281; // rax
	__int64 v282; // rax
	__int64 v283; // rcx
	__int64 v284; // rax
	__int64 v285; // rcx
	__int64 v286; // rcx
	__int64 v287; // rdx
	__int64 v288; // rcx
	__int64 v289; // rcx
	__int64 v290; // rcx
	__int64 v291; // rdx
	__int64 v292; // rax
	__int64 v293; // rax
	__int64 v294; // r8
	__int64 v295; // rcx
	__int64 v296; // rdx
	__int64 v297; // rax
	__int64 v298; // rcx
	__int64 v299; // rcx
	__int64 v300; // r8
	__int64 v301; // rdx
	__int64 v302; // rcx
	__int64 v303; // rdx
	__int64 v304; // rdx
	__int64 v305; // rax
	__int64 v306; // rdx
	__int64 v307; // r8
	__int64 v308; // rcx
	__int64 v309; // rax
	__int64 v310; // rdx
	__int64 v311; // rdx
	__int64 v312; // rax
	__int64 v313; // rcx
	__int64 v314; // rax
	__int64 v315; // rcx
	__int64 v316; // rdx
	__int64 v317; // rcx
	__int64 v318; // rax
	__int64 v319; // rdx
	__int64 v320; // rdx
	__int64 v321; // rcx
	__int64 v322; // rdx
	__int64 v323; // rcx
	__int64 v324; // rdx
	__int64 v325; // rax
	__int64 v326; // rdx
	__int64 v327; // rcx
	__int64 v328; // rdx
	DWORD *v329; // rcx
	__int64 v330; // rax
	__int64 v331; // rcx
	__int64 v332; // rdx
	__int64 v333; // rcx
	__int64 v334; // rcx
	__int64 v335; // rcx
	__int64 v336; // rdx
	__int64 v337; // rdx
	__int64 v338; // rax
	__int64 v339; // rdx
	__int64 v340; // rcx
	__int64 v341; // rdx
	__int64 v342; // rcx
	__int64 v343; // rdx
	__int64 v344; // rax
	__int64 v345; // rax
	__int64 v346; // rdx
	__int64 v347; // rax
	__int64 v348; // rdx
	__int64 v349; // rdx
	__int64 v350; // rax
	__int64 v351; // rcx
	__int64 v352; // rax
	__int64 v353; // rax
	__int64 v354; // rax
	__int64 v355; // rdx
	__int64 v356; // rdx
	__int64 v357; // rax
	__int64 v358; // r8
	__int64 v359; // rcx
	__int64 v360; // rax
	__int64 v361; // rdx
	__int64 v362; // rdx
	__int64 v363; // rdx
	__int64 v364; // rdx
	__int64 v365; // rdx
	__int64 v366; // rax
	__int64 v367; // rax
	__int64 v368; // rdx
	__int64 v369; // rax
	__int64 v370; // rcx
	__int64 v371; // rcx
	__int64 v372; // rdx
	__int64 v373; // rdx
	__int64 v374; // rdx
	__int64 v375; // rcx
	__int64 v376; // rax
	__int64 v377; // rax
	__int64 v378; // r8
	__int64 v379; // rax
	__int64 v380; // rcx
	__int64 v381; // rax
	__int64 v382; // rdx
	__int64 v383; // rcx
	__int64 v384; // rdx
	__int64 v385; // rcx
	__int64 v386; // rdx
	__int64 v387; // rcx
	__int64 v388; // rdx
	__int64 v389; // rcx
	DWORD *v390; // rdx
	DWORD *v391; // rdx
	__int64 v392; // rcx
	__int64 v393; // rdx
	__int64 v394; // rax
	__int64 v395; // rdx
	__int64 v396; // rax
	__int64 v397; // rax
	__int64 v398; // rdx
	__int64 v399; // rax
	__int64 v400; // rdx
	__int64 v401; // rcx
	__int64 v402; // rdx
	__int64 v403; // r8
	__int64 v404; // rdx
	__int64 v405; // rdx
	__int64 v406; // rdx
	__int64 v407; // rax
	__int64 v408; // rdx
	__int64 v409; // rcx
	__int64 v410; // rdx
	__int64 v411; // rdx
	__int64 v412; // rdx
	__int64 v413; // rax
	__int64 v414; // rcx
	__int64 v415; // rdx
	__int64 v416; // rdx
	__int64 v417; // rax
	__int64 v418; // rcx
	__int64 v419; // rcx
	__int64 v420; // rcx
	__int64 v421; // rdx
	__int64 v422; // rdx
	__int64 v423; // rdx
	__int64 v424; // rax
	__int64 v425; // rdx
	__int64 v426; // rdx
	__int64 v427; // rcx
	__int64 v428; // rdx
	__int64 v429; // rdx
	__int64 v430; // rdx
	__int64 v431; // rdx
	__int64 v432; // rdx
	__int64 v433; // rcx
	__int64 v434; // rax
	__int64 v435; // rcx
	__int64 v436; // rax
	__int64 v437; // r8
	__int64 v438; // rax
	__int64 v439; // rcx
	__int64 v440; // rcx
	__int64 v441; // rdx
	__int64 v442; // rax
	__int64 v443; // rax
	__int64 v444; // rax
	__int64 v445; // rdx
	__int64 v446; // rdx
	__int64 v447; // rdx
	__int64 v448; // rax
	__int64 v449; // rax
	__int64 v450; // rdx
	__int64 v451; // rdx
	__int64 v452; // rcx
	__int64 v453; // rdx
	__int64 v454; // rcx
	__int64 v455; // rdx
	__int64 v456; // rdx
	__int64 v457; // rdx
	__int64 v458; // rdx
	__int64 v459; // rcx
	__int64 v460; // rdx
	DWORD *v461; // rdx
	__int64 v462; // rdx
	__int64 v463; // rax
	__int64 v464; // rcx
	__int64 v465; // rdx
	__int64 v466; // rdx
	__int64 v467; // rdx
	__int64 v468; // rdx
	__int64 v469; // rdx
	void(__fastcall **v470)(int *, ULONG64); // rdx
	__int64 v471; // rdx
	__int64 v472; // rax
	__int64 v473; // rcx
	__int64 v474; // rdx
	__int64 v475; // rdx
	__int64 v476; // rdx
	__int64 v477; // rcx
	__int64 v478; // rdx
	__int64 v479; // rcx
	__int64 v480; // rdx
	__int64 v481; // rdx
	__int64 v482; // rdx
	__int64 v483; // rdx
	__int64 v484; // rdx
	__int64 v485; // rcx
	__int64 v486; // rdx
	__int64 v487; // rcx
	__int64 v488; // rcx
	__int64 v489; // rdx
	__int64 v490; // rax
	__int64 v491; // r8
	__int64 v492; // rdx
	__int64 v493; // rax
	__int64 v494; // rcx
	__int64 v495; // rax
	__int64 v496; // rdx
	__int64 v497; // r8
	__int64 v498; // rax
	__int64 v499; // rdx
	__int64 v500; // rdx
	__int64 v501; // rax
	__int64 v502; // rdx
	__int64 v503; // rdx
	__int64 v504; // rax
	__int64 v505; // rdx
	__int64 v506; // rdx
	__int64 v507; // r8
	__int64 v508; // rcx
	__int64 v509; // rcx
	__int64 v510; // r8
	__int64 v511; // rax
	__int64 v512; // rcx
	__int64 v513; // rdx
	__int64 v514; // rax
	__int64 v515; // rax
	__int64 v516; // rax
	DWORD *v517; // rax
	__int64 v518; // rcx
	__int64 v519; // rax
	__int64 v520; // rdx
	__int64 v521; // rdx
	__int64 v522; // r8
	__int64 v523; // r8
	__int64 v524; // rcx
	__int64 v525; // rax
	__int64 v526; // rdx
	__int64 v527; // rdx
	__int64 v528; // rdx
	__int64 v529; // r8
	__int64 v530; // rdx
	__int64 v531; // r9
	__int64 v532; // rdx
	__int64 v533; // rdx
	__int64 v534; // r8
	__int64 v535; // rdx
	__int64 v536; // rcx
	__int64 v537; // rcx
	__int64 v538; // rcx
	__int64 v539; // rdx
	__int64 v540; // rax
	__int64 v541; // rcx
	__int64 v542; // rdx
	__int64 v543; // rdx
	__int64 v544; // rdx
	__int64 v545; // rax
	__int64 v546; // rcx
	__int64 v547; // rdx
	__int64 v548; // rax
	__int64 v549; // rdx
	__int64 v550; // rax
	__int64 v551; // rax
	__int64 v552; // rdx
	__int64 v553; // rdx
	DWORD *v554; // rax
	__int64 v555; // rdx
	__int64 v556; // rdx
	__int64 v557; // rax
	__int64 v558; // rcx
	__int64 v559; // rcx
	__int64 v560; // rdx
	__int64 v561; // rcx
	__int64 v562; // rdx
	__int64 v563; // rdx
	__int64 v564; // rcx
	__int64 v565; // rdx
	__int64 v566; // rcx
	__int64 v567; // rcx
	__int64 v568; // rdx
	__int64 v569; // rdx
	__int64 v570; // rcx
	__int64 v571; // rdx
	__int64 v572; // rdx
	__int64 v573; // rax
	__int64 v574; // rcx
	__int64 v575; // rcx
	__int64 v576; // rax
	__int64 v577; // rdx
	__int64 v578; // rdx
	__int64 v579; // r8
	__int64 v580; // r8
	__int64 v581; // rdx
	__int64 v582; // rcx
	__int64 v583; // rax
	__int64 v584; // rcx
	__int64 v585; // rax
	__int64 v586; // rcx
	__int64 v587; // rcx
	__int64 v588; // rcx
	__int64 v589; // rax
	__int64 v590; // rdx
	__int64 v591; // rcx
	__int64 v592; // rdx
	__int64 v593; // rcx
	__int64 v594; // rcx
	__int64 v595; // rax
	__int64 v596; // rdx
	__int64 v597; // r8
	__int64 v598; // rdx
	__int64 v599; // rdx
	__int64 v600; // rax
	__int64 v601; // rdx
	__int64 v602; // rax
	__int64 v603; // rcx
	__int64 v604; // rax
	__int64 v605; // rcx
	__int64 v606; // rdx
	__int64 v607; // rcx
	__int64 v608; // rax
	__int64 v609; // rcx
	__int64 v610; // rcx
	__int64 v611; // rdx
	__int64 v612; // rdx
	__int64 v613; // rax
	__int64 v614; // rax
	__int64 v615; // rax
	__int64 v616; // rcx
	__int64 v617; // rcx
	__int64 v618; // rax
	__int64 v619; // rdx
	__int64 v620; // rcx
	__int64 v621; // rax
	__int64 v622; // rax
	__int64 v623; // rdx
	__int64 v624; // rcx
	__int64 v625; // rdx
	__int64 v626; // rcx
	__int64 v627; // rax
	__int64 v628; // rax
	__int64 v629; // rdx
	__int64 v630; // rdx
	__int64 v631; // rcx
	__int64 v632; // rdx
	__int64 v633; // rdx
	__int64 v634; // rcx
	__int64 v635; // rax
	int v636; // [rsp+60h] [rbp+40h] BYREF

	gpid = pid;
	if (n3 > 3)
	{
		v8 = 0;
		while (2)
		{
			v9 = *a2;
			v636 = *a2;
			switch (((WORD)v8 + a4) & 0x3FF)
			{
			case 0:
				v636 = v9 ^ 0x10D30B09;
				v636 = (v9 ^ 0x10D30B09)
					+ readEx<ULONG32>(a1 + 544LL)
					- readEx<ULONG32>(readEx<ULONG64>(readEx<ULONG64>(a1 + 880LL) + 824LL) + 88LL)
					+ 1;
				goto LABEL_1033;
			case 1:
				v10 = a1;
				v636 = (v9 + readEx<ULONG32>(a1 + 312LL)) ^ 0x73BE1445;
				v636 ^= ~readEx<ULONG32>(v10 + 480) ^ (-1407346432 * readEx<ULONG32>(v10 + 784));
				goto LABEL_1033;
			case 2:
				v636 = ~v9;
				v11 = ~v9
					- readEx<ULONG32>(readEx<ULONG64>(readEx<ULONG64>(readEx<ULONG64>(readEx<ULONG64>(readEx<ULONG64>(a1 + 896LL) + 368LL) + 704LL)
						+ 376LL)
						+ 240LL)
						+ 152LL);
				goto LABEL_1032;
			case 3:
				v636 = v9
					^ (readEx<ULONG32>(readEx<ULONG64>(a1 + 840LL) + 320LL) * (readEx<ULONG32>(a1 + 312LL) ^ readEx<ULONG32>(a1 + 776LL)));
				goto LABEL_1033;
			case 4:
				v12 = a1;
				v636 = v9 - readEx<ULONG32>(a1 + 480LL);
				v636 = (readEx<ULONG32>(v12 + 776) ^ v636) - 1571619757;
				v636 ^= readEx<ULONG32>(readEx<ULONG64>(v12 + 880) + 112LL) | 1;
				goto LABEL_1033;
			case 5:
				v11 = readEx<ULONG32>(readEx<ULONG64>(readEx<ULONG64>(readEx<ULONG64>(readEx<ULONG64>(readEx<ULONG64>(readEx<ULONG64>(a1 + 40LL) + 144LL)
					+ 136LL)
					+ 736LL)
					+ 664LL)
					+ 664LL)
					+ 712LL)
					^ v9;
				goto LABEL_1032;
			case 6:
				v13 = a1;
				v636 = v9 - readEx<ULONG32>(a1 + 712LL) - 484729133;
				decall2(v13 + 792, &v636, v13);
				v636 = ~v636;
				goto LABEL_1033;
			case 7:
				v14 = a1;
				v636 = readEx<ULONG32>(a1 + 776LL) ^ v9;
				v11 = v636
					- readEx<ULONG32>(readEx<ULONG64>(readEx<ULONG64>(readEx<ULONG64>(readEx<ULONG64>(readEx<ULONG64>(v14 + 184) + 40LL) + 664LL)
						+ 432LL)
						+ 136LL)
						+ 408LL);
				goto LABEL_1032;
			case 8:
				v636 = v9 + ~(~readEx<ULONG32>(a1 + 248LL) + readEx<ULONG32>(readEx<ULONG64>(readEx<ULONG64>(a1 + 664LL) + 360LL) + 320LL));
				goto LABEL_1033;
			case 9:
				v15 = a1;
				v636 = v9 + readEx<ULONG32>(a1 + 712LL) + 701417634;
				v636 += readEx<ULONG32>(v15 + 480);
				v636 ^= readEx<ULONG32>(v15 + 48);
				goto LABEL_1033;
			case 0xA:
				v636 = v9 ^ 0xA0A01329;
				decall1((readEx<ULONG64>(a1 + 416LL) + 456LL),&v636);
				goto LABEL_1033;
			case 0xB:
				v16 = a1;
				v636 = v9 + readEx<ULONG32>(readEx<ULONG64>(a1 + 736LL) + 112LL);
				v636 = (v636 ^ *(unsigned __int16 *)(v16 + 778)) + 2031849187;
				v636 += readEx<ULONG32>(v16 + 744);
				goto LABEL_1033;
			case 0xC:
				v636 = v9
					^ readEx<ULONG32>(readEx<ULONG64>(readEx<ULONG64>(a1 + 184LL) + 368LL) + 640LL)
					^ readEx<ULONG32>(readEx<ULONG64>(readEx<ULONG64>(a1 + 600LL) + 592LL) + 576LL);
				goto LABEL_1033;
			case 0xD:
				v17 = a1;
				v636 = v9 - readEx<ULONG32>(a1 + 112LL);
				v11 = readEx<ULONG32>(readEx<ULONG64>(readEx<ULONG64>(readEx<ULONG64>(readEx<ULONG64>(readEx<ULONG64>(v17 + 432) + 736LL) + 240LL)
					+ 736LL)
					+ 368LL)
					+ 808LL)
					^ v636;
				goto LABEL_1032;
			case 0xE:
				v636 = v9 ^ 0x8EF02CDA;
				v18 = a1;
				v636 = (v9 ^ 0x8EF02CDA) - readEx<ULONG32>(a1 + 776LL);
				v11 = readEx<ULONG32>(readEx<ULONG64>(readEx<ULONG64>(readEx<ULONG64>(v18 + 664) + 880LL) + 648LL) + 280LL) ^ v636;
				goto LABEL_1032;
			case 0xF:
				decall1(readEx<ULONG64>(readEx<ULONG64>(readEx<ULONG64>(readEx<ULONG64>(a1 + 272LL) + 704LL) + 416LL) + 592LL) + 912LL,&v636);
				goto LABEL_1033;
			LABEL_1032:
				v636 = v11;
			LABEL_1033:
				v8 += 4;
				*a2++ = v636;
				if (v8 + 3 >= n3)
					return;
				continue;
			}
		}
	}
}