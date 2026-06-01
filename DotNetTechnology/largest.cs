using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lab2
{
    internal class largest
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter the num1");
            int a = int.Parse(Console.ReadLine());
            Console.WriteLine("Enter the num2");
            int b = int.Parse(Console.ReadLine());
            Console.WriteLine("Enter the num3");
            int c = int.Parse(Console.ReadLine());
            int large;
            if (a < b)
            {
                if (b < c) 
                    large = c;
                else
                    large = b;
            }
            else
            {
                if(a < c)
                    large = c;
                else
                    large = a;
            }
            Console.WriteLine("The largest number is "+large);
            Console.ReadKey();
        }
    }
}
