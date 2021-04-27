using System;
using System.Collections.Generic;
using System.Text;

namespace Macierz
{
    class Macierz
    {
        public void StworzMacierze()
        {
            int m, n, i, j, k;
            int[,] tab1, tab2;
            Console.Clear();
            Console.Write("Podaj wymiary macierzy\n" +
                "Liczba wierszy: ");
            m = Convert.ToInt32(Console.ReadLine());
            Console.Write("Liczba kolumn: ");
            n = Convert.ToInt32(Console.ReadLine());
            tab1 = new int[m, n];
            tab2 = new int[m, n];
            Console.Clear();

            //Pierwsza tablica - input
            Console.WriteLine("Wprowadz elementy do pierwszej tablicy: ");
            for(i=0; i < m; i++)
            {
                for(j=0; j<n; j++)
                {
                    Console.Write($"miejsce [{i}, {j}] : ");
                    tab1[i, j] = Convert.ToInt32(Console.ReadLine());
                }
            }
            Console.Clear();

            //Pierwsza tablica - output
            Console.WriteLine("Twoja pierwsza tablica: ");
            for (i = 0; i < m; i++)
            {
                Console.Write("\n\t");
                for (j = 0; j < n; j++)
                {
                    Console.Write($"{tab1[i, j]}\t");
                }
            }
            Console.WriteLine("\n\nNacisnij Enter, aby kontynuować.");
            Console.ReadLine();
            Console.Clear();

            //Druga tablica - input
            Console.WriteLine("Wprowadz elementy do drugiej tablicy: ");
            for (i = 0; i < m; i++)
            {
                for (j = 0; j < n; j++)
                {
                    Console.Write($"miejsce [{i}, {j}] : ");
                    tab2[i, j] = Convert.ToInt32(Console.ReadLine());
                }
            }
            Console.Clear();

            //Druga tablica - output
            Console.WriteLine("Twoja druga tablica: ");
            for (i = 0; i < m; i++)
            {
                Console.Write("\n\t");
                for (j = 0; j < n; j++)
                {
                    Console.Write($"{tab2[i, j]}\t");
                }
            }
            Console.WriteLine("\n\nNacisnij Enter, aby kontynuować.");
            Console.ReadLine();
            Console.Clear();

            //Dodawanie
            int[,] tabSum = new int[m, n];
            for(i = 0; i < m; i++)
            {
                for(j = 0; j < n; j++)
                {
                    tabSum[i, j] = tab1[i, j] + tab2[i, j];
                }
            }
            Console.WriteLine("Wynik dodawania macierz: ");
            for (i = 0; i < m; i++)
            {
                Console.Write("\n\t");
                for (j = 0; j < n; j++)
                {
                    Console.Write($"{tabSum[i, j]}\t");
                }
            }
            Console.WriteLine("\n\nNacisnij Enter, aby kontynuować.");
            Console.ReadLine();
            Console.Clear();

            //Mnożenie
            int[,] tabIlo = new int[m, n];
            for (i = 0; i < m; i++)
            {
                for (j = 0; j < n; j++)
                {
                    tabIlo[i, j] = 0;
                    if (m <= n)
                    {
                        for (k = 0; k < m; k++)
                        {
                            tabIlo[i, j] += tab1[i, k] * tab2[k, j];
                        }
                    }
                    else
                    {
                        for (k = 0; k < n; k++)
                        {
                            tabIlo[i, j] += tab1[i, k] * tab2[k, j];
                        }
                    }
                }
            }
            Console.WriteLine("Wynik mnożenia macierz: ");
            for (i = 0; i < m; i++)
            {
                Console.Write("\n\t");
                for (j = 0; j < n; j++)
                {
                    Console.Write($"{tabIlo[i, j]}\t");
                }
            }
            Console.WriteLine("\n\nNacisnij Enter, aby kontynuować.");
            Console.ReadLine();
            Console.Clear();

            //Transpozycja
            Console.WriteLine("Pierwsza macierz przed transpozycją: ");
            for (i = 0; i < m; i++)
            {
                Console.Write("\n\t");
                for (j = 0; j < n; j++)
                {
                    Console.Write($"{tab1[i, j]}\t");
                }
            }
            Console.WriteLine("\n\nPierwsza macierz po transpozycji: ");
            for (i = 0; i < n; i++)
            {
                Console.Write("\n\t");
                for (j = 0; j < m; j++)
                {
                    Console.Write($"{tab1[j, i]}\t");
                }
            }
            Console.WriteLine("\n\nDruga macierz przed transpozycją: ");
            for (i = 0; i < m; i++)
            {
                Console.Write("\n\t");
                for (j = 0; j < n; j++)
                {
                    Console.Write($"{tab2[i, j]}\t");
                }
            }
            Console.WriteLine("\n\nDruga macierz po transpozycji: ");
            for (i = 0; i < n; i++)
            {
                Console.Write("\n\t");
                for (j = 0; j < m; j++)
                {
                    Console.Write($"{tab2[j, i]}\t");
                }
            }
            Console.WriteLine();
        }
    }
}
