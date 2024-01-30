#include <iostream>

using namespace std;

const double PI = 3.14;

void pole_i_obwod_kola(double r, double& pole, double& obwod);

int main() {
    double r = 5.0;
    double pole_kola, obwod_kola;

    pole_i_obwod_kola(r, pole_kola, obwod_kola);

    cout << "Pole kola o promieniu " << r << " wynosi: " << pole_kola << endl;
    cout << "Obwod kola o promieniu " << r << " wynosi: " << obwod_kola << endl;

    return 0;
}

void pole_i_obwod_kola(double r, double& pole, double& obwod) {
    pole = PI * r * r;
    obwod = 2 * PI * r;
}
