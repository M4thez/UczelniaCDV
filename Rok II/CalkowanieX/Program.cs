using System;

namespace CalkowanieX_2
{
    class Program
    {
        static void Main(string[] args)
        {
            int wybor;

            Console.WriteLine("Wybierz formę całkowania:\n" +
                "1. nieoznaczona\n" +
                "2. oznaczona\n");
            wybor = Convert.ToInt32(Console.ReadLine());
            Console.Clear();

            switch (wybor)
            {
                case 1:
                    Nieoznaczona nozn = new Nieoznaczona();
                    nozn.Wynik();
                    nozn = null;
                    break;
                case 2:
                    Oznaczona ozn = new Oznaczona();
                    ozn.Wynik();
                    ozn = null;
                    break;
                default:
                    Console.WriteLine("Musisz wybrać opcję 1 lub 2.");
                    break;
            }
        }
    }
}
