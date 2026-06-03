import java.util.Scanner;
public class negpos
{
public static void main(String[]arg)
{
Scanner sc = new Scanner(System.in );
System.out.println(" enter the number to check");
int n = sc.nextInt();
if (n < 0)
{
System.out.println("the given number is negative");

}
else if (n > 0)
{
System.out.println(" the given number is positive");
}
else
{
System.out.println(" the given number is zero");
}
}
}
