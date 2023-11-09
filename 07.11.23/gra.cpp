#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	int wybierz,bot, n, p, k, j, s;
	n = 1;
	p = 2;
	k = 3;
	j = 4;
	s = 5;

	cout << "1 nozyczki, 2 papier, 3 kamien, 4 jaszczur, 5 spock" << endl;
	cout << "wybierz" << endl;
	cin >> wybierz;
	cout << "twoj wybor" << endl;
	{
		if (wybierz == 1)
		{
			cout << "nozyczki" << endl;
		}
		else if (wybierz == 2)
		{
			cout << "papier" << endl;
		}
		else if (wybierz == 3)
		{
			cout << "kamien" << endl;
		}
		else if (wybierz == 4)
		{
			cout << "jaszczur" << endl;
		}
		else if (wybierz == 5)
		{
			cout << "spock" << endl;
		}
	}
	cout << "wybor bota" << endl;
	
    bot = rand() % 5 + 1;
	srand(time(0));

	{
		if (bot == 1)
		{
			cout << "nozyczki" << endl;
		}
		else if (bot == 2)
		{
			cout << "papier" << endl;
		}
		else if (bot == 3)
		{
			cout << "kamien" << endl;
		}
		else if (bot == 4)
		{
			cout << "jaszczur" << endl;
		}
		else if (bot == 5)
		{
			cout << "spock" << endl;
		}

		if (wybierz == bot)
		{
			cout << "remis" << endl;
		}
		else if (n < p, n < j)
		{
		cout << "WYGRALES" << endl;
		}
		else if (n < k, n < s)
		{
		cout << "PRZEGRALES" << endl;
		}
		else if (p < k, p < s)
		{
			cout << "WYGRALES" << endl;
		}
		else if (p > n, p < j)
		{
			cout << "PRZEGRALES" << endl;
		}
		else if (k > n, k < j)
		{
			cout << "WYGRALES" << endl;
		}
		else if (k < s, k > p)
		{
			cout << "PRZEGRALES" << endl;
		}
		else if (j > p, j > s)
		{
			cout << "WYGRALES" << endl;
		}
		else if (j > k, j > n)
		{
			cout << "PRZEGRALES" << endl;
		}
		else if (s > k, s > n)
		{
			cout << "WYGRALES" << endl;
		}
		else if (s > j, s > p)
		{
			cout << "PRZEGRALES" << endl;
		}
	}

	return 0;
}