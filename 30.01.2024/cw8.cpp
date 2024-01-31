#include <iostream>

using namespace std;

double poleKola(double, double&);
double obwodKola(double, double&);

int main() {
    double promien = 3.0;

    double pole;
    double obwod;

    pole = poleKola(promien, pole);
    obwodKola(promien, obwod);

    cout << "Pole kola wynosi: " << pole << endl;
    cout << "Obwod kola wynosi: " << obwod << endl;

    return 0;
}

double poleKola(double r, double& pole) {
    pole = 3.14 * r * r;
    return pole;
}

double obwodKola(double r, double& obwod) {
    obwod = 2 * 3.14 * r;
    return obwod;
}
