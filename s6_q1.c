/*Q1. Sort a random array of n integers (accept the value of n from user) in
ascending order by using selection sort algorithm.
[10]*/


#include<stdio.h>
int main()
{
int i,n,a[50],index,j,t,min;
printf("enter limit");
scanf("%d",&n);
printf("enter n numbers");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
min=a[i];
index=i;
for(j=i+1;j<n;j++)
{
if(a[j]<min)
{
min=a[j];
index=j;
}
}

t=a[i];
a[i]=a[index];
a[index]=t;

printf("\nselection sort=");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}
}

