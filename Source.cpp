#include "Point.h"
#include <iostream>

using namespace std;

int main()
{
	try {
		Pair A(2, 3);
		Point B;
		cin >> B;
		cout << "Point B: " << B << endl;
		cout << "Moving the point x:";
		B.moveX();
		cout << endl;
		cout << "Moving the point y:";
		B.moveY();
		cout << endl;
	}
	catch (out_of_range e) {
		cout << "exception: " << e.what() << endl;
	}
	try {
		Point C(-100, -100);
		cout << "C: " << C;
		cout << "C--" << endl;
		C--;
		cout << "C: " << endl;
		cout << C;
	}
	catch (myerror_base* e)
	{
		cout << e->what() << endl;
	}
	

	try {
		Point T;
		T.SetX(32);
		T.SetY(101);
		cout << "Point T: " << T << endl;
	}
	catch (myerror& e)
	{
		cout << "exception: " << e.what() << endl;
	}
}