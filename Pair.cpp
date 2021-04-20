#include "Pair.h"
Pair::Pair()
{
	x = 0;
	y = 0;
}
Pair::Pair(const double a, const double b)
{
	if (abs(a) > 100 || abs(b) > 100)
		throw out_of_range("abs(a) or abs(b) > 100");
	x = a;
	y = b;
}
Pair::Pair(const Pair& A)
{
	x = A.x;
	y = A.y;
}
bool Pair::operator ==(const Pair& A)
{
	if (x == A.x && y == A.y)
		return true;
	else
		return false;
}
bool Pair::operator !=(const Pair& A)
{
	if (x != A.x || y != A.y)
		return true;
	else
		return false;
}
bool Pair::operator >=(const Pair& A)
{
	if (x * x + y * y >= A.x * A.x + A.y * A.y)
		return true;
	else
		return false;
}
bool Pair::operator <=(const Pair& A)
{
	if (x * x + y * y <= A.x * A.x + A.y * A.y)
		return true;
	else
		return false;
}