using System;
public class temperature
{
    public static void Main(string[] args)
    {
        Console.WriteLine("Enter the degree celcius:");
        float c = float.Parse(Console.ReadLine());
	float f = ((180*c)/100)+32;
	Console.WriteLine("the degree foreinheight is :"+f);
	

        
        
    }
}