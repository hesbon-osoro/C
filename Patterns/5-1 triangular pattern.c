#include<stdio.h>
int main()
{
int row,n,i,k;
for(row=5;row>=1;row--)
{
for(n=5;n>=row;n--)
{
printf("%d",n);
}
printf("\n");
}
return 0;
}
