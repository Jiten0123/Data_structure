#include<stdio.h>
#include<stdlib.h>
int i;
int *ptr=NULL;
int isfull();
int isempty();
void peek();
void pop();
void display();
void push(int);
int top = -1;
int main()
{
	printf("give array size:");
	scanf("%d",&i);
	ptr=(int*)calloc(i,sizeof(int));
	int ch,ele;
	while(1)
	{
		printf("\npress 1 for push\n");
		printf("press 2 for pop\n");
		printf("press 3 for peek\n");
		printf("press 4 for display\n");
		printf("press 5 for exit\n\n:");
		scanf("%d",&ch);
		if(ch==1 || ch==2 || ch==3 || ch==4 || ch==5)
		{
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
				exit(1);
		}
		}
		else
		{
			exit(1);
		}
	}
	free(ptr);
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
		*(ptr+top)=ele;
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
		printf("poped item is %d",*(ptr+top));
		top--;
	}
}
int isfull()
{
	if(top==i-1)
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
	if(top==-1)
	{
		printf("Top element 0");
	}
	else
	printf("Top element %d",*(ptr+top));
}
void display()
{
	int i;
	for(i=0;i<=top;i++)
	{
		printf("%d	",*(ptr+i));
	}
}
