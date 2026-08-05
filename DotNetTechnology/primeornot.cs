using System;

namespace Lab2
{
    internal class PrimeOrNot
    {
        static void Main(string[] args)
        {
            Console.Write("Enter the number to check prime or not: ");
            int n = int.Parse(Console.ReadLine());
            bool isPrime = true;

            if (n <= 1)
            {
                isPrime = false;
            }
            else
            {
                for (int i = 2; i <= Math.Sqrt(n); i++)
                {
                    if (n % i == 0)
                    {
                        isPrime = false;
                        break; // break only when divisor is found
                    }
                }
            }

            if (isPrime)
                Console.WriteLine($"{n} is a prime number.");
            else
                Console.WriteLine($"{n} is not a prime number.");

            Console.ReadKey();
        }
    }
}
