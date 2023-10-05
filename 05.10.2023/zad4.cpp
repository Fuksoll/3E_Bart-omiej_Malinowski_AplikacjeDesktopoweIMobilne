#include <iostream>
using namespace std;
 
int main()
{
    int x;
    cout << "Podaj liczbe: ";
    cin >> x;
 
    if (x<0) 
        cout << "Liczba jest mniejsza od 0.";
    else if (x==0) 
         cout << "Liczba jest rowna 0.";
     else
         cout << "Liczba jest wieksza od 0.";
 
    return 0;
}