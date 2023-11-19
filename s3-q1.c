/*Q1. Sort a random array of n integers (accept the value of n from user) in
ascending order by using insertion sort algorithm.
[10]*/
#include<stdio.h>
int main()
{
int a[10],i,n,j,t,key;
printf("enter limit");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter values");
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
 key=a[i];
  for(j=i-1;j>=0&&key<a[j];j--)  
    {
      t=a[j+1];
      a[j+1]=a[j];
      a[j]=t;
      
    }   
}
for(i=0;i<n;i++)
{
 printf("%d\t",a[i]);
}
}
