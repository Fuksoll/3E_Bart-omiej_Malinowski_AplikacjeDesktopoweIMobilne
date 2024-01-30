#include <iostream>
using namespace std;

void obwod(double bok1, double bok2, double pole, double obwod);

int main()
{
	double bok1 = 4.0;
	double bok2 = 3.0;
	double pole, obwodpr;

	obwod(bok1, bok2, pole, obwodpr);

	cout << "obwod prostokata o bokach " << bok1 << "oraz " << bok2 << "wynosi " << obwodpr << endl;
	cout << "pole prostokata o bokach " << bok1 << "oraz " << bok2 << "wynosi " << pole << endl;

	return 0;
}

void obwod(double bok1, double bok2, double pole, double obwod) 
{
	pole = bok1 * bok2;
	obwod = 2 * (bok1 + bok2);
}

