#pragma once
#include <exception>
#include "myerror.h"
#include "myerror_base.h"
class Pair
{
protected:
	double x, y;
public:
	Pair();
	Pair(const double a, const double b) throw (out_of_range);
	Pair(const Pair&);
	bool operator ==(const Pair&);
	bool operator !=(const Pair&);
	bool operator >=(const Pair&);
	bool operator <=(const Pair&);
};
