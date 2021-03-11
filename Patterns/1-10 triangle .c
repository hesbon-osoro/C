#include<stdio.h>
int main()
{
int row,n,i,k;
k=1;
for(row=1;row<5;row++)
{
for(n=1;n<=row;n++)
{
printf("%d\t",k++);
}
printf("\n");
}
return 0;
}
