
public class ascending
{
public static void main(String[]arg)
{
int []n={10,15,89,78,98,75,45,62,84,65};
int temp;
System.out.println("array before sorting");
for(int i=0;i<n.length;i++)
{
System.out.print(" "+n[i]);
}
for(int i=0;i<n.length;i++)
{
for(int j=i+1;j<n.length;j++)
{
if (n[i]>n[j])
{
temp =n[i];
n[i] =n[j];
n[j]= temp;
}
}
}
System.out.println("");
System.out.println("the number in ascending order is");
for(int i=0;i<n.length;i++)
{
System.out.print(" "+n[i]);
}
}
}
