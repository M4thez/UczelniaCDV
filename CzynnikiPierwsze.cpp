#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i, flaga = 0;
    int mniejsza;
    int wieksza = 1100;
    cout << "Wpisz liczbe naturalna pomiedzy 1 a 1000: ";
    cin >> mniejsza;
    if (mniejsza < 1 || mniejsza > 1000)
    {
        cout << "Nieprawidlowy przedzial.\n";
        return 2;
    }

    //Generowanie liczby pierwszej
    while (mniejsza <= wieksza)
    {
        flaga = 0;

        for (i = 2; i <= sqrt(mniejsza); i++)
        {
            if (mniejsza % i == 0)
            {
                flaga = 1;
                break;
            }
        }

        if (flaga == 0)
        {
            break;
        }
        mniejsza++;
    }

    cout << "Wygenerowano liczbe pierwsza: " << mniejsza << "\n";
    long liczba_parzysta = mniejsza + 1;
    cout << "Po dodaniu jedynki otrzymano liczbe parzysta: " << liczba_parzysta << "\n";

    //Start
    cout << "\nCzynniki pierwsze dzielace " << liczba_parzysta << ":\n";

    int liczba_dzielenie = liczba_parzysta;
    liczba_dzielenie /= 2;

    cout << "2" << "\t";

    flaga=0;

    for (i = 3; i <= liczba_dzielenie/2; i += 2, flaga=0)
    {
        while (liczba_dzielenie % i == 0)
        {
            flaga = 1;
            liczba_dzielenie /= i;
        }
        if (flaga == 1)
            cout << i << "\t";
    }
    if(liczba_dzielenie % 2 != 0 && liczba_dzielenie != 1)
        cout << liczba_dzielenie;

    cout << "\n\n";
    system("PAUSE");
}