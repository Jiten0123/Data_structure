#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void append();
void display();
struct node
{
	int data;
	struct node *link;
};
struct node *root=NULL;
int main()
{
	int ch;
	while(1)
	{
		printf("\n\npress 1 for append\n");
		printf("press 2 for display\n");
		printf("press 3 for exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				append();
				break;
			case 2:
				display();
				break;
			case 3:
				exit(0);
		}
	}
	return 0;
}
void append()
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\n\nenter the data");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(root==NULL)
	{
		root=temp;
	}
	else
	{
		struct node *p=root;
		while(p->link!=NULL)
		{
			p=p->link;
		}
		p->link=temp;
	}
}
void display()
{
	struct node *p=root;
	if(p==NULL)
	{
		printf("\nList is empty");
	}
	else
	{
		while(p!=NULL)
		{
			printf("\n%d",p->data);
			p=p->link;
		}
	}
}
