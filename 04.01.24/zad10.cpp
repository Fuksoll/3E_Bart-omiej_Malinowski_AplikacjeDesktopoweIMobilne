#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double a = 8; //podstawa
	double h = 6; //wysokosc

	double pole = 0.5 * a * h;
	double obwód = 2 * ((sqrt(pow(a / 2, 2) + pow(h, 2))) + a);

	cout << "dlugosc_podstawy" << a << endl;
	cout << "dlugosc_wysokosc" << h << endl;
	cout << "pole_trojkata" << pole << endl;
	cout << "obwód_trojkata" << obwód << endl;

	return 0;
}
