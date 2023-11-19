/*Q2. Write a program that copies the contents of one stack into another. Use
stack library to perform basic stack operations. The order of two stacks
must be identical.(Hint: Use a temporary stack to preserve the order).
[20]*/

#include<stdio.h>
#include<stdlib.h>
#define max 3
struct stack
{
int data[max];
int top;
}s;
void init()
{
s.top=-1;
}
int isfull()
{
 if(s.top==max-1)
 return 1;
 else 
 return 0;
}
int isempty()
{
if(s.top==-1)
return 1;
else
return 0;
}
void push(struct stack s1,int val)
{
if(isfull())
printf("overflow");
else
{
s.top++;
s.data[s.top]=val;
}
}
void disp()
{
int i;
for(i=s.top;i>=0;i--)
{
printf("%d\t",s.data[i]);
}
}
int main()
{
int i,val;
struct stack s1,s2,temp;
init(s1);
init(s2);
init(temp);
for(i=0;i<=max-1;i++)
{
  printf("enter values in stack");
  scanf("%d",&val);
  push(s1,val);
}
for(i=s.top;i<=0;i--)
{
push(temp,s1.data[i]);
}
for(i=s.top;i<=0;i--)
{
push(temp,s2.data[i]);
}
printf("original stack");
disp(s1);
printf("copied stack");
disp(s2);
}
