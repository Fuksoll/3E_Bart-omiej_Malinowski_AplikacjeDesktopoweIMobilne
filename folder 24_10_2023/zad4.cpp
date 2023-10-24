#include <iostream>
using namespace std;

int main() {
    int liczby[10];

    cout << "Podaj 10 liczb całkowitych:" << endl;

    for (int i = 0; i < 10; i++) {
        cin >> liczby[i];
    }

    cout << "Liczby w odwrotnej kolejności:" << endl;

    for (int i = 9; i >= 0; i--) {
        cout << liczby[i] << " ";
    }

    cout << endl;

    return 0;
}