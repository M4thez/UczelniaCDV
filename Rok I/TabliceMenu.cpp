#include <iostream>

using namespace std;

int main()
{
    int n = 1, wybor = 1;
    int i = 0;
    cout << "Wprowadz wielkosc tablicy: ";
    cin >> n;

    int tab[n];

    for(; i < n; i++)
    {
        cout << "Wprowadz wartosci kolejnych elementow tablicy: ";
        cin >> tab[i];
    }

    while(wybor != 6)
    {
        i = 0;
        cout << "\nKtora funkcje programu chcesz zobaczyc?\n"
        << "1. Wartosc pierwszego elementu tablicy\n"
        << "2. Zawartosc tablicy\n"
        << "3. Roznice miedzy ostatnim elementem, a pierwszym\n"
        << "4. Sume wszystkich elementow w tablicy\n"
        << "5. Dowolny wybrany element w tablicy\n"
        << "6. Ciemnosc. Wyjdz z programu\n";
        cin >> wybor;

        switch (wybor)
        {
            case 1:
            {
                cout << "Wartosc pierwszego elementu: "
                << tab[0] << "\n";
                break;
            }
            case 2:
            {
                for(; i < n; i++)
                {
                    cout << "Wartosc " << i+1 << ". elementu tablicy wynosi: "
                    << tab[i] << "\n";
                }
                break;
            }
            case 3:
            {
                int roznica, roznicaOst = tab[n-1], roznicaPie = tab[0];
                roznica = roznicaOst - roznicaPie;
                cout << "Roznica miedzy ostatnim a pierwszym elementem wynosi: "
                << roznica << "\n";
                break;
            }
            case 4:
            {
                int suma = tab[0];
                for(i=1; i < n; i++)
                {
                    suma += tab[i];
                }
                cout << "Suma wszystkich elementow tablicy wynosi: " << suma << "\n";
                break;
            }
            case 5:
            {
                cout << "Ktory element tablicy chcesz poznac?\n";
                cin >> i;
                if (i <= n && i > 0)
                    cout << "Wartosc tego elementu tablicy wynosi: " << tab[i-1] << "\n";
                else
                    cout << "brak\n";
                break;
            }
            case 6:
            {
                cout << "Zamkniecie programu. Do widzenia.\n";
                break;
            }

            default:
            {
                cout << "Nieprawidlowe dane wejsciowe\n";
            }
            break;
        }
    }
}