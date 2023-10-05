#include <iostream>
using namespace std;
 
int main()
{
    int x;
    cout << "Podaj liczbe: ";
    cin >> x;
     
    if(x>=100 && x<150)
        cout << "Liczba jest z przedzialu.";
    else
        cout << "Liczba NIE jest z przedzialu.";
     
    return 0;
}