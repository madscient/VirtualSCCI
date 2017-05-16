#include "stdafx.h"
#include "vfmgen.h"


VOPM::VOPM(int clock, int rate) : vSoundChip(clock, rate)
{
	theopm = new FM::OPM();
	theopm->Init(clock, rate);
	strncpy(theinfo.cSoundChipName, "YM2151", 64);
}

VOPM::~VOPM()
{
	delete theopm;
}

BOOL __stdcall VOPM::setRegister(DWORD dAddr, DWORD dData)
{
	theopm->SetReg(dAddr, dData);
	return true;
}

DWORD __stdcall VOPM::getRegister(DWORD dAddr)
{
	return theopm->GetReg(dAddr);
}

BOOL __stdcall VOPM::init()
{
	return true;
}

size_t VOPM::getWaveData(signed short* buf, size_t size)
{
	theopm->Mix(buf, size);
	return size;
}

VOPN::VOPN(int clock, int rate) : vSoundChip(clock, rate)
{
	theopn = new FM::OPN();
	theopn->Init(clock, rate);
	strncpy(theinfo.cSoundChipName, "YM2203", 64);
}

VOPN::~VOPN()
{
	delete theopn;
}

BOOL __stdcall VOPN::setRegister(DWORD dAddr, DWORD dData)
{
	theopn->SetReg(dAddr, dData);
	return true;
}

DWORD __stdcall VOPN::getRegister(DWORD dAddr)
{
	return theopn->GetReg(dAddr);
}

BOOL __stdcall VOPN::init()
{
	return true;
}

size_t VOPN::getWaveData(signed short* buf, size_t size)
{
	theopn->Mix(buf, size);
	return size;
}

VOPNA::VOPNA(int clock, int rate) : vSoundChip(clock, rate)
{
	theopna = new FM::OPNA();
	theopna->Init(clock, rate);
	strncpy(theinfo.cSoundChipName, "YM2608", 64);
}

VOPNA::~VOPNA()
{
	delete theopna;
}

BOOL __stdcall VOPNA::setRegister(DWORD dAddr, DWORD dData)
{
	theopna->SetReg(dAddr, dData);
	return true;
}

DWORD __stdcall VOPNA::getRegister(DWORD dAddr)
{
	return theopna->GetReg(dAddr);
}

BOOL __stdcall VOPNA::init()
{
	return true;
}

size_t VOPNA::getWaveData(signed short* buf, size_t size)
{
	theopna->Mix(buf, size);
	return size;
}

VPSG::VPSG(int clock, int rate) : vSoundChip(clock, rate)
{
	thepsg = new PSG();
	thepsg->SetClock(clock, rate);
	strncpy(theinfo.cSoundChipName, "AY-3-8910", 64);
}

VPSG::~VPSG()
{
	delete thepsg;
}

BOOL __stdcall VPSG::setRegister(DWORD dAddr, DWORD dData)
{
	thepsg->SetReg(dAddr, dData);
	return true;
}

DWORD __stdcall VPSG::getRegister(DWORD dAddr)
{
	return thepsg->GetReg(dAddr);
}

BOOL __stdcall VPSG::init()
{
	return true;
}

size_t VPSG::getWaveData(signed short* buf, size_t size)
{
	thepsg->Mix(buf, size);
	return size;
}
