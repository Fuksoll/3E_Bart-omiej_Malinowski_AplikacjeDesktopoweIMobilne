#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));
    double liczba = (double)(rand() % 10 + 1) + (double)rand() / RAND_MAX;

    cout << "Wylosowana liczba: " << liczba << endl;
    cout << "Zaokraglona liczba: " << static_cast<int>(liczba + 0.5) << endl;

    return 0;
}