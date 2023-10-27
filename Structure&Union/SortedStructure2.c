#include <stdio.h>
struct student
{
	char name[50];
	char sec;
	int marks;
};
void accept(struct student arr[],int );
void display(struct student arr[],int );
void b_sort(struct student arr[],int );
int main()
{
	struct student data[20];
	int n;
	printf("Enter the no of records:");
	scanf("%d",&n);
	accept(data,n);
	printf("\n Before sorting");
	display(data,n);
	b_sort(data,n);
	display(data,n);
	printf("\nAfter sorting");
}
void accept(struct student arr[50],int s)
{
	int i;
	for (i=0;i<s;i++)
	{
		printf("Enter data %d:",i+1);
		printf("\nEnter name :");
		scanf("%d",&arr[i].name);
		printf("\nEnter sec :");
		scanf("%d",&arr[i].sec);
		printf("\nEnter marks :");
		scanf("%d",&arr[i].marks);
		
	}
}
void display(struct student arr[50],int s)
{
	int i;
	printf("\n\ntName\tSec\tMarks\n");
	for (i=0;i<s;i++)
	{
		printf("%dt%s\t%s\t%d\n",i+1,arr[i].name,arr[i].sec,arr[i].marks);
		
	}
}
void b_sort(struct student arr[50],int s)
{
	int i,j;
	struct student temp;
	for(i=0;i<s-1;i++)
	{
		for(j=0;j<s-1-i;j++)
		{
			if(arr[j].marks<arr[j+1].marks)
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
