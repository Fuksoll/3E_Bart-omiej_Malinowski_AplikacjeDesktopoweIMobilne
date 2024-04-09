#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	char zdanie[100];

	fstream plik1("plik.txt", ios::in | ios::out | ios::trunc);
	cout << "Podaj tekst: " << endl;
	cin.getline(zdanie, 100, '\n');
	plik1 << zdanie;
	plik1.close();

	system("PAUSE");
	EXIT_SUCCESS;
}