#include <stdio.h>

float obwod(float bok1, float bok2, float* pole) {
    *pole = bok1 * bok2;
    return 2 * (bok1 + bok2);
}

int main() {
    float b1 = 4.0, b2 = 3.0, p, o;

    o = obwod(b1, b2, &p); // Wywo³anie funkcji obwod()

    printf("Pole prostokata: %.2f\n", p);
    printf("Obwod prostokata: %.2f\n", o);

    return 0;
}
