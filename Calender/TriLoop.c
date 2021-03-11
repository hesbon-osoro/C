#include<stdio.h>
int main()
{
int i,j,k;
for(i=1;i<5;i++)
{
for(j=1;j<=i;j++)
{
for(k=1;k<8;k++)
{
printf("%d ",k);
}
}
printf("\n");
}
return 0;
}
