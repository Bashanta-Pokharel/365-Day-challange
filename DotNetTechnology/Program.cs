using System;

namespace lab7
{
    class Program
    {
        static void Main(string[] args)
        {

            Console.WriteLine("===================");
            Console.WriteLine("Question no 1");
            Console.WriteLine("===================");

            DelegateTypes.SingleCast.Display();
            DelegateTypes.MultiCast.Display();

            Console.WriteLine("===================");
            Console.WriteLine("Question no 2");
            Console.WriteLine("===================");

            AnonymousLambda.AnonymousEx.Display();
            AnonymousLambda.LambdaEx.Display();
            Console.WriteLine("===================");
            Console.WriteLine("Question no 3");
            Console.WriteLine("===================");
            PrebuiltGenericDelegate.Display();
            Console.WriteLine("===================");
            Console.WriteLine("Question no 4");
            Console.WriteLine("===================");
            EventHandlingDeligate.Display();
            Console.WriteLine("===================");
            Console.WriteLine("Question no 5");
            Console.WriteLine("===================");
            SystemException.DivideByZeroExceptionEx.Show();
            SystemException.InvalidCastExceptionEx.Show();
            SystemException.IndexOutOfRangeExceptionEx.Show();
            Console.WriteLine("\nThis is when data is enter Correctly");
            SystemException.DivideByZeroExceptionEx.Show();
            SystemException.InvalidCastExceptionEx.Show();
            SystemException.IndexOutOfRangeExceptionEx.Show();
            Console.WriteLine("===================");
            Console.WriteLine("Question no 6");
            Console.WriteLine("===================");
            CustomBalanceException.Display();
            Console.WriteLine("This is when data is enter Correctly");
            CustomBalanceException.Display();
            Console.WriteLine("===================");
            Console.WriteLine("Question no 7");
            Console.WriteLine("===================");
            NameLengthExceptionEx.Display();
            Console.WriteLine("This is when data is enter Correctly");
            NameLengthExceptionEx.Display();

            Console.ReadKey();
        }
    }
}