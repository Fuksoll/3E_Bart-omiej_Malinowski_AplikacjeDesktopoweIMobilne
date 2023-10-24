#include <iostream>
#include <cmath>
using namespace std;

int binToDec(string bin) {
    int dec = 0;
    int len = bin.length();

    for (int i = 0; i < len; i++) {
        if (bin[i] == '1') {
            dec += pow(2, len - 1 - i);
        }
    }

    return dec;
}

int main() {
    string bin;
    cout << "Podaj liczbę binarną: ";
    cin >> bin;

    int dec = binToDec(bin);

    cout << "Wartość dziesiętna: " << dec << endl;

    return 0;
}