using System;
public class simple
{
    public static void Main(string[] args)
    {
        Console.WriteLine("Enter the principal:");
        double p = double.Parse(Console.ReadLine());
        
        Console.WriteLine("Enter the time:");
        double t = double.Parse(Console.ReadLine());
        
        Console.WriteLine("Enter the rate:");
        double r = double.Parse(Console.ReadLine());
        
        double si = (p * t * r) / 100;
        Console.WriteLine("The simple interest = " + si);
    }
}