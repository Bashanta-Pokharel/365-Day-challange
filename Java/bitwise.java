import java.util.Scanner;
public class bitwise
{
public static void main(String[]arg)
{
Scanner sc = new Scanner(System.in);
System.out.println("enter the first integer");
int a = sc.nextInt();
System.out.println("enter the second integer");
int b = sc.nextInt();
int and = a&b;
int or = a|b;
int xor = a^b;
int nota = ~a;
int notb = ~b;
int lefta = a<<1;
int righta = a>>1;
int leftb = b<<1;
int rightb =b>>1;

System.out.println("bitwise AND: " + and);
System.out.println("bitwise or: " + or);
System.out.println("bitwise xor: " + xor);
System.out.println("bitwise nota: " + nota);
System.out.println("bitwise notb: " + notb);
System.out.println("bitwise left shift a: " + lefta);
System.out.println("bitwise right shift a: " + righta);
System.out.println("bitwise left shift b: " + leftb);
System.out.println("bitwise right shift b: " + rightb);
}
}