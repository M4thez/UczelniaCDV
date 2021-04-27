using System;
using System.Collections.Generic;
using System.Text;

namespace BazaPracownikow
{
    class Księgowy : Pracownik
    {
        public override int Podwyżka(int wysokosc_podwyżki)
        {
            if (wysokosc_podwyżki < 500)
            { return base.Podwyżka(wysokosc_podwyżki); }

            else
                return 0;
        }
        public override string Login()
        {
            return "Księgowy" + base.Login();
        }
    }
}
