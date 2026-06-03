import java.util.Scanner;
public class secondlarge
{
public static void main(String[]arg)
{
Scanner sc = new Scanner(System.in );
System.out.println(" enter a");
int a = sc.nextInt();
System.out.println(" enter b");
int b = sc.nextInt();


System.out.println(" enter c");
int c = sc.nextInt();
int secondlargest;

if (a > b && a < c) 
{
if(b>c)
{
secondlargest = b;
}
else
{
secondlargest=a; 
}
}
else if (b>a&&b>c)
{
if (a>c)
{ 
secondlargest = a; 
}
else
 {
 secondlargest = c;
}
}
else
{
if (a>b)
{
secondlargest = a;
}
else 
{
secondlargest = b;
}
}
System.out.println("second largest = " +secondlargest);
}}

