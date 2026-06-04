#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
	float a[99][99], x[99],c;
	int i,j,k,n;
	printf("Enter the no. of variables, n=");
	scanf("%d", &n);
		for(i=1; i<=n; i++){
			for(j=1; j<=n+1; j++){
				printf("a[%d][%d] = ",i,j);
				scanf("%f", &a[i][j]);
			}
		}
		 
		 for(i=1; i<=n; i++)
		 {
		 	for(j=1; j<=n; j++)
		 	{
		 		if(j!=i)
		 		{
		 			c=a[j][i]/a[i][i];
		 			for(k=1; k<=n+1; k++)
		 			{
		 				a[j][k]=a[j][k]-c*a[i][k];
		 				
					 }
				 }
			 }
		 }
		 printf("\n the Solution of gauss jorden method :\n");
		 for(i=1; i<=n; i++)
		 {
		 	x[i]=(a[i][n+1])/a[i][i];
		 	printf("\n x[%d] = %f",i,x[i]);
		 }
		 return 0;
}
