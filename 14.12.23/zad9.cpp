#include <iostream>
#include <cmath>

bool czyLiczbaPierwsza(int liczba) {
    if (liczba < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(liczba); ++i) {
        if (liczba % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    const int gorneOgraniczenie = 9000;
    int liczbaLiczbPierwszych = 0;

    std::cout << "Liczby pierwsze w przedziale od 2 do " << gorneOgraniczenie << " to:\n";

    for (int i = 2; i <= gorneOgraniczenie; ++i) {
        if (czyLiczbaPierwsza(i)) {
            std::cout << i << " ";
            ++liczbaLiczbPierwszych;
        }
    }

    std::cout << "\n\nLiczba liczb pierwszych w przedziale: " << liczbaLiczbPierwszych << std::endl;

    return 0;
}
