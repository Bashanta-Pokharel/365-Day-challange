using System;

namespace lab7
{
    public class NameLengthException : ApplicationException
    {
        public NameLengthException(string msg) : base(msg)
        {
        }
    }

    public class NameLengthExceptionEx
    {
        public static void Display()
        {
            try
            {
                Console.Write("Enter your name: ");
                string name = Console.ReadLine();

                if (name.Length > 10)
                {
                    throw new NameLengthException(
                        "Name length cannot be greater than 10 characters."
                    );
                }

                Console.WriteLine("Valid Name: " + name);
            }
            catch (NameLengthException ex)
            {
                Console.WriteLine(ex.Message);
            }
            finally
            {
                Console.WriteLine("Program Ended");
            }
        }
    }
}