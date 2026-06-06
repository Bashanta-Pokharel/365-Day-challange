import java.util.Scanner;
public class prime
{
public static void main(String[]args)
{
int i=2;
Scanner sc = new Scanner(System.in);
System.out.println("Enter Number:");
int n=sc.nextInt();
if (n <= 1) 
{
  System.out.println("Not prime Number");
  return;
}

for (i = 2; i<n; i++) 
{
  if (n % i == 0)
  {
      System.out.println("Not prime Number");
      return;
  }
}

System.out.println("prime Number");
}
}