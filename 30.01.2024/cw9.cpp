#include <iostream>
using namespace std;

const double PI = 3.141;

void poleIObwodKola(double, double, double*, double*);

int main() {
    double promien = 3.0;
    double pole, obwod;

    double* w_pole = &pole;
    double* w_obwod = &obwod;

    poleIObwodKola(promien, PI, w_pole, w_obwod);

    cout << "Pole kola wynosi: " << pole << endl;
    cout << "Obwod kola wynosi: " << obwod << endl;

    return 0;
}

void poleIObwodKola(double r, double pi, double* w_poleK, double* w_obwodK) {
    *w_poleK = pi * r * r;
    *w_obwodK = 2 * pi * r;
}
