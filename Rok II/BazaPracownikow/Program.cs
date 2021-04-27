using System;

namespace BazaPracownikow
{
    class Program
    {
        static void Main(string[] args)
        {
            Pracownik p1 = new Dyrektor();
            Pracownik p2 = new Księgowy();
            Pracownik p3 = new Technik();
            Pracownik p4 = new Technik();

            p1.Imię = "Stefan";
            p1.Nazwisko = "Paderewski";
            p1.Rocznik = 1918;
            p1.Pensja = 5000;
            p1.Podwyżka(780);
            p1.Login();
            p1.Wyświetl();
            Console.WriteLine(p1.Podwyżka(780));

            p2.Imię = "Zbigniew";
            p2.Nazwisko = "Chopin";
            p2.Rocznik = 1973;
            p2.Pensja = 2800;
            p2.Podwyżka(120);
            p2.Login();
            p2.Wyświetl();

            p3.Imię = "Mateusz";
            p3.Nazwisko = "Wawrzyniak";
            p3.Rocznik = 1984;
            p3.Pensja = 3600;
            p3.Podwyżka(900);
            p3.Login();
            p3.Wyświetl();

            p4.Imię = "Adam";
            p4.Nazwisko = "Czartoryski";
            p4.Rocznik = 2000;
            p4.Pensja = 3000;
            p4.Podwyżka(240);
            p4.Login();
            p4.Wyświetl();
        }
    }
}
