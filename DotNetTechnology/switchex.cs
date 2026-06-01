using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lab2
{
    internal class switchex
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter one num from 0 to 9:");
            int n = int.Parse(Console.ReadLine());
            switch(n)
            {
                case 0:
                    Console.WriteLine("The number is Zero");
                    break;
                case 1:
                    Console.WriteLine("The number is One");
                    break;
                 case 2:
                    Console.WriteLine("The number is Two");
                    break;
                 case 3:
                    Console.WriteLine("The number is Three");
                    break;
                 case 4:
                    Console.WriteLine("The number is Four");
                    break;
                 case 5:
                    Console.WriteLine("The number is Five");
                    break;
                 case 6:
                    Console.WriteLine("The number is Six");
                    break;
                 case 7:
                    Console.WriteLine("The number is Seven");
                    break;
                 case 8:
                    Console.WriteLine("The number is Eight");
                    break;
                 case 9:
                    Console.WriteLine("The number is Nine");
                    break;
                 default:
                    Console.WriteLine("Enter the single digit or numeric value only");
                    break;

            }
            Console.ReadKey();
        }
    }
}
