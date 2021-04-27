#include <iostream>
using namespace std;

int main()
{
    int tab[100];
    int n;
    int i, j;
    int temp;

    cout << "\n===============================================================\n"
         << "Program sortujacy n wpisanych wartosci (w kolejnosci rosnacej).\n"
         << "===============================================================\n\n";

    cout << "Wpisz wielkosc tablicy (od 1 do 100): ";
    cin >> n;

    if(n <= 0 || n > 100)
    {
        cout << "Nieprawidlowy zakres tablicy.\n";
        return 2;
    }

    for(i=0; i < n; i++)
    {
        cout << "Wpisz " << i + 1 << ". wartosc: ";
        cin >> tab[i];
    }

    cout << "Zawartosc tablicy nie posortowanej: \n";
    for(i=0; i < n; i++)
        cout << tab[i] << "\t";
    cout << "\n\n";

    //Sortowanie
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            cout << "\nDEBUG i: " << tab[i] << " j: " << tab[j] << "\n";
            if(tab[i] > tab[j])
            {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
        }
    }
    cout << "Zawartosc tablicy posortowanej: \n";
    for(i=0; i < n; i++)
        cout << tab[i] << "\t";
    cout << "\n\n";

    system("PAUSE");
}