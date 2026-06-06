import java.util.Scanner;
public class armstrong
{
public static void main(String[]args)
{
int rem,s=0;
Scanner sc= new Scanner(System.in);
System.out.println("Enter Number:");
int n=sc.nextInt();
while(n!=0)
{
    rem=n%10;
    s= s+rem;
    n=n/10;
}
System.out.println("The Sum is="+s);
}
}

