#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int liczbarzutow;
    cout << "Podaj liczbę rzutów kostką: ";
    cin >> liczbarzutow;

    srand(time(0));

    for (int i = 0; i < liczbarzutow; i++) {
        int wynik = rand() % 6 + 1;
        cout << "Rzut " << (i + 1) << ": " << wynik << endl;
    }

    return 0;
}