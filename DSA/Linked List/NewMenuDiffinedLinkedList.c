#include<stdio.h>
#include<stdlib.h>

void insert_at_begining(int);
void insert_at_end(int);
void insert_at_anypos(int,int);
void insert_before_an_element(int,int);
void insert_after_an_element(int,int);
void node_count();
void display();
void delete_at_begining();
void delete_at_end();
void delete_at_anypos(int);
struct node *start = NULL;

struct node
{
	int data;
	struct node *link;
	 
};

int main()
{
	int ch,el,pos;
	printf("Press 1 to insert at the begining ....\n" );
	printf("Press 2 to insert at the end ...\n" );
	printf("Press 3 to insert at any position ....\n" );
	printf("Press 4 to insert after an element ....\n" );
	printf("Press 5 to insert before an element ....\n" );
	printf("Press 6 to delete at begining ....\n");
	printf("Press 7 to delete at the end....\n");
	printf("Press 8 to delete at any position...\n");
	printf("Press 9 to display the count of node....\n");
	printf("press 10 to display....\n\n");
	
	while(1)
	{
		printf("Enter your Number:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter an Element :");
				scanf("%d",&el);
				insert_at_begining(el);
				break;
			case 2:
				printf("Enter an Element :");
				scanf("%d",&el);
				insert_at_end(el);
				break;
			case 3:
				printf("Enter an Element :");
				scanf("%d",&el);
				printf("Enter any Position :");
				scanf("%d",&pos);
				insert_at_anypos(el,pos);
				break;
			case 4:
				printf("Enter an Element :");
				scanf("%d",&el);
				printf("Enter any Position :");
				scanf("%d",&pos);
				insert_after_an_element(el,pos);
				break;
			case 5:
				printf("Enter an Element :");
				scanf("%d",&el);
				printf("Enter any Position :");
				scanf("%d",&pos);
				insert_before_an_element(el,pos);
				break;
			case 6:
				delete_at_begining();
				break;
			case 7:
				delete_at_end();
				break;
			case 8:
				printf("Enter any Position :");
				scanf("%d",&pos);
				delete_at_anypos(pos);
				break;
			case 9:
				node_count();
				break;
			case 10:
				display();
				break;
			default:
				printf("Invalid Choice...\n");
		}
	}
} 
void insert_at_begining(int el)
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=el;
	temp->link=start;
	start=temp;
}  
void insert_at_end(int el)
{
	struct node *temp,*i;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=el;
	temp->link=NULL;
	i=start;
	while(i->link!=NULL)
	{
		i=i->link;
	}
	i->link=temp;
}
void node_count()
{
	
	int count = 0;
	struct node *i =NULL;
	i=start;
	while(i!=NULL)
	{
		count++;
		i=i->link;
	}
	printf("Count of Node : %d\n",count);
}
void display()
{
	struct node * i;
	i=start;
	while(i!=NULL)
	{
		printf("%d ->",i->data);
		i=i->link;
	}
	printf("NULL....\n");
}
void insert_at_anypos(int el,int pos)
{

	if(pos==0)
		printf("Not possible....\n");
	else if(pos==1)
		insert_at_begining(el);
	else
	{
		int i=1;
		struct node *temp,*t;
		t=start;
		temp=(struct node*)malloc(sizeof(struct node));
		temp->data=el;
		while(pos-1>i && t !=NULL)
		{
			t=t->link;
			i++;
		}
		
		if(t==NULL)
			printf("Invalid position...");
		else
		{
			temp->link=t->link;
			t->link=temp;
		}
	}

}
void delete_at_begining()
{
	struct node *temp;
	if(start==NULL)
	{
		printf("No existance of list....\n");
	}
	else
	{
	temp=start;
	start=start->link;
	free(temp);
	}
}
void delete_at_end()
{
	struct node *temp,*i,*t;
	i=start;
	if(start->link==NULL)
	{
		t=start;
		start=NULL;
		free(t);
	}
	else
	{
		while(i->link->link!=NULL)
		{
			i=i->link;
		}
		temp=i->link;
		i->link=NULL;
		free(temp);
	}
}
void delete_at_anypos(int pos)
{
	if(pos<=0)
		printf("Not possible");
	else if(pos==1)
		delete_at_begining();
	else
	{
		struct node  *temp,*t;
		int i=1;
		temp=start;
		while(pos-1>i && temp!=NULL)
		{
			temp=temp->link;
			i++;
		}
		if(temp==NULL)
		{
			printf("Invalid position...");
		}
		else
		{
			t=temp->link;
			temp->link=t->link;
	    }
		free(t);
	}
}
void insert_before_an_element(int el,int pos)
{
	struct node  *temp,*i,*j;
	temp= (struct node*)malloc(sizeof(struct node));
	temp->data=el;
	i=start;
	while(i!=NULL)
	{
		if(i->data!=pos)
		{
			j=i->link;
			i->link=temp;
			temp->link=j;
			
		}
	}
}
void insert_after_an_element(int el,int pos)
{
	struct node  *temp,*i, *stemp;
	temp= (struct node*)malloc(sizeof(struct node));
	temp->data=el;
	i=start;
	while(i!=NULL)
	{
		if(i->data==pos)
		{
			stemp=i;
			temp->link=stemp->link;
			stemp->link=temp;
		}
		i=i->link;
	}
}
