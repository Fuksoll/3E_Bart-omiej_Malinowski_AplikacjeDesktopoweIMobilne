#include <iostream>
using namespace std;
 
int main()
{
    int x,y,z;
    cout << "Podaj pierwsza liczbe: " << endl;
    cin >> x;
    cout << "Podaj druga liczbe: " << endl;
    cin >> y;
    cout << "Podaj trzecia liczbe: " << endl;
    cin >> z;
 
    if (x<y && x<z) cout << "Najmniejsza liczba to " << x << endl;
    
    if (y<x && y<z) cout << "Najmniejsza liczba to " << y << endl;
    
    if (z<x && z<y) cout << "Najmniejsza liczba to " << z << endl;
 
    return 0;
}