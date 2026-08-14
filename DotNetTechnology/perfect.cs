using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lab2
{
    internal class perfect
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter the number to check perfect number or not:");
            int n = int.Parse(Console.ReadLine());
            int sum = 0;
            for (int i = 1; i < n; i++)
            {
                if (n % i == 0)
                    sum = sum + i;

            }
            if (sum == n)
                Console.WriteLine(n+" is the perfect number.");
            else
                Console.WriteLine(n+" is not the Perfect number.");
            Console.ReadKey();

        }
    }
}
