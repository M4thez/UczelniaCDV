#include <iostream>

using namespace std;

int main()
{
  int wybor = 0;
  while (wybor != 4)
  {
    cout << "Jaka operacje chcesz wykonac na liczbach od a do b?\n";
    cout << "1 - suma\n2 - suma kwadratow\n3 - srednia arytmetyczna\n4 - koniec programu\n\n";
    cin >> wybor;
    if (wybor != 4)
    {
      int a, b;
      cout << "Wprowadz a: ";
      cin >> a;
      cout << "Wprowadz b: ";
      cin >> b;

      switch (wybor)
      {
      case 1:
      {
        int sum = 0;
        if (a <= b)
        {
          for (; a <= b; a++)
            sum += a;
        }
        else
        {
          for (; b <= a; b++)
            sum += b;
        }
        cout << "Suma kolejnych liczb naturalnych od a do b wynosi " << sum << "\n\n";
      }
      break;

      case 2:
      {
        int sumKw = 0;
        if (a <= b)
        {
          for (; a <= b; a++)
            sumKw += (a * a);
        }
        else
        {
          for (; b <= a; b++)
            sumKw += (b * b);
        }
        cout << "Suma kwadratow liczb od a do b wynosi " << sumKw << "\n\n";
      }
      break;

      case 3:
      {
        int srArytm = 0;
        int i = 0;
        if (a <= b)
        {
          for (; a <= b; a++)
          {
            srArytm += a;
            i++;
          }
        }
        else
        {
          for (; b <= a; b++)
          {
            srArytm += b;
            i++;
          }
        }
        srArytm /= i;
        cout << "Srednia arytmetyczna liczb od a do b wynosi " << srArytm << "\n\n";
      }
      break;

      default:
        cout << "Nieprawidlowy numer operacji\n\n";
      }
    }
  }
}