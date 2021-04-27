using System;
using System.Collections.Generic;
using System.Text;

namespace CalkowanieX_2
{
    class Nieoznaczona
    {
        public double Wynik()
        {
            int[] potegi = new int[20];
            double[] wspolczynniki = new double[20];
            int maksPot;
            Console.WriteLine("Wybrano całkowanie nieoznaczone. \n");
            Console.WriteLine("Ile potęg chcesz maksymalnie wpisać?");
            maksPot = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("Wpisz potęgi wielomianów: ");
            for(int i=0; i<maksPot ; i++)
            {
                Console.Write("x^");
                potegi[i] = Convert.ToInt32(Console.ReadLine());
            }
            Console.Clear();

            Console.WriteLine("Wpisz współczynniki wielomianów: \n");
            for(int i=0; i<maksPot; i++)
            {
                Console.Write("Dla x^" + potegi[i] + ": ");
                wspolczynniki[i] = Convert.ToInt32(Console.ReadLine());
            }
            Console.Clear();
            Console.WriteLine("Przeprowadzam całkowanie...\n");

            Console.Write("Wynik: ");
            for(int i=0; i<maksPot; i++)
            {
                potegi[i] += 1;
                wspolczynniki[i] /= potegi[i];
                Console.Write(wspolczynniki[i] + "x^" + potegi[i] + " + ");
            }
            Console.Write("C");

            Console.WriteLine("\nWciśnij Enter, aby wyjść");
            Console.ReadLine();
            return 0;
        }
    }
}
