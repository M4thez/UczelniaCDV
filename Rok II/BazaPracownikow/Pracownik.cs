using System;
using System.Collections.Generic;
using System.Text;

namespace BazaPracownikow
{
    class Pracownik
    {
        private int _pensja;
        private int _rocznik;

        public string Imię
        { get; set; }
        public string Nazwisko
        { get; set; }
        public int Rocznik
        {
            get
            { 
                return _rocznik;
            }
            set
            {
                if (value > 1900 && value < 2020)
                    _rocznik = value;
            }
        }
        public int Pensja
        {
            get
            {
                return _pensja;
            }
            set
            {
                if (value > 0)
                    _pensja = value;
            }
        }
        virtual public int Podwyżka(int wysokosc_podwyżki)
        {
            return wysokosc_podwyżki;
        }
        virtual public string Login()
        {
            return Nazwisko + Rocznik;
        }
        public void Wyświetl()
        {
            Console.WriteLine($"Imię: {Imię}");
            Console.WriteLine($"Nazwisko: {Nazwisko}");
            Console.WriteLine($"Rocznik: {Rocznik}");
            Console.WriteLine($"Pensja: {Pensja}");
            Console.WriteLine($"Login: {Login()}");
            Console.WriteLine("= = = = =");
        }
    }
}
