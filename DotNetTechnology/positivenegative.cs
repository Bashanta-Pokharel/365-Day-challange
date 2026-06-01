using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lab2
{
    internal class positivenegative
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter the number to check positive or negative:");
            int n = int.Parse(Console.ReadLine());
            if (n > 0)
                Console.WriteLine("The number is positive");
            else if (n < 0)
                Console.WriteLine("The number is Negative");
            else
                Console.WriteLine("The number is 0");
            Console.ReadKey();
        }
    }
}
