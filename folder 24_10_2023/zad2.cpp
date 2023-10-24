#include <iostream>
#include <stack>
using namespace std;

string decToBin(int dec) {
    stack<int> binliczba;

    while (dec > 0) {
        binliczba.push(dec % 2);
        dec /= 2;
    }

    string bin = "";

    while (!binliczba.empty()) {
        bin += to_string(binliczba.top());
        binliczba.pop();
    }

    return bin;
}

int main() {
    int dec;
    cout << "Podaj liczbę dziesiętną: ";
    cin >> dec;

    string bin = decToBin(dec);

    cout << "Wartość binarna: " << bin << endl;

    return 0;
}