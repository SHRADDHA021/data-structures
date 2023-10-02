/*
Q1. Implement a list library (singlylist.h) for a singly linked list of integer
With the operations create, delete specific element and display. Write a
menu driven program to call these operations
[10]*/


#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
int data;
struct node *next;
}node;
#define nodealloc (node*)malloc(sizeof(node));
node *create(node *list)
{
int i,n;
node *newnode,*temp;
printf("enter limit");
scanf("%d",&n);

for(i=0;i<n;i++)
{ newnode=nodealloc;
printf("enter val ");
scanf("%d",&newnode->data);
if(list==NULL)
{
list=temp=newnode;
}
else
{
temp->next=newnode;
temp=newnode;
}
}return list;
}
node *del(node *list,int pos)
{
node *temp,*temp1;
int i,n;
if(pos==1)
{
list=temp;
list=list->next;
free(temp);
}
else
{
for(temp=list,i=0;temp!=NULL && i<pos-1;i++,temp=temp->next);
temp1=temp->next;
temp->next=temp1->next;
free(temp1);
}return(list);
}
node *disp(node *list)
{
node *temp;
for(temp=list;temp!=NULL;temp=temp->next)
{
printf("%d\t",temp->data);
}
}
int main()
{
node *list=NULL;
int ch,pos;
do
{
printf("\n1.create\n2.disp\n3.del\nenter choice=\t");
scanf("%d",&ch);
switch(ch)
{
case 1:list=create(list);
break;
case 2:disp(list);
break;
case 3:
printf("enter pos");
scanf("%d",&pos);
list=del(list,pos);
break;
}

}while(ch<4);
}
