#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	char tekst[100];
	fstream plik("plik.txt", ios::in | ios::out | ios::ate);
	plik.close();

	plik.open("plik.txt");
	while (!plik.eof()) {
		plik >> tekst;
		cout << tekst << endl;
	}
	plik.close(); 

	system("PAUSE"); 
	return EXIT_SUCCESS; 
}