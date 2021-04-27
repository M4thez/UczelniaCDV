using System;

namespace Macierz
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Program tworzy, dodaje, mnoży i dokonuje transpozycji macierzy.\n" +
                "= = = = = = = = = = =");
            Console.WriteLine("\n\nNacisnij Enter, aby zacząć.");
            Console.ReadLine();

            Macierz macierz = new Macierz();
            macierz.StworzMacierze();
        }
    }
}
