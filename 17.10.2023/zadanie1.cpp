#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string p_login = "login";
    string p_haslo = "haslo";

    int licznik_login = 0;
    int licznik_haslo = 0;

    while (true) 
    {
        string login;
        cout << "Podaj login: ";
        cin >> login;

        if (login != p_login) 
        {
            cout << "Błędny login!" << endl;
            licznik_login++;

            
            if (licznik_login >= 3) 
            {
                cout << "Przekroczono limit prób logowania. Dostęp zablokowany." << endl;
                break;
            }
        } 
        else 
        {
            
            licznik_login = 0;

            string haslo;
            cout << "Podaj hasło: ";
            cin >> haslo;

            if (haslo != p_haslo) 
            {
                cout << "Błędne hasło!" << endl;
                licznik_haslo++;

                if (licznik_haslo >= 3) 
                {
                    cout << "Przekroczono limit prób logowania. Dostęp zablokowany." << endl;
                    break;
                }
            } 
            else 
            {
                
                cout << "Logowanie udane. " << endl;
                break;
            }
        }
    }

    return 0;
}