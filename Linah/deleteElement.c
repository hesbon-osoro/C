#include<stdio.h>
int main()
{
int Arry[]={1,3,5,7,9};
int i,k,n;
n=5;k=2;
printf("Elements before deletion\n");
for(i=0;i<n;i++)
{
printf("[%d]: %d\n",i,Arry[i]);
}
for(i=k;i<n-1;i++)
{
Arry[i]=Arry[i+1];
}
n--;
printf("Elements after deletion\n");
for(i=0;i<n;i++)
{
printf("[%d]: %d\n",i,Arry[i]);
}
return 0;
}
