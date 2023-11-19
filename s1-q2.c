/*Q2. Write a program that sorts the elements of linked list using any of sorting
technique.
[20]*/

#include<stdio.h>
int main()
{
int a[10],i,n,num,pass,t;
printf("enter limit");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("entar value");
scanf("%d",&a[i]);
}
for(pass=1;pass<n;pass++)
{
  for(i=0;i<n-pass;i++)
  {
    if(a[i]>a[i+1])
    {
    t=a[i];
    a[i]=a[i+1];
    a[i+1]=t;
    }
  }
}
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}
