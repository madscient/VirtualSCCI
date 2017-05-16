#pragma once
#include "vSoundChip.h"
#include "../fmgen/opm.h"

class VOPM :
	public vSoundChip
{
protected:
	FM::OPM* theopm;
public:
	VOPM();
	~VOPM();
	// set Register data
	virtual BOOL __stdcall setRegister(DWORD dAddr, DWORD dData);
	// get Register data(It may not be supported)
	virtual DWORD __stdcall getRegister(DWORD dAddr);
	// initialize sound chip(clear registers)
	virtual BOOL __stdcall init();
	// get sound chip clock
	virtual DWORD __stdcall getSoundChipClock();
	// get writed register data
	virtual DWORD __stdcall getWrittenRegisterData(DWORD addr);
	// buffer check
	virtual BOOL __stdcall isBufferEmpty();
};

