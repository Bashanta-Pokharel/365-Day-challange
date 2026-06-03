using System;

namespace lab7
{
    public class SystemException
    {
        public class InvalidCastExceptionEx
        {
            public static void Show()
            {
                try
                {
                    Console.Write("Enter any text: ");
                    object obj = Console.ReadLine();

                    int num = (int)obj;

                    Console.WriteLine(num);
                }
                catch (InvalidCastException ex)
                {
                    Console.WriteLine("Invalid Cast Exception: " + ex.Message);
                }
                finally
                {
                    Console.WriteLine("Code executed successfully.");
                }
            }
        }

        public class DivideByZeroExceptionEx
        {
            public static void Show()
            {
                try
                {
                    Console.Write("Enter first number: ");
                    int a = int.Parse(Console.ReadLine());

                    Console.Write("Enter second number: ");
                    int b = int.Parse(Console.ReadLine());

                    int c = a / b;

                    Console.WriteLine("Result = " + c);
                }
                catch (DivideByZeroException ex)
                {
                    Console.WriteLine("Divide By Zero Exception: " + ex.Message);
                }
                finally
                {
                    Console.WriteLine("Code executed successfully.");
                }
            }
        }

        public class IndexOutOfRangeExceptionEx
        {
            public static void Show()
            {
                try
                {
                    int[] arr = { 10, 20, 30 };

                    Console.Write("Enter array index: ");
                    int index = int.Parse(Console.ReadLine());

                    Console.WriteLine("Value = " + arr[index]);
                }
                catch (IndexOutOfRangeException ex)
                {
                    Console.WriteLine("Index Out Of Range Exception: " + ex.Message);
                }
                finally
                {
                    Console.WriteLine("Code executed successfully.");
                }
            }
        }
    }
}