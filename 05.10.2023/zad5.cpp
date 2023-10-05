#include <iostream>
using namespace std;
 
int main()
{
    int x;
    cout << "Podaj swój wiek: " << endl;
    cin >> x;
 
    if (x<11 && x>0) 
        cout << "dziecko" << endl;
    else if (x>=11 && x<=17) 
         cout << "nastolatek" << endl;
    else if (x>=18)
         cout << "dorosły" << endl;
    else
        cout << "nieprawidlowy wiek" << endl;
 
 
    return 0;
}