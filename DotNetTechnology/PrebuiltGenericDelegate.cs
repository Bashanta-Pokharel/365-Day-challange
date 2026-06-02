using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lab7
{
    public class PrebuiltGenericDelegate
    {
        public static int Add(int x, int y)
        {
            return x + y;
        }

        public static void Show(string name)
        {
            Console.WriteLine("Name = " + name);
        }

        public static bool CheckLength(string name)
        {
            return name.Length > 10;
        }

        public static void Display()
        {
            // Func Delegate
            Func<int, int, int> d1 = new Func<int, int, int>(Add);
            Console.WriteLine("Sum of two numbers using Func<> generic delegate = " + d1.Invoke(75, 99));

            Console.WriteLine();

            // Action Delegate
            Action<string> d2 = new Action<string>(Show);
            Console.WriteLine("This is from Action<> generic delegate ");
             d2.Invoke("Bashanta Pokharel");

            Console.WriteLine();

            // Predicate Delegate
            Predicate<string> d3 = new Predicate<string>(CheckLength);
            Console.WriteLine("This is from Predicate<> generic delegate ");
            bool result = d3.Invoke("Bashanta Pokharel");
            Console.WriteLine("Length greater than 10 = " + result);
        }
    }
}