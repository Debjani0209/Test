#include<stdio.h>
#include<stdlib.h>

struct Node
{
   int data;
   struct Node *link;
}
*top = NULL;

void push(int);
void pop();
void display();

int main()
{
   int choice, value;
   printf(" Stack using Linked List ....\n");
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
		case 1: printf("Enter the value to be insert... \n");
		scanf("%d", &value);
		push(value);
		break;
		case 2: pop();
		break;
		case 3: display(); 
		break;
		case 4: exit(0);
		default: printf("\nWrong selection....\n");
      }
   }
}
void push(int value)
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = value;
   if(top == NULL)
	{
		newNode->link= NULL;
	}
    else
    {
      newNode->link = top;
    }
   top = newNode;
}
void pop()
{
   if(top == NULL)
   {
      printf("\nStack is Empty.....\n");
   }
   else
   {
      struct Node *temp = top;
      printf("\nDeleted element: %d\n", temp->data);
      top = temp->link;
      free(temp);
   }
}
void display()
{
   if(top == NULL)
   {
      printf("\nStack is Empty....\n");
   }
   else
   {
      struct Node *temp = top;
      while(temp->link!= NULL)
	  {
	 		printf("%d--->",temp->data);
	 		temp = temp -> link;
      }
      printf("%d--->NULL\n",temp->data);
   }
}
