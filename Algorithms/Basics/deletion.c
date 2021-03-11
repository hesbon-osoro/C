#include<stdio.h>
main()
{
int LA[]={1,3,5,7,8};
int i,k,n=5;
printf("Enter the location of deletion: \n");
scanf("%d",&k);
printf("The original array elements are:\n");
for(i=0;i<n;i++)
{
printf("LA[%d]: %d\n",i,LA[i]);
}
for(i=k-1;i<n-1;i++)
{
  LA[i]=LA[i+1];
}
n=n-1;
printf("The array elements after deletion is:\n");
for(i=0;i<n;i++)
{
 printf("LA[%d]: %d\n",i,LA[i]);
}
return 0;
}
