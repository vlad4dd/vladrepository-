#include <iostream>
#include <iomanip>
#include "math.h"
#include "windows.h"


using namespace std;
int main()
{
	//y=x^1\3+x^3-3

	double x, y, a, b, h;
	cout << "Enter [a,b], h:";
	cin >> a >> b >> h;
	x = a;
	while (x <= b + h / 2)
	{
		y = pow(x, 1 / 3) + pow(x, 3) - 3;
		cout << setw(5) << x << "\t|\t" << setw(10) << y << endl;
		x += h;
	}

	cout << "******************************************" << endl;
	x = a;
	do {
		y = pow(x, 1 / 3) + pow(x, 3) - 3;
		cout << setw(5) << x << "\t|\t" << setw(10) << y << endl;
		x += h;

	} while (x <= b + h / 2);
}