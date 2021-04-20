#include "Point.h"
Point::Point()
{
	x = 0;
	y = 0;
}
Point::Point(double a, double b) throw (out_of_range)
{
	if (abs(a) > 100 || abs(b) > 100)
		throw out_of_range("abs(x) or abs(y) > 100");
	x = a;
	y = b;
}
Point::Point(const Point& A)
{
	x = A.x;
	y = A.y;
}
ostream& operator << (ostream& out, const Point& A)
{
	return out << string(A);
}
istream& operator >>(istream& in, Point& A)
{
	do {
		cout << "Enter x: "; in >> A.x;
		cout << "Enter y: "; in >> A.y;
		cout << endl;
	} while (abs(A.x) > 100 || abs(A.y) > 100);
	return in;
}
Point::operator string() const
{
	stringstream ss;
	ss << "x= " << x << "  y= " << y << endl;
	return ss.str();
}
void Point::moveX()
{
	float rx;
	cin >> rx;
	x += rx;
	cout << x;
	toString();

}

void Point::moveY()
{
	float ry;

	cin >> ry;
	y += ry;
	cout << y;
	cout << endl;
	toString();
	Distance();
}
string Point::toString() const
{
	stringstream SS;
	SS << "(" << x << "; " << y << ")" << endl;
	return SS.str();
}

Point& Point::operator --() throw (myerror_base)
{
	if (x == -100)
		throw new myerror_base();
	--x;
	return *this;
}
Point& Point::operator ++()
{
	if (x == 100)
		throw new myerror_base();
	++x;
	return *this;
}
Point Point::operator --(int)
{
	if (y == -100)
		throw new myerror_base();
	Point tmp(*this);
	y--;
	return tmp;
}
Point Point::operator ++(int)
{
	if (y == 100)
		throw new myerror_base();
	Point tmp(*this);
	y++;
	return tmp;
}
bool Point::operator ==(const Point& A)
{
	if (x == A.x && y == A.y)
		return true;
	else
		return false;
}
bool Point::operator !=(const Point& A)
{
	if (x != A.x || y != A.y)
		return true;
	else
		return false;
}
