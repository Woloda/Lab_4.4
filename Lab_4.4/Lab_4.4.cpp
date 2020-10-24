// Lab_4.4.cpp
// Дорожовець Володимир 
// Лабораторна робота № 4.4
// Табуляція функції, заданої графіком.
// Варіант 0.6 
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double x, y, R, xp, xk, dx;

	cout << "R = "; cin >> R;
	cout << endl;
	cout << "xp = "; cin >> xp;
	cout << endl;
	cout << "xk = "; cin >> xk;
	cout << endl;
	cout << "dx = "; cin >> dx;
	cout << endl;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(14) << " y " << "           |" << endl;
	cout << "---------------------------" << endl;

	x = xp;

	while (x <= xk)
	{
		if (x <= -5)
			y = -3;
		else
			if (-5 < x && x <= -R)
				y = (3 * (R + x)) / (-R + 5);
			else
				if (-R < x && x <= R)
					y = sqrt(R * R - x * x);
				else
					if (R < x && x <= 8)
						y = (R * x - R * R) / (8 - R);
					else
							y = R;

		cout << "|" << setw(15) << setprecision(3) << y << "          |" << endl;

		x += dx;
	}
	cout << "---------------------------" << endl;

	cin.get();
	return 0;
}
