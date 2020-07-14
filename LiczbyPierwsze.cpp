#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  long mniejsza = 1999900000;
  long wieksza = 2000099990;

  cout << "Liczby pierwsze pomiedzy " << mniejsza << ", a " << wieksza << " to:\n";

  while(mniejsza <= wieksza)
  {
    int flaga = 0;

    for(int i=2; i <= sqrt(mniejsza); i++)
    {
      if(mniejsza % i == 0)
      {
        flaga = 1;
        break;
      }
    }

    if(flaga == 0)
    {
      cout << mniejsza << ",";
    }
    mniejsza++;
  }
  system("PAUSE");
}