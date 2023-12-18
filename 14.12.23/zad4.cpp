#include <iostream>

// Deklaracja funkcji NWD
int NWD(int a, int b);

// Deklaracja funkcji NWW
int NWW(int a, int b);

int main() {
    int liczba1, liczba2;

    // Wprowadzanie dwóch liczb od u¿ytkownika
    std::cout << "Podaj pierwsza liczbe calkowita: ";
    std::cin >> liczba1;

    std::cout << "Podaj druga liczbe calkowita: ";
    std::cin >> liczba2;

    // Wywo³anie funkcji NWD i NWW i wyœwietlenie wyników
    std::cout << "NWD(" << liczba1 << ", " << liczba2 << ") = " << NWD(liczba1, liczba2) << std::endl;
    std::cout << "NWW(" << liczba1 << ", " << liczba2 << ") = " << NWW(liczba1, liczba2) << std::endl;

    return 0;
}

// Definicja funkcji NWD
int NWD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Definicja funkcji NWW
int NWW(int a, int b) {
    return (a * b) / NWD(a, b);
}