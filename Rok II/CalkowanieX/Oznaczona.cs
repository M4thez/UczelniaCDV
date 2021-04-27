using System;
using System.Collections.Generic;
using System.Text;

namespace CalkowanieX_2
{
    class Oznaczona
    {
        public double Wynik()
        {
            int[] potegi = new int[20];
            double[] wspolczynniki = new double[20];
            int maksPot, gora, dol;
            double goraPow, dolPow, wynikOstateczny=0;

            Console.WriteLine("Wybrano całkowanie oznaczone. \n");
            Console.WriteLine("Ile potęg chcesz maksymalnie wpisać?");
            maksPot = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("Wpisz potęgi wielomianów: ");
            for (int i = 0; i < maksPot; i++)
            {
                Console.Write("x^");
                potegi[i] = Convert.ToInt32(Console.ReadLine());
            }
            Console.Clear();

            Console.WriteLine("Wpisz współczynniki wielomianów: \n");
            for (int i = 0; i < maksPot; i++)
            {
                Console.Write("Dla x^" + potegi[i] + ": ");
                wspolczynniki[i] = Convert.ToInt32(Console.ReadLine());
            }
            Console.Clear();

            Console.Write("Podaj górną granicę przedziału: ");
            gora = Convert.ToInt32(Console.ReadLine());
            Console.Write("Podaj dolną granicę przedziału: ");
            dol = Convert.ToInt32(Console.ReadLine());
            Console.Clear();

            Console.WriteLine("Przeprowadzam całkowanie...\n");
            Console.Write("Wynik: ");
            for (int i = 0; i < maksPot; i++)
            {
                potegi[i] += 1;
                goraPow = Math.Pow(gora, potegi[i]) / potegi[i];
                dolPow = Math.Pow(dol, potegi[i]) / potegi[i];
                goraPow -= dolPow;
                wspolczynniki[i] *= goraPow; // rezultaty we współczynnikach
                Console.Write(wspolczynniki[i] + " + ");
            }
            Console.Write("0 = ");
            for (int i = 0; i < maksPot; i++)
            {
                wynikOstateczny += wspolczynniki[i];
            }
            Console.Write(wynikOstateczny);


            Console.WriteLine("\nWciśnij Enter, aby wyjść");
            Console.ReadLine();
            return 0;
        }
    }
}
