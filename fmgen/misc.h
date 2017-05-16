// ---------------------------------------------------------------------------
//	misc.h
//	Copyright (C) cisc 1998, 1999.
// ---------------------------------------------------------------------------
//	$Id: misc.h,v 1.5 2002/05/31 09:45:20 cisc Exp $

#ifndef MISC_H
#define MISC_H

#define M_PI	3.1415926535

inline int Max(int x, int y) { return (x > y) ? x : y; }
inline int Min(int x, int y) { return (x < y) ? x : y; }
inline int Abs(int x) { return x >= 0 ? x : -x; }

inline int Limit(int v, int max, int min) 
{ 
	return v > max ? max : (v < min ? min : v); 
}

inline unsigned int BSwap(unsigned int a)
{
	return (a >> 24) | ((a >> 8) & 0xff00) | ((a << 8) & 0xff0000) | (a << 24);
}

inline unsigned int NtoBCD(unsigned int a)
{
	return ((a / 10) << 4) + (a % 10);
}

inline unsigned int BCDtoN(unsigned int v)
{
	return (v >> 4) * 10 + (v & 15);
}


template<class T>
inline T gcd(T x, T y)
{
	T t;
	while (y)
	{
		t = x % y;
		x = y;
		y = t;
	}
	return x;
}


template<class T>
T bessel0(T x)
{
	T p, r, s;

	r = 1.0;
	s = 1.0;
	p = (x / 2.0) / s;

	while (p > 1.0E-10)
	{
		r += p * p;
		s += 1.0;
		p *= (x / 2.0) / s;
	}
	return r;
}

//**************************************************//
//                                                  //
//  Helper functions                                //
//                                                  //
//**************************************************//

static const double DB_STEP = 0.1875;
static const int DB_BITS = 9;
static const int DB_MUTE = 1<<DB_BITS;

static const int CLK_FREQ = 3579545;

inline int ALIGN(int d, double SS, double SD) 
{ 
	return d*(int)(SS/SD);
}

inline int DB_POS(int x)
{
	return (int)(x/DB_STEP);
}

inline int DB_NEG(int x)
{
	return (int)(2*DB_MUTE+x/DB_STEP);
}

// Cut the lower b bits off
inline int HIGHBITS(int c, int b)
{
	return c >> b;
}
// Leave the lower b bits
inline int LOWBITS(int c, int b)
{
	return c & ((1<<b)-1);
}
// Expand x which is s bits to d bits
inline int EXPAND_BITS(int x, int s, int d)
{
	return x << (d-s);
}
// Adjust envelope speed which depends on sampling rate
inline unsigned int rate_adjust(double x, int rate)
{
	double tmp = x * CLK_FREQ / 72 / rate + 0.5; // +0.5 to round
//	assert (tmp <= 4294967295U);
	return (unsigned int)tmp;
}


#endif // MISC_H

