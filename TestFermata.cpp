#include <cmath>
#include <iostream>
#include <cstdlib>
using namespace std;

long modulo(long base, long e, long mod) {
   long a = 1;
   long b = base;
   while (e > 0) {
     cout << "\nLosowa liczba a na poczatku petli while: " << b << "\n";
      if (e % 2 == 1)
         a = (a * b) % mod;
        b = (b * b) % mod;
        e = e / 2;
      cout << "\nLosowa liczba a na koncu petli while: " << b << "\n";
   }
   int wynik = a % mod;
   cout << "\nReszta z dzielenia " << a << " przez " << mod << ": " << wynik << "\n";
   return wynik;
}

bool Fermat(long m, int iterations) {
   if (m == 1) {
      return false;
   }
   for (int i = 0; i < iterations; i++) {
      long x = rand() % (m - 1) + 1;
      cout << "\nDobrano losowa liczbe a: " << x << ".\n";
      if (modulo(x, m - 1, m) != 1) {
         return false;
      }
   }
   return true;
}

int main() {
   int iteration;
   long num1;
   long num2;

   cout << "\nProgram sprawdza pierwszosc dwoch podanych liczb.\n\n";
   cout << "Wpisz pierwsza: ";
   cin >> num1;
   cout << "Wpisz druga: ";
   cin >> num2;
   cout << "Ile maksymalnie iteracji chcesz wykonac? ";
   cin >> iteration;
   if (Fermat(num1, iteration))
      cout << "\n" << num1 << " JEST pierwsza.\n\n";
   else
      cout << "\n" << num1 << " NIE JEST pierwsza.\n\n";

    if (Fermat(num2, iteration))
     cout << "\n" << num2 << " JEST pierwsza.\n\n";
   else
      cout << "\n" << num2 << " NIE JEST pierwsza.\n\n";

   system("PAUSE");
}