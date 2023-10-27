#include<stdio.h>
#include<stdlib.h>

void insert_at_begining(int);
void insert_at_end(int);
void insert_at_any(int ,int);
void display();
void delete_at_begining();
void delete_at_any_pos(int);
void delete_at_end();
struct node *start = NULL;
struct node *end = NULL;
struct node
{
	int data;	
	struct node *next;
	struct node *prev;
};
int main()	
{
	int ch,pos,el;
	printf("Enter 1 to insert at first \n");
	printf("Enter 2 to insert at last \n");
	printf("Enter 3 to insert element at any position \n");
	printf("Enter 4 to display the linked list \n");
	printf("Enter 5 to delete the first element\n");
	printf("Enter 6 to delete the last element\n");
	printf("Enter 7 to delete the element at any position\n");

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
			case 5:
				delete_at_begining();
				break;
			case 6:
				delete_at_end();
				break;
			case 7:
				printf("Enter any Position :");
				scanf("%d",&pos);
				delete_at_any_pos(pos);
				break;
			default :
				printf("Invalid choice");
			
		}
	}
}
void insert_at_begining(int el)
{
	struct node *new;
	new = (struct node*)malloc(sizeof(struct node));
	new->data = el;
	if(start == NULL)
	{
		start = end = new;
		new->next = start;
		new->prev = end;
	}
	else
	{
		new->prev = end;
		new->next = start;
		start->prev = new;
		end->next = new;
		start = new;
	}
	
}
void insert_at_end(int el)
{
	struct node *new;
	start = end->next;
	new = (struct node*)malloc(sizeof(struct node));
	new->data = el;

	if(start == NULL)
	{
		start = end = new;
		new->next = start;
		new->prev = end;
	}
	else
	{
		new->prev = end;
		end->next = new;
		new->next = start;
		start->prev = new;
		end = new;
	}
}
void insert_at_any(int el , int pos)
{
	if(pos<=0)
		printf("Not possible\n");
	else if(pos==1)
		insert_at_begining(el);
	else
	{
		int i = 1;
		struct node *new,*temp;
		temp = start;
		new = (struct node*)malloc(sizeof(struct node));
		new->data = el;
		temp = end->next;
		while(i < pos-1 && temp != NULL)
		{
			temp = temp->next;
			i++;
		}
		if(temp == end)
		{
			printf("Invalid position");
		}
		else
		{
			new->prev = temp;
			new->next = temp->next;
			temp->next->prev = new;
			temp->next = new;
		}
	}
}
void display()
{
	struct node *temp;
	temp = start;
	if(start == NULL)
	{
		printf("empty");
	}
	else
	{
		while(temp != end)
		{
			printf("%d ->",temp->data);
			temp = temp->next;
		}
		printf("%d",temp->data);
	}
}
void delete_at_begining()
{
	struct node *temp;
	temp = start;
	if(temp == NULL)
	{
		printf("empty");
	}
	else if(start->next == start)
	{
		start = end = NULL;
		free(temp);
	}
	else
	{
		start = start->next;
		start->prev = end;
		end->next = start;
		free(temp);
	}
}
void delete_at_end()
{
	struct node *temp;
	temp = end;
	if(temp == NULL)
	{
		printf("empty");
	}
	else if(start->next == start)
	{
		start = end = NULL;
		free(temp);
	}
	else
	{
		end = end->prev;
		end->next = start;
		start->prev = end;
		free(temp);
	}
}
void delete_at_any_pos(int pos)
{
	if(pos==0)
		printf("Not Possible \n");
	else if(pos==1)
		delete_at_begining();
	else 
	{
		struct node  *temp;
		temp = (struct node*)malloc(sizeof(struct node));
		int i=1;	
		temp=start;
		temp = end->next;
		while(i<pos && temp!=end)
		{
			temp=temp->next;
			i++;
		}
		if(temp == end)
		{
			printf("Invalid position");
		}
		else
		{
			temp->prev->next = temp->next;
			temp->next->prev = temp->prev;
			if(temp->next == start)
			{
					end = temp->prev;
					free(temp);
			}
			else
			{
				free(temp);
			}
		}
	}
}
