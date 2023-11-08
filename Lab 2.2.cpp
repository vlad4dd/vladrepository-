

#include <iostream>
#include <iomanip> 
using namespace std;


int main() 
 
{
	int a, b, c;
	float x;
	cout << "input a:";
	cin >> a;
	cout << "input b:";
	cin >> b;
	cout << "input c:";
	cin >> c;
	x = (float)(a - b)/(c + 1); 
	cout << "x=" << fixed << setprecision(2) << x << endl; 
	system("pause");
	return 0;
	
}


