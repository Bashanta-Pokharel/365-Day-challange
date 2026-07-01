
public class maxmin
{
public static void main(String[]arg)
{
int []n={10,5,3,15,12,35,25,6};
int min = n[0];
int max= n[0];
System.out.println("array before finding max min");
for(int i=1;i<n.length;i++)
{
System.out.print(" "+n[i]);
}
for(int i=1;i<n.length;
{
if (min>n[i])
{
min=n[i];
}
if (max<n[i])
{
max=n[i];
}
}
System.out.println("");
System.out.println("minimum = " +min+ " maximum = " +max);
}
}
