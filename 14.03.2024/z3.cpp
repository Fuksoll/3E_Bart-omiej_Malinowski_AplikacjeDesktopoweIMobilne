#include <iostream>
#include <string>

using namespace std;

struct Pracownik {
    string imie;
    string nazwisko;
    char plec;
};

int main() {
    Pracownik prac;

    cout << "Podaj imie pracownika: ";
    cin >> prac.imie;
    cout << "Podaj nazwisko pracownika: ";
    cin >> prac.nazwisko;
    cout << "Podaj plec pracownika (K/M): ";
    cin >> prac.plec;

    cout << "\nDane pracownika:\n";
    cout << "Imie: " << prac.imie << endl;
    cout << "Nazwisko: " << prac.nazwisko << endl;
    cout << "Plec: " << prac.plec << endl;

    return 0;
}