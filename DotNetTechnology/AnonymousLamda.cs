using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace lab7
{
    public class AnonymousLamda
    {
        public class AnonymousEx
        {
            public delegate int adddelegate(int x, int y);
            public static void Display()
            {
                Console.WriteLine("The Anynomous mrthod example");
                adddelegate del = delegate (int x, int y) { return x + y; };
                int res = del.Invoke(45, 75);
                Console.WriteLine("The sum of 2 Number 45 and 75 using Anonymous Function = " + res);
            }
        }
        public class LambdaEx
        {
          
            public delegate int AreaRectangle(int l, int b);
            public static void Display()
            {
                Console.WriteLine("The Lambda expression Example");
                AreaRectangle a = (l, b) => l * b;
                Console.WriteLine("Area of rectangel with l= 45 and b= 20 =" + a.Invoke(45, 20));
                AreaRectangle p = (l, b) => { return 2 * (l + b); };
                Console.WriteLine("Perimeter of Rectangle with l= 45 and b= 20 " + p.Invoke(45, 20));
            }
        }
    }
}
