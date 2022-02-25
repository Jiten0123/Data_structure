#include<stdio.h>
#include<stdlib.h>
#define N 5
int isfull();
int isempty();
void peek();
void pop();
void display();
void push(int);
int stack[N];
int top = -1;
int main()
{
	int ch,ele;
	while(1)
	{
		printf("\npress 1 for push\n");
		printf("press 2 for pop\n");
		printf("press 3 for peek\n");
		printf("press 4 for display\n");
		printf("press 5 for exit\n\n:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter an element:");
				scanf("%d",&ele);
				push(ele);
				break;
			case 2:
				pop();
				break;
			case 3:
				peek();
				break;
			case 4:
				display();
				break;
			case 5:
				exit(0);
			default:
				printf("Enter an valid option");
		}
	}
	return 0;
}
void push(int ele)
{
	if(isfull())
	{
		printf("Stack overflow");
	}
	else
	{
		top=top+1;
		stack[top]=ele;
	}
}
void pop()
{
	if(isempty())
	{
		printf("stack underflow");
	}
	else
	{
		printf("poped item is %d",stack[top]);
		top--;
	}
}
int isfull()
{
	if(top==N-1)
	return 1;
	else
	return 0;
}
int isempty()
{
	if(top==-1)
	return 1;
	else
	return 0;
}
void peek()
{
	printf("Top element %d",stack[top]);
}
void display()
{
	int i;
	for(i=0;i<=top;i++)
	{
		printf("%d	",stack[i]);
	}
}
