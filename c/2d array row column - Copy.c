#include<stdio.h>
int main()
{
	int a[2][2],i,j;
	printf("enter the elements in 2:2 matrix");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("\n enter the %d%d th value",i,j);
		scanf("%d",&a[i][j]);
		}
	}
	printf("the elements of 2 by 2 matrix\n");
	for(i=0;i<2;i++)
	{
			for(j=0;j<2;j++)
			{
				printf("\t%d",a[i][j]);
	