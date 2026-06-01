using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lab2
{
    internal class oddeven
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter the number to check odd or even:");
            int n = int.Parse(Console.ReadLine());
            if (n % 2 == 0)
                Console.WriteLine("The number is even");
            else
                Console.WriteLine("The number is odd");
            Console.ReadKey();

        }
    }
}
