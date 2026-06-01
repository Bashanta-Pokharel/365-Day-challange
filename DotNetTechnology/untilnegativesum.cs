using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lab2
{
    internal class untilnegativesum
    {
        static void Main(string[] args)
        {
            int sum = 0;
            Console.WriteLine("Enter the positive integer to sum and negatival for final sum answer:");
            while (true)
            {
                int n = int.Parse(Console.ReadLine());
                if(n<0)
                    break;
                sum = sum+ n;
            }
            Console.WriteLine("the sum of positive number is "+sum);
            Console.ReadKey();
        }
    }
}
