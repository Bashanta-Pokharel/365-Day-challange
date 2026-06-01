using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lab2
{
    internal class primeornot
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter the numer to check prime or not");
            int n =int.Parse(Console.ReadLine());
            bool prime = true;
            if (n <= 1)
                prime = false;
            else
            {
                for (int i = 2; i < n; i++)
                {
                    if (n % i == 0)
                        prime = false;
                    break;
                }
            }
                if (prime)
                    Console.WriteLine(+n + " is a prime number.");
                else
                    Console.WriteLine(n + " is not the prime number");
                Console.ReadKey();
            
        }
    }
}
