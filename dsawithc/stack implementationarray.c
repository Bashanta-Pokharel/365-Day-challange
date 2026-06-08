#include<stdio.h>
int stack[100],i,j,choice=0,n,top=-1;
void push();
void pop();
void display();
void main()
{
	printf("enter the number of the element in the stack");
	scanf("%d",&n);
	printf(" stack operation using array\n");
	printf("\n----------------------------------\n");
	while(choice!=4)
	{
		printf("chose one from the below\n");
		printf("\n 1 for push\n 2 for pop \n 3 for display and\n 4 for exit");
		printf("\n enter the choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				Display();
				break;
			case 4:
				printf("exiting");
				break ;
			default:
				printf("plese enter valid choice");
		}
	};
	
}
void push()
{
	int val;
	if(top==n)
	printf("\n overflow");
	else
	{
		printf("enter the value");
		scanf("%d",&val);
		top = top+1;
		stack[top]=val;
	}
}
void pop()
{
	if(top== -1)
	printf("underflow");
	else
	top =top-1;
}
void Display()
{
	for(i=top;i>=0;i--)
	{
		printf("%d\n",stack[i]);
	}
	if(top==-1)
	{
		printf("stack is empty");
	}
}
