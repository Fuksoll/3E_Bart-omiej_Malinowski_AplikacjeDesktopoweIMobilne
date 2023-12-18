#include<iostream>

// Funkcja obliczaj¹ca najwiêkszy wspólny dzielnik
unsigned int gcd(unsigned int a, unsigned int b) {
    while (b != 0) {
        unsigned int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Funkcja skracaj¹ca u³amek zwyk³y
void skrocUlamek(unsigned int& licznik, unsigned int& mianownik) {
    unsigned int dzielnik = gcd(licznik, mianownik);
    licznik /= dzielnik;
    mianownik /= dzielnik;
}

int main() {
    std::cout << "Program do skracania ulamkow zwyklych\n";

    // Pobranie licznika od u¿ytkownika
    unsigned int licznik;
    std::cout << "Podaj licznik: ";
    std::cin >> licznik;

    // Pobranie mianownika od u¿ytkownika
    unsigned int mianownik;
    do {
        std::cout << "Podaj mianownik (niezerowy): ";
        std::cin >> mianownik;
    } while (mianownik == 0);

    // Wyœwietlenie u³amka nieskróconego
    std::cout << "Ulamek nieskrocony: " << licznik << "/" << mianownik << "\n";

    // Wywo³anie funkcji skracaj¹cej u³amek
    skrocUlamek(licznik, mianownik);

    // Wyœwietlenie u³amka skróconego
    std::cout << "Ulamek skrocony: " << licznik << "/" << mianownik << "\n";

    return 0;
}
