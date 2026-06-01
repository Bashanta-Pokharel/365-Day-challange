using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace lab2
{
    internal class cubegoto
    {
        static void Main(string[] args)
        {
            int i = 1;
            Console.WriteLine("Enter the n number for cube:");
            int n = int.Parse(Console.ReadLine());

        start:
            if (i > n)
                goto end;

            Console.WriteLine("Cube of " + i + " is " + (i * i * i));
            i++;
            goto start;

        end:
            Console.ReadKey();


        }
    }
}
