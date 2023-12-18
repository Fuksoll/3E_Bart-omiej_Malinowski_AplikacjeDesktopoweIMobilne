#include <iostream>

// Funkcja obliczaj¹ca najwiêkszy wspólny dzielnik dwóch liczb ca³kowitych
int najwiekszyWspolnyDzielnik(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Funkcja skracaj¹ca u³amek
void skrocUlamek(int& licznik, int& mianownik) {
    if (mianownik == 0) {
        std::cerr << "Blad: Mianownik nie moze byc zerem." << std::endl;
        return;
    }

    int nwd = najwiekszyWspolnyDzielnik(licznik, mianownik);

    licznik /= nwd;
    mianownik /= nwd;
}

int main() {
    int licznik, mianownik;

    std::cout << "Podaj licznik ulamka: ";
    std::cin >> licznik;

    std::cout << "Podaj mianownik ulamka (rozny od zera): ";
    std::cin >> mianownik;

    skrocUlamek(licznik, mianownik);

    std::cout << "Skrocony ulamek: " << licznik << "/" << mianownik << std::endl;

    return 0;
}
