#include <iostream>
using namespace std;

const float PI = 3.14;

float poleKola(const float&);
float obwodKola(const float&);

int main() {
    float promien = 1.0;

    float pole = poleKola(promien);
    cout << "Pole kola wynosi: " << pole << endl;

    float obwod = obwodKola(promien);
    cout << "Obwod kola wynosi: " << obwod << endl;

    return 0;
}

float poleKola(const float& r) {
    return PI * r * r;
}

float obwodKola(const float& r) {
    return 2 * PI * r;
}
