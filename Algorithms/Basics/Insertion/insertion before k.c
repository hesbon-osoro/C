#include<stdio.h>
main()
{
int LA[5]={1,3,5,7,8};
int item=10, k=3,n=5;
int i,j;
printf("The original array elements are:\n");
for(i=0;i<n;i++)
{
printf("LA[%d]: %d\n",i,LA[i]);
}
n=n+1;
j=n;
for(i=n-1;i>=k-2;i--)
{
  LA[i+1]=LA[i];
}
  LA[k-2]=item;
printf("The location k: %d\n",k);
printf("The element is to be stored in Location %d\nwhich is in index k-2: %d\n",k-1,k-2);
printf("The array elements after insertion is:\n");

for(i=0;i<n;i++)
{
 printf("LA[%d]: %d\tLocation :%d\n",i,LA[i],i+1);
}
return 0;
}
