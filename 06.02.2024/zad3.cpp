#include <iostream>

using namespace std;

double zamiana(int mila)
{
	double kilometr;
	kilometr = mila * 1.609;
	cout << "wynik w km " << kilometr << endl;
	return 0;
}

int main()
{
	double mila;
	cout << "podaj ilosc mil " << endl;
	cin >> mila;
	zamiana(mila);
	return 0;
}