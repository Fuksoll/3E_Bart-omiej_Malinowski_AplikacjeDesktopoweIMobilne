#include <iostream>

using namespace std;

int main() {
    int liczba, iloczyn = 1;

    cout << "Podawaj liczby parzyste. Wprowadzenie 0 zakończy proces." << endl;

    while (true) {
        cout << "Podaj liczbę: ";
        cin >> liczba;

        if (liczba == 0) 
        {
            break;
        } 
        else if (liczba % 2 == 0) 
        {
            iloczyn *= liczba;
        } 
        else 
        {
            cout << "To nie jest liczba parzysta. Podaj inną liczbę parzystą." << endl;
        }
    }

    cout << "Iloczyn liczb parzystych wynosi: " << iloczyn << endl;

    return 0;
}