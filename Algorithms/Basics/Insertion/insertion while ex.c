#include<stdio.h>
main()
{
int LA[]={1,3,5,7,8};
int item=10, k=3,n=5;
int i,j;
printf("The original array elements are:\n");
for(i=0;i<n;i++)
{
printf("LA[%d]: %d\n",i,LA[i]);
}
n=n+1;
j=n;
i=n-1;
while(i>=k-1)
{
LA[i+1]=LA[i];
i--;
}
LA[k-1]=item;
printf("The array elements after insertion is:\n");
for(i=0;i<n;i++)
{
 printf("LA[%d]: %d\n",i,LA[i]);
}
return 0;
}
