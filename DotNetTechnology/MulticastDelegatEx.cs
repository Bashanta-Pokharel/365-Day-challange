using System;

namespace Lab7
{
    // Step 1: Define a delegate
    public delegate void Operation(int n1, int n2);

    public class MulticastDelegateEx
    {
        public static void Add(int n1, int n2)
        {
            int result = n1 + n2;
            Console.WriteLine($"Sum of {n1} and {n2} = {result}");
        }

        public static void Subtract(int n1, int n2)
        {
            int result = n1 - n2;
            Console.WriteLine($"Difference of {n1} and {n2} = {result}");
        }

        public static void Multiply(int n1, int n2)
        {
            int result = n1 * n2;
            Console.WriteLine($"Product of {n1} and {n2} = {result}");
        }

        public static void Divide(int n1, int n2)
        {
            if (n2 != 0)
            {
                int result = n1 / n2;
                Console.WriteLine($"Division of {n1} and {n2} = {result}");
            }
            else
            {
                Console.WriteLine("Division by zero is not allowed.");
            }
        }

        static void Main(string[] args)
        {
            // Step 2: Create delegate instances pointing to methods
            Operation op = Add;
            op += Subtract;
            op += Multiply;
            op += Divide;

            // Step 3: Invoke multicast delegate
            Console.WriteLine("Example of invoking multicast delegate:");
            op(50, 5);

            Console.ReadKey();
        }
    }
}
