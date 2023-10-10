#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    map<string, string> users;
    string username, password;

    users["admin"] = "2137";
    users["Turek"] = "kebab";
    users["bomba"] = "worldtradecenter";
    users["gracz"] = "lvl2";
    users["XXX"] = "selfmade";

    bool zalogowany = false;
    
    while (!zalogowany) {
        
        cout << "Podaj nazwę użytkownika: ";
        cin >> username;
        cout << "Podaj hasło: ";
        cin >> password;

        if (users.find(username) != users.end() && users[username] == password) {
            cout << "Poprawne hasło. No siema " << username << "." << endl;
            zalogowany = true;
        } else {
            cout << "Nieprawidłowa nazwa użytkownika lub hasło. " << endl;
            char ponownaProba;
            cout << "Czy chcesz spróbować ponownie? (T/N): ";
            cin >> ponownaProba;
            if (ponownaProba != 'T' && ponownaProba != 't') {
                break;
            }
        }
    }

    return 0;
}