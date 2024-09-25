#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, a, b, c, F;
	
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;

	cout << "x = "; cin >> x;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "F" << " |" << endl;
	cout << "---------------------------" << endl;

	x = xp;

   
    if (x < 1 && c != 0) {
        F = (a * (x * x) + (b / c));
    }
    
    else if (x > 1, 5 && c == 0) {
        F = (x - a) / ((x - c) * (x - c));
    }
    
    else if (!(x < 1 && c != 0) && !(x > 1, 5 && c == 0)) {
        F = (x * x) / (c * c);
    }
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << x << " |"
		<< setw(7) << F << " |" << endl;
	cout << "---------------------------" << endl;

}


