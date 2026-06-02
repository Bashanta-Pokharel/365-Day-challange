using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lab7
{
    public class DelegateTypes
    {
        public class SingleCast
        {
            public static int Square(int n)
            {
                return n * n;
            }
            public delegate int delsquare(int n);
            public static void Display()
            {
                delsquare del = new delsquare(Square);
                int res = del.Invoke(25);
                Console.WriteLine("Square using Single Cast 25 =" + res);
            }
        }
        public class MultiCast
        {
            public static void Square(int n)
            {
                int res = n * n;
                Console.WriteLine("Square using MultiCast of " + n + " =" + res);
            }
            public static void Cube(int n)
            {
                int res = n * n * n;
                Console.WriteLine("Cube using MultiCast of " + n + " =" + res);
            }
            public delegate void multidelegate(int x);
            public static void Display()
            {
                multidelegate d1 = new multidelegate(Square);
                multidelegate d2 = new multidelegate(Cube);
                multidelegate d3 = d1 + d2;
                d3.DynamicInvoke(15);
                
            }
        }
    }
}
