#pragma once
#include "scci.h"
class vSoundChip :
	public SoundChip
{
protected:
	SCCI_SOUND_CHIP_INFO theinfo;
public:
	vSoundChip();
	~vSoundChip();
	virtual SCCI_SOUND_CHIP_INFO* __stdcall getSoundChipInfo() { return &theinfo; };
	// get sound chip type
	virtual int __stdcall getSoundChipType() { return theinfo.iSoundChip; };
};

