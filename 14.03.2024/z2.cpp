#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double kat_stopnie;

    cout << "Podaj kat w stopniach: ";
    cin >> kat_stopnie;

    double kat_rad = kat_stopnie * 3.14 / 180.0;

    cout << "Sinus: " << sin(kat_rad) << endl;
    cout << "Cosinus: " << cos(kat_rad) << endl;
    cout << "Tangens: " << tan(kat_rad) << endl;

    return 0;
}
