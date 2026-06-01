using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lab2
{
    internal class armstrong
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter the number to check Armstrong or Not:");
            int n = int.Parse(Console.ReadLine());
            int temp = n;
            int sum = 0;
            int digits = n.ToString().Length;
            while (n!= 0)
            {
                int digit = n % 10;
                sum = sum + (int)Math.Pow(digit, digits);
                n = n / 10;
            }
            if(sum == temp)
                Console.WriteLine(temp+" is an Armstrong number.");
            else
                Console.WriteLine(temp+" is not an Armstrong number.");
            Console.ReadKey();
        }
    }
}
