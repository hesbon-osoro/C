#include<stdio.h>
int main()
{
int Linah[10]={1,2,3,5,6,7,8,9,10};
int i,k=4,item=4,n=9;
printf("Array before insertion\n");
for(i=0;i<n;i++)
{
printf("Linah[%d]: %d\n",i+1,Linah[i]);
}

for(i=n-1;i>=k-1;i--)
{
Linah[i+1]=Linah[i];
}
Linah[k-1]=item;
n++;
printf("Array after insertion\n");
for(i=0;i<n;i++)
{
printf("Linah[%d]: %d\n",i,Linah[i]);
}
return 0;
}
