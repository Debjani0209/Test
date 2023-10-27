#include<stdio.h>
#include<stdlib.h>

struct Node
{
   int data;
   struct Node *link;
}*start = NULL,*end = NULL;

void insert(int);
void delete();
void display();

int main()
{
   int choice, value;
   printf("\n:: Queue Implementation using Linked List ::\n");
   while(1)
   
   {
      printf("1. Push...\n");
	  printf("2. Pop...\n");
	  printf("3. Display...\n");
	  printf("4. Exit...\n");
	  
      printf("Enter your choice: ");
      scanf("%d",&choice);
      switch(choice)
	  {
	 	case 1: printf("Enter the value to be insert: \n");
		scanf("%d", &value);
		insert(value);
		break;
	 	case 2: delete(); 
		break;
		case 3: display();
		break;
	 	case 4: exit(0);
	 	default: printf("\nWrong Input\n");
      }
   }
}
void insert(int value)
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = value;
   newNode -> link = NULL;
   if(start == NULL)
   {
      start = end = newNode;
   }
   else
   {
      end -> link = newNode;
      end = newNode;
   }
}
void delete()
{
	if(start == NULL)
	{
		printf("\nQueue is Empty....\n");
    }
   else
   {
      struct Node *temp = start;
      start = start -> link;
      printf("\nDeleted element: %d\n", temp->data);
      free(temp);
   }
}
void display()
{
   if(start == NULL)
   {
      printf("\nQueue is Empty....\n");
   }
   else
   {
      struct Node *temp = start;
      while(temp->link != NULL)
	  {
		printf("%d--->",temp->data);
		temp = temp -> link;
      }
      printf("%d--->NULL\n",temp->data);
   }
}
