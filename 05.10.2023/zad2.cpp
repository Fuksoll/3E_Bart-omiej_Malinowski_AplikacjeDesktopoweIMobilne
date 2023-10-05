#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;

    cout << "wprowadz pierwszą liczbę" << endl;
    cin >> x;
    cout << "wprowadz drugą liczbę" << endl;
    cin >> y;

    if (x%y==0)
        cout << "liczba jest podzielna bez reszty" << endl;
    else
        cout << "liczba ma resztę" << endl;

    return(0);
}