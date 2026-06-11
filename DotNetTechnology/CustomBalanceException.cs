using System;

namespace lab7
{
    public class BalanceException : ApplicationException
    {
        public BalanceException(string msg) : base(msg)
        {
        }
    }

    public class CustomBalanceException
    {
        public static void Display()
        {
            try
            {
                Console.Write("Enter Balance: ");
                double b = double.Parse(Console.ReadLine());

                Console.Write("Enter Withdrawal Amount: ");
                double w = double.Parse(Console.ReadLine());

                if (b >= w)
                {
                    Console.WriteLine("Remaining Balance = " + (b - w));
                }
                else
                {
                    throw new BalanceException("Insufficient Balance enter less than or equal to "+b);
                }
            }
            catch (BalanceException ex)
            {
                Console.WriteLine(ex.Message);
            }
            finally
            {
                Console.WriteLine("End of Transaction");
            }
        }
    }
}