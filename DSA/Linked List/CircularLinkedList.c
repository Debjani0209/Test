#include<stdio.h>
#include<stdlib.h>
void insert_at_begining(int);
void insert_at_end(int);
void insert_at_any(int,int);
void display();
struct node
{
	int data;	
	struct node *link;
};
struct node *end = NULL;
int main()	
{
	int ch,pos,el;
	printf("Enter 1 to insert at begining... \n");
	printf("Enter 2 to insert at the end...\n");
	printf("Enter 3 to insert at any position.... \n");
	printf("Enter 4 to display circular linked list \n");
	
	while(1)
	{
		printf("\nEnter your number : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the element : ");
				scanf("%d",&el);
				insert_at_begining(el);		
				break;
			case 2:
				printf("Enter the element : ");
				scanf("%d",&el);
				insert_at_end(el);	
				break;
			case 3:
				printf("Enter the element : ");
				scanf("%d",&el);
				printf("Enter the position : ");
				scanf("%d",&pos);
				insert_at_any(el,pos);
				break;
			case 4:
				display();
				break;
			defaul:
				printf("Invalid choice ");
		}
	}
}
void insert_at_begining(int el)
{
	struct node *new;
	new = (struct node*)malloc(sizeof(struct node));
	new->data = el;
	if(end == NULL)
	{
		end = new;
		end->link = new;
	}
	else
	{
		new->link = end->link;
		end->link = new;
	}
	
}
void insert_at_end(int el)
{
	struct node *new,*temp;
	new = (struct node*)malloc(sizeof(struct node));
	new->data = el;
	if(end == NULL)
	{
		end = new;
		end->link = new;
	}
	else
	{
		new->link = end->link;
		end->link = new;
		end = new;
	}
}
void insert_at_any(int el , int pos)
{
	if(pos<=0 )
		printf("Not possible\n");
	else if(pos==1)
		insert_at_begining(el);
	else
	{
		int i = 1;
		struct node *new,*temp;
		new = (struct node*)malloc(sizeof(struct node));
		new->data = el;
		temp = end->link;
		while(i<pos-1 && temp!=end)
		{
			temp = temp->link;
			i++;
		}
		if(temp == end)
		{
			printf("Invalid Position !\n");
			return;
		}
		new->link = temp->link;
		temp->link = new;		
	}
}
void display()
{
	struct node *temp;
	if(end == NULL)
	{
		printf("Empty!!!");
	}
	else
	{
		temp = end->link;
		while(temp->link != end->link)
		{
			printf("%d->",temp->data);
			temp = temp->link;
		}
		printf("%d",temp->data);
		
	}
}


