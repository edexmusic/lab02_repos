#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; 
	double y; 
	// double z1;
	double z2; 
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	// z1 = pow(cos (x), 4) + pow(sin (y), 2) + 1./ 4 * pow(sin(2*x), 2) - 1;
	z2 = (sin(y + x)) * (sin(y - x));
	cout << endl;
	// cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	system ("pause");

	return 0;
}