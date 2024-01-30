#include <iostream>
using namespace std;

double obwodPr(double bok1, double bok2);

int main()
{
		double bok1 = 4.0;
		double bok2 = 3.0;

		double obwod = obwodPr(bok1, bok2);

		cout << "obwod prostok¹ta o bokach " << bok1 << "oraz " << bok2 << "wynosi " << obwod << endl;

		return obwod;
}

	double obwodPr(double bok1, double bok2) {
		double obwod = 2 * (bok1 + bok2);
		return obwod;
}