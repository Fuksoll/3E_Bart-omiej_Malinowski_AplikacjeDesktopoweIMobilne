#include <iostream>
#include <cmath>

const double PI = 3.14;

// Funkcja obliczaj¹ca miarê k¹ta wewnêtrznego wielok¹ta foremnego
float oblicz(unsigned int liczbaBokow) {
    if (liczbaBokow < 3) {
        std::cerr << "Blad: Wielokat foremny musi miec co najmniej 3 boki." << std::endl;
        exit(EXIT_FAILURE);
    }

    return (180.0 * (liczbaBokow - 2)) / liczbaBokow;
}

// Funkcja obliczaj¹ca pole powierzchni wielok¹ta foremnego
double oblicz(unsigned int liczbaBokow, float dlugoscBoku) {
    if (liczbaBokow < 3) {
        std::cerr << "Blad: Wielokat foremny musi miec co najmniej 3 boki." << std::endl;
        exit(EXIT_FAILURE);
    }

    return (0.25 * liczbaBokow * pow(dlugoscBoku, 2)) / tan(PI / liczbaBokow);
}

int main() {
    // Przyk³adowe u¿ycie funkcji
    unsigned int liczbaBokow = 5;
    float dlugoscBoku = 4.0;

    std::cout << "Mira kata wewnetrznego wielokata foremnego (" << liczbaBokow << " bokow): "
        << oblicz(liczbaBokow) << " stopni." << std::endl;

    std::cout << "Pole powierzchni wielokata foremnego (" << liczbaBokow << " bokow, "
        << dlugoscBoku << " dlugosc boku): " << oblicz(liczbaBokow, dlugoscBoku) << std::endl;

    return 0;
}