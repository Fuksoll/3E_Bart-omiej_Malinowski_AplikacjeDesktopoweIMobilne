#include <iostream>
using namespace std;

int main() {
    int suma = 0;
    int negativeCount = 0;
    int positiveCount = 0;
    int evenCount = 0;
    int oddCount = 0;
    int previousNumber = -1;
    int currentNumber;

    while (true) {
        cout << "Podaj liczbę: ";
        cin >> currentNumber;

        if (currentNumber == previousNumber) {
            cout << "Podano dwie identyczne liczby. Koniec programu." << endl;
            break;
        }

        suma += currentNumber;

        if (currentNumber < 0) {
            negativeCount++;
        } else {
            positiveCount++;
        }

        if (currentNumber % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }

        previousNumber = currentNumber;

        if (suma > 100 || negativeCount > 10) {
            cout << "Ostatnia podana liczba: " << currentNumber << endl;
            cout << "Liczba podanych liczb: " << (positiveCount + negativeCount) << endl;
            cout << "Liczba liczb ujemnych: " << negativeCount << endl;
            cout << "Liczba liczb dodatnich: " << positiveCount << endl;
            cout << "Liczba liczb parzystych: " << evenCount << endl;
            cout << "Liczba liczb nieparzystych: " << oddCount << endl;
            break;
        }
    }

    return 0;
}