#include<stdio.h>
int main()
{
int i,k,j,n;
int var;
n=14;
printf("Factors of: %d\n",n);
j=2;
while(n!=1)
{
{
if(n%j==0)
printf("%d ",j);
}
n=n/j;
j++;
}
return 0;
}
