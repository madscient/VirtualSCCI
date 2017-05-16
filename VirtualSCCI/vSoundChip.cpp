#include "stdafx.h"
#include "vSoundChip.h"

vSoundChip::vSoundChip(int clock, int rate) : SoundChip(), inuse(false), theclock(clock), therate(therate)
{
	theinfo.dClock = clock;
	theinfo.dCompatibleClock[0] = 0;
	theinfo.dCompatibleClock[1] = 0;
	theinfo.bIsUsed = false;
	theinfo.iCompatibleSoundChip[0] = SC_CHIP_TYPE::SC_TYPE_NONE;
	theinfo.iCompatibleSoundChip[1] = SC_CHIP_TYPE::SC_TYPE_NONE;
	theinfo.dSoundLocation = 3;
	theinfo.dBusID = 0;
}

vSoundChip::~vSoundChip()
{
}
