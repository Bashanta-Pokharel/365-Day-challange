public class oddsum
{
public static void main(String[]args)
{
int s=0, i=1;
for(i=1; i<=50; i++)
{
   if(i%2==0)
    {
      continue;
    }
  s= s+i;
}
System.out.println("Sum of odd="+s);
}
}