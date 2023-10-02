/*
  Q1. Sort a random array of n integers (accept the value of n from user) in
ascending order by using insertion sort algorithm.
[10]*/




#include<stdio.h>
int main()
{
int i,a[50],j,n,t,num;
printf("enter limit");
scanf("%d",&n);

printf("enter n values");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
num=a[i];
for(j=i-1;j>=0 && num<a[j];j--)
{
t=a[j+1];
a[j+1]=a[j];
a[j]=t;
}
}
printf("sort num");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}
