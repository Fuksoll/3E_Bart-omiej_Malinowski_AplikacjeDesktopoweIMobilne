#include <iostream>
using namespace std;

const double PI = 3.14;


void poleKola(double r, double& pole);
void obwodKola(double r, double& obwod);

int main() {
    double promien = 1;
    double pole, obwod;

    poleKola(promien, pole);
    obwodKola(promien, obwod);

    cout << "Wyniki:" << endl;
    cout << "Pole kola wynosi " << pole << endl;
    cout << "Obwod kola wynosi " << obwod << endl;

    return 0;
}

void poleKola(double r, double& pole) {
    pole = PI * r * r;
}

void obwodKola(double r, double& obwod) {
    obwod = 2 * PI * r;
}
