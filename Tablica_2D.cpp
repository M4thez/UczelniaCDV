#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cout << "Podaj ilosc wierszy dla tablicy: ";
    cin >> m;
    cout << "Podaj ilosc kolumn dla tablicy: ";
    cin >> n;

    int tab[m][n];
    int i, j;

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            // cout << "Podaj wartosc dla wiersza " << i+1 
            // << " i kolumny " << j+1 << " tablicy" << "\n";
            cout << "Podaj wartosc dla wiersza i kolumny tablicy " << i+1 << ", " << j+1 << ":\n";
            cin >> tab[i][j];
        }
    }
    int wybor=1;

    while(wybor != 4)
    {
        cout << "\nKtora funkcje programu chcesz zobaczyc?\n"
        << "1. Zawartosc tablicy\n"
        << "2. Sume wszystkich elementow w tablicy\n"
        << "3. Dowolny wybrany element tablicy\n"
        << "4. Zakoncz program.\n";
        cin >> wybor;

        switch (wybor)
        {
            case 1:
            {
                for(i=0; i<m; i++)
                {
                    for(j=0; j<n; j++)
                    {
                        cout << "Wartosc tablicy dla wiersza i kolumny " << i+1 << ", " << j+1
                        << "\nWynosi: " << tab[i][j] << "\n";
                    }
                }
                break;
            }
            case 2:
            {
                int suma=0;
                for(i=0; i<m; i++)
                {
                    for(j=0; j<n; j++)
                    {
                        suma += tab[i][j];
                    }
                }
                cout << "Suma wszystkich elementow tablicy wynosi: " << suma << "\n";
                break;
            }
            case 3:
            {
                cout << "Ktory element tablicy chcesz zobaczyc?\n" << "Wiersz: ";
                cin >> i;
                cout << "Kolumna: ";
                cin >> j;
                cout << tab[i-1][j-1];
                break;
            }
            case 4:
            {
                cout << "Koniec programu.\n";
                break;
            }
            default:
            {
                cout << "Nieprawidlowe dane wejsciowe\n";
            }
        }
    }
}