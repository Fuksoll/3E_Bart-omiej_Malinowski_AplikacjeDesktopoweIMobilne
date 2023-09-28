#include <iostream>

using namespace std;

int main()
{
    int symbol; 
    int x; 
    int y;
    int dodawanie;
    int odejmowanie;
    int mnożenie;
    int dzielenie;
    
    cout << "1 dodawanie, 2 odejmowanie, 3 dzielenie, 4 mnożenie" <<endl;
    cin >> symbol;
    cout << "podaj 1 liczbę" << endl;
    cin >> x;
    cout << "podaj 2 liczbę" << endl;
    cin >> y;
    if (symbol==1)
    {
        dodawanie = x + y;
        cout << dodawanie << endl;
    }
    else if (symbol==2)
    {
        odejmowanie = x - y;
        cout << odejmowanie << endl;
    }
    else if (symbol==3)
    {
        dzielenie = x / y;
        cout << dzielenie << endl;
    }
    else if (symbol==4)
    {
        mnożenie = x * y;
        cout << mnożenie << endl;
    }
    exit( 0 );
    return 0;
}