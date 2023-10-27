#include <stdio.h>
struct student
{
	char name[50];
	int rollno;
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
	
	printf("\nAfter sorting according marks");
	display(data,n);
}
void accept(struct student arr[50],int n)
{
	int i;
	for (i=0;i<n;i++)
	{
		printf("Enter data %d:\n",i+1);
		printf("Enter name :");
		scanf("%s",&arr[i].name);
		printf("Enter rollno :");
		scanf("%d",&arr[i].rollno);
		printf("Enter marks :");
		scanf("%d",&arr[i].marks);
		printf("Enter sec :");
		scanf("%c",&arr[i].sec);
		scanf("%c",&arr[i].sec);
		
	}
}
void display(struct student arr[50],int n)
{
	int i;
	printf("\n\nRollno\tName\tsection\tMarks\n");
	for (i=0;i<n;i++)
	{
		printf("%d\t%s\t%c\t%d\n",arr[i].rollno,arr[i].name,arr[i].sec,arr[i].marks);
		
	}
}
void b_sort(struct student arr[50],int n)
{
	int i,j;
	struct student temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<(n-1-i);j++)
		{
			if(arr[j].rollno>arr[j+1].rollno)
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
