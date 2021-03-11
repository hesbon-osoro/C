#include<stdio.h>
int main()
{
int row,k,i,n;
for(row=1;row<=5;row++)
{
for(n=1;n<=row;n++)
{
i=5;
for(k=0;k<=i;k++)
{
printf("%d\t",k);
}
}
i++;
printf("\n");
}
return 0;
}
