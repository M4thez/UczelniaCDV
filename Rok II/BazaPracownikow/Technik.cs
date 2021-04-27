using System;
using System.Collections.Generic;
using System.Text;

namespace BazaPracownikow
{
    class Technik : Pracownik
    {
        public override int Podwyżka(int wysokosc_podwyżki)
        {
            if (wysokosc_podwyżki < 800)
            { return base.Podwyżka(wysokosc_podwyżki); }

            else
                return 0;
        }
        public override string Login()
        {
            return "Technik" + base.Login();
        }
    }
}
