public class jagde
{
public static void main(String[]arg)
{
int [][]n= new int [3][];
n[0] = new int []{1,2,3};
n[1] = new int []{4,5};
n[2] = new int []{6,7,8,9};
System.out.println("jagged array");
for(int i=0;i<n.length;i++)
{
int sum =0;
{
for(int j =0;j<n[i].length;j++)
{
System.out.print(n[i][j]+" ");
sum = sum + n[i][j];
}
System.out.println("sum = "+sum);

}}
}
}
