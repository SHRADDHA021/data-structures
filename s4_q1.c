/*Q1. Read the ‘n’ numbers from user and sort using bubble sort.
[10]*/





#include<stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};
int main()
{
	struct node *temp1,*temp2, *t,*newNode, *list;
	int n,k,i,j;
	list=NULL;
	printf("enter limit ");
	scanf("%d",&n);
	printf("enter n val:\n");
	for(i=1;i<=n;i++)
	{
    		if(list==NULL)
    		{
			newNode=(struct node *)malloc(sizeof(struct node));
			scanf("%d",&newNode->data);
			newNode->next=NULL;
			list = newNode;
			temp1=list;
		}
		else
		{
			newNode=(struct node *)malloc(sizeof(struct node));
			scanf("%d",&newNode->data);
			newNode->next=NULL;
			temp1->next = newNode;
			temp1=newNode;
		}
	}
	for(i=n-2;i>=0;i--)
	{
		temp1=list;
		temp2=temp1->next;
		for(j=0;j<=i;j++)
		{
			if(temp1->data > temp2->data)
			{
				k=temp1->data;
				temp1->data=temp2->data;
				temp2->data=k;
			}
			temp1=temp2;
			temp2=temp2->next;
		}
	}
	printf("Sorted order is: \n");
	t=list;
	while(t!=NULL)
	{
		printf("%d\t",t->data);
		t=t->next;
	}
}
