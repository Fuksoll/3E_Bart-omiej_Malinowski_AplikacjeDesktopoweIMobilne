#include <iostream>
#include <string>

using namespace std;

int main() {
    string username = "admin";
    string password = "2137";
    
    string inputUsername;
    string inputPassword;
    
    cout << "Podaj nazwę użytkownika: ";
    cin >> inputUsername;
    
    cout << "Podaj hasło: ";
    cin >> inputPassword;
    
    if (inputUsername == username && inputPassword == password) {
        cout << "Dostęp przyznany." << endl;
    } else {
        cout << "Błędna nazwa użytkownika lub hasło." << endl;
    }
    
    return 0;
}