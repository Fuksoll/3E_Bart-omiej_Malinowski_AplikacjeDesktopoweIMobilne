#include <iostream>

using namespace std;

int main()
{
    int liczba;

    cout << "wprowadz liczbe" << endl;
    cin >> liczba;

    if (liczba%2==0)
        cout << "wpisana liczba jest parzysta" << endl;
    else
        cout << "wpisana liczba jest nieparzysta" << endl;

    return(0);
}