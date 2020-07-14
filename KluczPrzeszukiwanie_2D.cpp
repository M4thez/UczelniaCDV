#include <iostream>

using namespace std;

int main()
{
    int tab[5][5] = {{4, 2, 3, 6, 7}, {14, 12, 17, 15, 6}, {4, 27, 14, 17, 3}, {15, 12, 6, 81, 92}, {11, 3, 64, 21, 11}};
    int klucz, pw, pk, kw, kk; // pw - poczatek wiersza, pk - poczatek kolumny, kw - koniec wiersza, kk - koniec kolumny
    int i = 0;

    cout << "Wpisz wartosc klucza wedlug ktorego chcesz przeszukac tablice: ";
    cin >> klucz;
    cout << "Tablica ma wymiary [5][5], indeksowanie od [0][0] do [4][4].\n"
         << "Na jakim obszarze chcesz przeszukac tablice?\n\n"
         << "Wpisz nr wiersza poczatku obszaru: ";
    cin >> pw;
    cout << "Kolumna: ";
    cin >> pk;
    cout << "Wpisz nr wiersza konca obszaru: ";
    cin >> kw;
    cout << "Kolumna: ";
    cin >> kk;
    cout << "Wartosc odp. kluczowi znajduje sie w tablicy na miejscach:\n";

    for (; pw <= kw; pw++, pk = 1)
    {
        for (; pk <= kk; pk++)
        {
            if (klucz == tab[pw][pk])
            {
                i++;
                cout << i << ". pojawienie sie na indeksach\n";
                cout << "Wiersz: " << pw << "\n"
                     << "Kolumna: " << pk << "\n\n";
            }
        }
    }

    if (i == 0)
        cout << "Brak.\n";
    else
        cout << "Wartosc odp. kluczowi, na zadanym obszarze, znajduje sie w tablicy w " << i << ". miejscach.\n";
        
    cout << "\nKoniec Programu.\n";
}