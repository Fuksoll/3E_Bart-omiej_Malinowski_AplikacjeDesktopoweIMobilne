#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;

    cout << "Podaj dlugosci bokow trojkata:\n";
    cin >> a >> b >> c;

    double p = (a + b + c) / 2.0;
    double pole = sqrt(p * (p - a) * (p - b) * (p - c));

    cout << "Pole trojkata: " << pole << endl;

    return 0;
}
