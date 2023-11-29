

#include <iostream>
#include <iomanip> 
using namespace std;


int main() 
 
{
	int a, b, d;
	float x;
	cout << "input a:";
	cin >> a;
	cout << "input b:";
	cin >> b;
	cout << "input d:";
	cin >> d;
	x = (float)(a - b)/(d + 1); 
	cout << "x=" << fixed << setprecision(2) << x << endl; 
	system("pause");
	return 0;
	
}


