#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(void) {
	ifstream odczyt("test.txt");
	if (odczyt.is_open()) {
		string linia, zawartosc;
		while (getline(odczyt, linia)) {
			zawartosc += linia + "\n";
		}
		cout << zawartosc;
	}
	else {
		cout << "Nie mozna otworzyc pliku." << endl;
	}

	system("PAUSE");
	return EXIT_SUCCESS;
}