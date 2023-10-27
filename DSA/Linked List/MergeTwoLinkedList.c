#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};

struct node* get_node()
{
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("Enter any number :");
	scanf("%d",&temp->data);
	temp->link=NULL;
	return temp;
}
struct node* create()
{
	struct node *temp, *temp1 , *start=NULL;
	int n,i;
	printf("How Many Nodes !!");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		temp=get_node();
		if(start==NULL)
		{
			start=temp1=temp;
		}
		else
		{
			temp1->link=temp;
			temp1=temp;
		}
	}
	return start;
}
struct node* merge_node(struct node *t1,struct node *t2)
{
	struct node *t,*p;
	if(t1==NULL)
	{
		return t2;
	}
	if (t2==NULL)
	{
		return t1;
	}
	if(t1->data < t2->data)
	{
		t=p=t1;
		t1=t1->link;
	}
	else
	{
		t=p=t2;
		t2=t2->link;
	}
	while(t1!=NULL && t2!=NULL)
	{
		if(t1->data < t2->data)
		{
			p->link=t1;
			t1=t1->link;
			p=p->link;
		}
		else
		{
			p->link=t2;
			t2=t2->link;
			p=p->link;
		}
	}
	if(t1!=NULL)
	{
		p->link=t1;
	}
	else
	{
		p->link=t2;
	}
	return t;
}
void display(struct node *start)
{
	struct node*temp1;
	for(temp1=start;temp1!=NULL;temp1=temp1->link)
	{
		printf("%d ",temp1->data);
	}
	printf("\n");
	//printf("NULL ");
}
int main()
{
	struct node *s1,*s2,*s3;
	s1=create();
	s2=create();
	display(s1);
	display(s2);
	s3=merge_node(s1,s2);
	display(s3);
	//printf("\n");
}
