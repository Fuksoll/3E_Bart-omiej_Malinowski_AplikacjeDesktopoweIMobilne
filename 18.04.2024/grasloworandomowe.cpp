#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

string mieszajLitery(const string& podaneSlowo) {
    string wymieszaneSlowo = podaneSlowo;
    int dlugosc = wymieszaneSlowo.length();

    for (int i = 0; i < dlugosc; i++) {
        int losowyIndeks = rand() % dlugosc;
        swap(wymieszaneSlowo[i], wymieszaneSlowo[losowyIndeks]);
    }

    return wymieszaneSlowo;
}

void zgadywanie(const string& wymieszaneSlowo, const string& podaneSlowo) {
    string zgadywaneSlowo;
    int liczbaProb = 0;
    const int maksymalnaLiczbaProb = 5;

    while (liczbaProb < maksymalnaLiczbaProb) {
        cout << "Co to za slowo? " << wymieszaneSlowo << ": ";
        cin >> zgadywaneSlowo;

        if (zgadywaneSlowo == podaneSlowo) {
            cout << "Brawo!" << endl;
            return;
        }
        else {
            cout << "Zle!" << endl;
            liczbaProb++;
        }
    }

    cout << "Przegrales!!! odpowiedz to: " << podaneSlowo << endl;
}

bool powtorka() {
    char odpowiedz;
    cout << "Czy chcesz zagrac jeszcze raz? (t/n): ";
    cin >> odpowiedz;
    return (odpowiedz == 't' || odpowiedz == 'T');
}

int main() {
    srand(time(0));

    bool graj = true;

    while (graj) {
        string podaneSlowo;
        cout << "Wpisz tajemnicze slowo: ";
        cin >> podaneSlowo;

        string wymieszaneSlowo = mieszajLitery(podaneSlowo);

        zgadywanie(wymieszaneSlowo, podaneSlowo);

        graj = powtorka();
    }

    return 0;
}