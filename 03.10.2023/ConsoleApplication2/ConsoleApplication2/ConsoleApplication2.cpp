#include <iostream>
using namespace std;

int main() {

    double a, b, c, h;
    int liczba;

    cout << "1. Kwadrat" << endl;
    cout << "2. Prostokat" << endl;
    cout << "3. Trojkat" << endl;
    cout << "4. Trapez" << endl;
    cin >> liczba;

    switch (liczba) {
    case 1:
        cout << endl << endl << "Wybrales kwadrat: " << endl;
        cout << "Podaj a =";
        cin >> a;

        cout << "Pole: " << (a * a) << endl;

        break;

    case 2:
        cout << endl << endl << "Wybrales romb: " << endl;

        cout << "Podaj a =";
        cin >> a;

        cout << "Podaj h =";
        cin >> h;

        cout << "Pole: " << (a * h) << endl;

        break;

    case 3:
        cout << endl << endl << "Wybrales trojkat: " << endl;

        cout << "Podaj a =";
        cin >> a;

        cout << "Podaj b =";
        cin >> b;

        cout << "Podaj c =";
        cin >> c;

        cout << "Podaj h =";
        cin >> h;

        cout << "Pole: " << ((a * h) / 2) << endl;

        break;

    case 4:
        cout << endl << endl << "Wybrales trapez: " << endl;

        cout << "Podaj a =";
        cin >> a;

        cout << "Podaj b =";
        cin >> b;

        cout << "Podaj h =";
        cin >> h;

        cout << "Pole: " << (((a + b) * h) / 2) << endl;

        break;

    default:
        cout << "Podales zle wartosci";
        break;
    }
    return 0;
}