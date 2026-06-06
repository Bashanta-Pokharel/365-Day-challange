import java.util.Scanner;
public class perfect
{
public static void main(String[]args)
{

Scanner sc = new Scanner(System.in);
System.out.println("Enter Number:");
int n=sc.nextInt();
int sum=0, i = 1;
while (i<n)
{
if (n%i==0)
{
sum =sum+i;
}
i++;
}
if (sum == n)
{
System.out.println(" perfect number ");
}
else
{
System.out.println("not perfect number");
}
}
}

