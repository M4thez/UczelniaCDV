using System;
using System.Collections.Generic;
using System.Text;

namespace ZadanieStos
{
    class Stos<T>
    {
        private T[] tab = null;
        private int n = 0;
        public Stos(int wielkosc)
        {
            tab = new T[wielkosc];
        }
        public void Push(T elem)
        {
            if (n < tab.Length)
            {
                tab[n++] = elem;
            }
        }
        public T Pop()
        {
            if (n == 0)
            {
                return default(T);
            }
            return tab[--n];
        }
        public T Peek()
        {
            if (n == 0)
            {
                return default(T);
            }
            return tab[n - 1];
        }

        //Uniwersalne metody
        public bool IfExists(T elem)
        {
            for (int i = 0; i < n; i++)
            {
                if (tab[i].Equals(elem))
                {
                    return true;
                }
            }
            return false;
        }
        public void Sort()
        {
            Array.Sort(tab, 0, n);
        }
    }
}