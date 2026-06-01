using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lab2
{
    internal class fibonicca
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter the number for fibonicca  series:");
            int n = int.Parse(Console.ReadLine());
            int first = 0, second = 1, next;
            Console.WriteLine("fibonicca series");
            for(int i = 0; i < n; i++) {
                Console.Write(first+" ");
                next = first + second;
                first = second;
                second = next;
            }
               Console.ReadKey();
        }
    }
}
