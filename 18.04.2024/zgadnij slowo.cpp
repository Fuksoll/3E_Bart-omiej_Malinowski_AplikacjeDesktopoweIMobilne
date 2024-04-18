#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

string mieszajlitery(string slowo)
{
	string mieszanka;
	int pozycja(0);

	while (slowo.size() != 0)
	{
		pozycja = rand() % slowo.size();
		mieszanka += slowo[pozycja];

		slowo.erase(pozycja, 1);
	}

	return mieszanka;
}

int main()
{
	string sekretneslowo, pomieszaneslowo, slowouzytkownika;

	srand(time(0));

	cout << "wypisz slowo" << endl;
	cin >> sekretneslowo;

	pomieszaneslowo = mieszajlitery(sekretneslowo);

	do
	{
		cout << endl << "co to za slowo? " << pomieszaneslowo << endl;
		cin >> slowouzytkownika;

		if (slowouzytkownika == sekretneslowo)
		{
			cout << "Brawo !" << endl;
		}
		else
		{
			cout << "zle !" << endl;
		}
	} while (slowouzytkownika != sekretneslowo);

	return 0;
}