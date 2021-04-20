#pragma once
#include "Pair.h"
#include <sstream>
#include <string>
#include <iostream>
using namespace std;
class Point : public Pair
{
public:
	Point();
	Point(double a, double b) throw (out_of_range);
	Point(const Point& A);
	friend ostream& operator << (ostream& out, const Point& A);
	friend istream& operator >> (istream& in, Point& A);
	operator string() const;
	void SetX(double value) throw (myerror) { if (abs(value) > 100) throw myerror("abs(x) > 100"); x = value; };
	void SetY(double value) { if (abs(value) > 100) throw myerror("abs(y) > 100"); y = value; };
	double GetX() const { return x; };
	double GetY() const { return y; };
	void moveX();
	void moveY();
	void Distance() const { cout << "Distance: " << sqrt(x * x + y * y) << endl; };
	bool operator ==(const Point&);
	bool operator !=(const Point&);
	Point& operator --() throw (myerror_base);
	Point& operator ++() throw (myerror_base);
	Point operator --(int) throw (myerror_base);
	Point operator ++(int) throw (myerror_base);
	string toString() const;
};