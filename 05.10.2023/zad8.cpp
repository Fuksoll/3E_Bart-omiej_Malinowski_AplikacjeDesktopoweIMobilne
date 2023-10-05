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
 
    if (x==y || x==z || y==z)
        cout << "Przynajmniej dwie liczby sa takie same " << endl;
    else
        cout << "Nie ma identycznych liczb " << endl;
     
    return 0;
}