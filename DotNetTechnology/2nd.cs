using System;
public class calculator{
public static void Main(string [] arg){
float n1 = float.Parse(arg[0]);
float n2 = float.Parse(arg[1]);
Console.WriteLine("the Two number are "+n1+ " and "+n2);
float a = n1+n2;
float s = n1-n2;
float m = n1*n2;
float d = n1/n2;
Console.WriteLine("the sum is "+a);
Console.WriteLine("the subtract is = "+s);
Console.WriteLine("the multiply  is = "+m);
Console.WriteLine("the sum divide is = "+d);
}
}


    