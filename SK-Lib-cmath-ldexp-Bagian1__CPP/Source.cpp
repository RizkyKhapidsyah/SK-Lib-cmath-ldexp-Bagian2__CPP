// C++ program to illustrate the
// ldexp() function
#include <iostream>
#include <cmath>
#include <conio.h>

/*	Source by GeeksForGeeks
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 */

using namespace std;

int main() {
	double x = 6, result;
	int exp = 2;

	// It returns x*(2^exp)
	result = ldexp(x, exp);

	// print the result
	cout << "ldexp(x, exp) = " << result << endl;

	_getch();
	return 0;
}
