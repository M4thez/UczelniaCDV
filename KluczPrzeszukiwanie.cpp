#include <iostream>

using namespace std;

int main()
{
    int tab[20] = {1, 14, 5, 16, 7, 3, 5, 74, 3, 22, 41, 28, 71, 88, 91, 44, 3, 64, 71, 3};
    int klucz, flaga, wybor = 1, i = 0;

    cout << "Wpisz wartosc klucza: ";
    cin >> klucz;
    cout << "Wybierz, ktora opcje chcesz zobaczyc:\n"
         << "1.Znajdz pierwsza wartosc odpowiadajaca kluczowi i wypisz jej indeks.\n"
         << "2.Znajdz wszystkie wartosci odp. kluczowi i wypisz ich indeksy.\n";
    cin >> wybor;

    if (wybor == 1)
    {
        for (; i < 20; i++)
        {
            if (klucz == tab[i])
            {
                flaga = 1;
                break;
            }
        }
        if (flaga == 1)
        {
            cout << "Pierwsza wartosc " << klucz << "\n"
                 << "Znajduje sie w tablicy na miejscu: " << i + 1 << ".\n";
        }
        else
        {
            cout << "Wybrana wartosc nie znajduje sie w tablicy.\n";
        }
    }

    //wybor == 2 lub inne
    else
    {
        int ind = 0;
        int tab_indeks[20];
        for (i = 0; i < 20; i++)
        {
            if (klucz == tab[i])
            {
                tab_indeks[ind] = i + 1;
                ind++;
            }
        }
        if (ind > 0)
        {
            cout << "Wartosci odpowiadajace kluczowi "
                 << klucz << "\n"
                 << "Znajduja sie w tablicy na miejscach: ";

            for (i = 0; i < ind; i++)
            {
                cout << tab_indeks[i] << ", ";
            }
        }
        else
        {
            cout << "Wybrana wartosc nie znajduje sie w tablicy.\n";
        }
    }
}