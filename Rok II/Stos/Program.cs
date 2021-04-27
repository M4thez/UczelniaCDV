using System;

namespace ZadanieStos
{
    class Program
    {
        static void Main(string[] args)
        {
            Osoba o1 = new Osoba();
            o1.Imię = "Adam";
            o1.Nazwisko = "Kowalski";
            o1.Miasto = "Babigoszcz";
            Stos<string> s1 = new Stos<string>(5);

            s1.Push(o1.Imię);
            s1.Push(o1.Nazwisko);
            s1.Push(o1.Miasto);
            s1.Sort();
            
            Console.WriteLine("Stos dot. Osoby:\n");
            Console.WriteLine("Czy istnieje Kowalski: {0}", s1.IfExists("Kowalski"));
            Console.WriteLine(s1.Pop());
            Console.WriteLine(s1.Pop());
            Console.WriteLine(s1.Pop());

            Liczby l1 = new Liczby();
            l1.Liczba1 = 966;
            l1.Liczba2 = 1410;
            l1.Liczba3 = 2077;
            Stos<int> s2 = new Stos<int>(20);

            s2.Push(l1.Liczba1);
            s2.Push(l1.Liczba2);
            s2.Push(l1.Liczba3);
            s2.Push(l1.Liczba2);
            s2.Sort();

            Console.WriteLine("\nStos Liczb:\n");
            Console.WriteLine("Czy istnieje 2020: {0}", s2.IfExists(2020));
            Console.WriteLine(s2.Pop());
            Console.WriteLine(s2.Pop());
            Console.WriteLine(s2.Pop());
            Console.WriteLine(s2.Pop());
            Console.WriteLine(s2.Pop());
        }
    }
}
