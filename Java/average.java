import java.util.Scanner;
public class average
{
public static void main(String[]arg)
{
Scanner sc = new Scanner(System.in);
System.out.println("enter the marks of five subject");
int a = sc.nextInt();
int b = sc.nextInt();
int c = sc.nextInt();
int d = sc.nextInt();
int e = sc.nextInt();
int total = a+b+c+d+e;
int average = total/5;
System.out.println("the total marks of given is= "+total);
System.out.println("the average marks of given is= "+average);
}
}
