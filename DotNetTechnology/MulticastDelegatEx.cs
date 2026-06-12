using System;

namespace lab7
{
    // Step 1: Define a delegate
    public delegate void Operation(int n1, int n2);

    public class MulticastDelegateEx
    {
        public static void add(int n1, int n2)
        {
            int result = n1 + n2;
            Console.WriteLine("Sum of " + n1 + " and " + n2 + " = " + result);
        }

        public static void subtract(int n1, int n2)
        {
            int result = n1 - n2;
            Console.WriteLine("Difference of " + n1 + " and " + n2 + " = " + result);
        }

        public static void multiply(int n1, int n2)
        {
            int result = n1 * n2;
            Console.WriteLine("Product of " + n1 + " and " + n2 + " = " + result);
        }
        public static void divide(int n1, int n2)
        {
            int result = n1 / n2;
            Console.WriteLine("Division of " + n1 + " and " + n2 + " = " + result);
        }

        static void Main(string[] args)
        {
            // Step 2: Create delegate instance pointing to methods
            Operation op1 = new Operation(add);

            // Step 3: Add more methods to the delegate chain
            Operation op2 = new Operation(subtract);
            Operation op3 = new Operation(multiply);
            Operation op4 = new Operation(divide);
            Operation op5 =  op1+op2+op3+op4;
            op5.DynamicInvoke(50, 5);
             
            Console.WriteLine(" Example of Invoking multicast delegate");
            

            Console.ReadKey();
        }
    }
}
