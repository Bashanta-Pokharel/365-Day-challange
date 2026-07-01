public class matrix {
public static void main(String[] args) {
int [][] a=new int[][]{{1,2,3},{2,2,3},{3,2,1}};
int [][] b=new int[][]{{6,7,9},{2,4,8},{1,5,9}};
int [][] mul=new int[3][3];
System.out.println("a :");
for(int i=0; i<3; i++)
{
for(int j=0; j<3; j++)
{
System.out.print(a[i][j]+" ");
}

System.out.println();
}
System.out.println("b:");
for(int i=0; i<3; i++)
{
for(int j=0; j<3; j++)
{
System.out.print(b[i][j]+" ");
}
System.out.println();
}
for(int i=0; i<3; i++)
{
for(int j=0; j<3; j++)
{
mul[i][j]=0;
 for(int k=0; k<3; k++)
{
 mul[i][j]=mul[i][j]+a[i][k]*b[k][j];

}

}

}

System.out.println("multiplication :");
for(int i=0; i<3; i++)
{
for(int j=0; j<3; j++)
{
System.out.print(mul[i][j]+" ");
}
System.out.println();
}
}
}