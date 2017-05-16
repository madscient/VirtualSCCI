#pragma once
#include "scci.h"
class vSoundChip :
	public SoundChip
{
protected:
	SCCI_SOUND_CHIP_INFO theinfo;
	bool inuse;
	int theclock;
	int therate;
public:
	vSoundChip(int clock, int rate);
	~vSoundChip();
	virtual SCCI_SOUND_CHIP_INFO* __stdcall getSoundChipInfo() { return &theinfo; };
	// get sound chip type
	virtual int __stdcall getSoundChipType() { return theinfo.iSoundChip; };
	// get sound chip clock
	virtual DWORD __stdcall getSoundChipClock() { return theclock; };
	// get writed register data
	virtual DWORD __stdcall getWrittenRegisterData(DWORD addr) { return 0; };
	// buffer check
	virtual BOOL __stdcall isBufferEmpty() { return false; };

	virtual size_t getWaveData(signed short* buf, size_t size) = 0;
};

