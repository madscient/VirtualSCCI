#pragma once
#include "vSoundChip.h"
#include "../fmgen/headers.h"
#include "../fmgen/misc.h"
#include "../fmgen/opm.h"
#include "../fmgen/opna.h"

class VOPM :
	public vSoundChip
{
protected:
	FM::OPM* theopm;
public:
	VOPM(int clock, int rate);
	~VOPM();
	// set Register data
	virtual BOOL __stdcall setRegister(DWORD dAddr, DWORD dData);
	// get Register data(It may not be supported)
	virtual DWORD __stdcall getRegister(DWORD dAddr);
	// initialize sound chip(clear registers)
	virtual BOOL __stdcall init();
	virtual size_t getWaveData(signed short* buf, size_t size);
};

class VOPN :
	public vSoundChip
{
protected:
	FM::OPN* theopn;
public:
	VOPN(int clock, int rate);
	~VOPN();
	// set Register data
	virtual BOOL __stdcall setRegister(DWORD dAddr, DWORD dData);
	// get Register data(It may not be supported)
	virtual DWORD __stdcall getRegister(DWORD dAddr);
	// initialize sound chip(clear registers)
	virtual BOOL __stdcall init();
	virtual size_t getWaveData(signed short* buf, size_t size);
};

class VOPNA : public vSoundChip
{
protected:
	FM::OPNA* theopna;
public:
	VOPNA(int clock, int rate);
	~VOPNA();
	// set Register data
	virtual BOOL __stdcall setRegister(DWORD dAddr, DWORD dData);
	// get Register data(It may not be supported)
	virtual DWORD __stdcall getRegister(DWORD dAddr);
	// initialize sound chip(clear registers)
	virtual BOOL __stdcall init();
	virtual size_t getWaveData(signed short* buf, size_t size);
};

class VPSG : public vSoundChip
{
protected:
	PSG* thepsg;
public:
	VPSG(int clock, int rate);
	~VPSG();
	// set Register data
	virtual BOOL __stdcall setRegister(DWORD dAddr, DWORD dData);
	// get Register data(It may not be supported)
	virtual DWORD __stdcall getRegister(DWORD dAddr);
	// initialize sound chip(clear registers)
	virtual BOOL __stdcall init();
	virtual size_t getWaveData(signed short* buf, size_t size);
};
