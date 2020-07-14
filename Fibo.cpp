#include <iostream>

int main() {

    int wynik = 0, n;

    std::cout << "Ktory wyraz ciagu fibonacciego chcesz poznac? ";
    std::cin >> n;

    if(n >= 2) {
        int i, f1 = 1, f2 = 0;
        for (i=2; i <= n; i++) {
            wynik = f1+f2;
            f2 = f1;
            f1 = wynik;
        }
    }
    else
    {
        wynik = 1;
    }
    std::cout << "Wyraz " << n << " ciagu fibonacciego, jest rowny: " << wynik;
}