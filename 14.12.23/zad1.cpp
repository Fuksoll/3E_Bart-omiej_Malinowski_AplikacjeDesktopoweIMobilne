#include <iostream>
#include <string>

using namespace std;

// Funkcja pierwsza
void pierwsza() {
    cout << "Funkcja pierwsza zostala wywolana bez parametru." << endl;
}

// Funkcja druga
void druga(string parametr) {
    cout << "Funkcja druga zostala wywolana z parametrem: " << parametr << endl;
}

// Funkcja trzecia
uint32_t trzecia(string parametr) {
    cout << "Funkcja trzecia zostala wywolana z parametrem: " << parametr << endl;

    // Dowolna operacja na parametrze
    uint32_t wynik = parametr.length(); // W tym przyk³adzie zwracamy d³ugoœæ parametru

    cout << "Funkcja trzecia zwraca wartosc: " << wynik << endl;
    return wynik;
}

int main() {
    int wybor;

    do {
        cout << "Wybierz funkcjê do wywolania (1, 2, 3) lub wpisz 0, aby zakonczyc: ";
        cin >> wybor;

        switch (wybor) {
        case 1:
            pierwsza();
            break;
        case 2:
        {
            string argument;
            cout << "Podaj argument dla funkcji drugiej: ";
            cin.ignore(); // Ignorujemy bia³e znaki w buforze przed wczytaniem getline
            getline(cin, argument);
            druga(argument);
        }
        break;
        case 3:
        {
            string argument;
            cout << "Podaj argument dla funkcji trzeciej: ";
            cin.ignore();
            getline(cin, argument);
            uint32_t wynik = trzecia(argument);
            // Mo¿esz wykorzystaæ wynik w dalszej czêœci programu, jeœli chcesz
        }
        break;
        case 0:
            cout << "Program zakonczony." << endl;
            break;
        default:
            cout << "Nieprawidlowy wybor. Sprobuj ponownie." << endl;
        }

    } while (wybor != 0);

    return 0;
}