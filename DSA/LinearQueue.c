#include<stdio.h>
#include<stdlib.h>
#define Max 5

int q[Max],start=-1,end=-1;
void enqueue();
void dequeue();
void display();

int main()
{
	int a;
	printf("Press 1 to enqueue or insert\n");
	printf("Press 2 to dequeue or delete\n");
	printf("Press 3 to dispaly\n");
	printf("Press 4 to exit\n");
	
	while(1)
	{
		printf("Enter a number:");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default:
				printf("Invalid Choice");	
		}
	}
}
void enqueue()
{
	int e;
	if(end==Max-1)
	{
		printf("Overflow\n");
	}
	else
	{
		if(start==-1)
		{
			start=0;
		}
		printf("Enter element:\n");
		scanf("%d",&e);
		end++;
		q[end]=e;
	}
}
void dequeue()
{
	if (start==-1)
	{
		printf("Underflow\n");
	}
	else
	{
		printf("Dequeued : %d\n",q[start]);
		start++;
		if(start>end)
		{
			start = -1;
		}
	}
}
void display()
{
	int i;
	if(start==-1)
	{
		printf("The queue is empty\n");
	}
	else
	{
		printf("Queue is  : \n");
	 	for (i=start;i<=end;i++)
		{
			printf("%d\n",q[i]);
		}
	}
	printf("\n");
}
