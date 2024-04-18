#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream plik("C:\Nanoc\plik.txt");

	if (plik)
	{
		string linia;
		while (getline(plik, linia))
		{
			cout << linia << endl;
		}
	}
	else
	{
		cout << "blad nie mozna otworzyc pliku do odczytu." << endl;
	}

	return 0;
}