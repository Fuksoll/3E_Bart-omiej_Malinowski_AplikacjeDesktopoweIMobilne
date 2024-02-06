#include <iostream>

using namespace std;

int fibonaci(int n) {
	int i, l1, l2, wynik;
	if (n < 3) wynik = 1;
	else {
		l1 = 1; l2 = 1;
		for (i = 3; i <= n; i++)
		{
			wynik = l1 + l2;
			l2 = l1;
			l1 = wynik;
		}
	}
	return wynik;
}

int main()
{
	int ile, j;
	cout << "ile elementow ciagu fibonaciego wyswietlic" << endl;
	cin >> ile;
	cout << "interakcja for " << endl;
	for (j = 1; j <= ile; j++) cout << fibonaci(j) << "  ";
	return 0;
}