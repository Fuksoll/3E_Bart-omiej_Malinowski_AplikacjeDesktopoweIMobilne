#include <iostream>
#include <string>

using namespace std;

int main() {
    string przedmioty[4];

    for (int i = 0; i < 4; ++i) {
        cout << "Podaj nazwe przedmiotu " << i + 1 << ": ";
        cin >> przedmioty[i];
    }

    cout << "\nZawartosc tablicy:\n";
    for (int i = 0; i < 4; ++i) {
        cout << i + 1 << ": " << przedmioty[i] << endl;
    }

    return 0;
}
