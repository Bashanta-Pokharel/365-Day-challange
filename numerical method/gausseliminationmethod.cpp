#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	float a[99][99], x[99], c,sum;
	int i,j,k,n;
	
	printf("Enter the number no of variables,n =");
	scanf("%d",&n);
	printf("Enter the augmented matrix elements:\n");
	
	
	for (i=1; i<=n; i++)
	{
		for (j=1; j<=n+1; j++){
			printf("a[%d][%d]=",i,j);
			scanf("%f",&a[i][j]);
			
		}
	}
	for (i=1; i<=n-1; i++)
	{
		for (j=i+1; j<=n; j++ ){
			c=a[j][i] / a[i][i];
				for (k=1; k<=n+1; k++){
					a[j][k] =a[j][k] - c *a[i][k];
				}
		}
	}
	//back sucstitution
	x[n] = a[n][n+1]/a[n][n];
	for (i=n-1;i>=1;i--){
		sum=0;
		for (j=i+1; j<=n; j++){
			sum=sum+a[i][j] * x[j];
		}
		x[i] = (a[i][n+1] - sum) / a[i][i];
	}
	
	printf("\n the Solution of gauss elimination :\n");
	for (i=1; i<=n; i++){
		printf("x[%d] =%f \n",i , x[i]);
	}
	return 0;
}
