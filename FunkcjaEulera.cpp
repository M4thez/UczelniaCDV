#include <iostream>
#include <cmath>
using namespace std;

int nwd(int a, int b)  
{  
    if (a == 0)  
        return b;  
    return nwd(b % a, a);  
}

int phi(unsigned int n)  
{  
    unsigned int wynik = 1;  
    for (int i = 2; i < n; i++)  
        if (nwd(i, n) == 1)  
            wynik++;  
    return wynik;  
}

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
    int liczba_parzysta = mniejsza + 1;
    cout << "Po dodaniu jedynki otrzymano liczbe parzysta: " << liczba_parzysta << "\n\n";

    cout << "Funkcja Eulera dla " << liczba_parzysta << "\n";
    cout << "phi("<<liczba_parzysta<<") = " << phi(liczba_parzysta) << "\n";

    cout << "\n";
    system("PAUSE");
}