#include <iostream>

using namespace std;

char plansza[3][3] = { { '1', '2', '3' }, { '4', '5', '6' }, { '7', '8', '9' } };
int aktualnyGracz = 1, liczbaRuchow = 0, wygraneGracz1 = 0, wygraneGracz2 = 0, remisy = 0;

void rysuj() 
{
    for (int i = 0; i < 3; i++) 
    {
        cout << "  " << plansza[i][0] << " | " << plansza[i][1] << " | " << plansza[i][2] << endl;
        if (i < 2) cout << " -----------" << endl;
    }
}

void zmienGracza() { aktualnyGracz = 3 - aktualnyGracz; }

bool wykonaj(int wybor) 
{
    int w = (wybor - 1) / 3, k = (wybor - 1) % 3;
    if (plansza[w][k] == 'X' || plansza[w][k] == 'O') return false;
    plansza[w][k] = (aktualnyGracz == 1) ? 'X' : 'O';
    liczbaRuchow++;
    return true;
}

bool sprawdzanieWygranego() 
{
    for (int i = 0; i < 3; i++)
        if ((plansza[i][0] == plansza[i][1] && plansza[i][1] == plansza[i][2]) ||
            (plansza[0][i] == plansza[1][i] && plansza[1][i] == plansza[2][i]))
            return true;
    return ((plansza[0][0] == plansza[1][1] && plansza[1][1] == plansza[2][2]) ||
        (plansza[0][2] == plansza[1][1] && plansza[1][1] == plansza[2][0]));
}

bool sprawdzRemis() { return liczbaRuchow == 9; }

void aktualizujStatystyki() 
{
    if (sprawdzanieWygranego()) (aktualnyGracz == 1) ? wygraneGracz1++ : wygraneGracz2++;
    else if (sprawdzRemis()) remisy++;
}

int main() 
{
    int wybor;
    bool poprawnyRuch;

    do 
    {
        rysuj();
        cout << "Gracz " << aktualnyGracz << ", wybierz pole (1-9): ";
        cin >> wybor;

        poprawnyRuch = wykonaj(wybor);

        if (poprawnyRuch) 
        {
            if (sprawdzanieWygranego()) 
            {
                rysuj();
                cout << "Gracz " << aktualnyGracz << " wygrywa!" << endl;
                aktualizujStatystyki();
                break;
            }
            else if (sprawdzRemis()) 
            {
                rysuj();
                cout << "Remis!" << endl;
                aktualizujStatystyki();
                break;
            }
            else zmienGracza();
        }

    } while (true);

    cout << "Statystyki gry:\n";
    cout << "Gracz 1 - Wygrane: " << wygraneGracz1 << " Przegrane: " << wygraneGracz2 << endl;
    cout << "Gracz 2 - Wygrane: " << wygraneGracz2 << " Przegrane: " << wygraneGracz1 << endl;
    cout << "Remisy: " << remisy << endl;
    return 0;
}