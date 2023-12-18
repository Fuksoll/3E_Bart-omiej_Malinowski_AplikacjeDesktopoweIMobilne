#include <iostream>

// Funkcja obliczaj¹ca najwiêkszy wspólny dzielnik za pomoc¹ algorytmu Euklidesa
int NWD(int a, int b) {
    if (b == 0) {
        return a;
    }
    else {
        return NWD(b, a % b);
    }
}

int main() {
    int liczba1, liczba2;

    // Wprowadzenie dwóch liczb naturalnych od u¿ytkownika
    std::cout << "Podaj pierwsza liczbe naturalna: ";
    std::cin >> liczba1;

    std::cout << "Podaj druga liczbe naturalna: ";
    std::cin >> liczba2;

    // Wywo³anie funkcji NWD i wyœwietlenie wyniku
    int wynik = NWD(liczba1, liczba2);
    std::cout << "Najwiekszy wspolny dzielnik: " << wynik << std::endl;

    return 0;
}
