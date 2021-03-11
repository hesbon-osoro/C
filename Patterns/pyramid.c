#include<stdio.h>
int main()
{
int row,i,sp;
for(row=1;row<=5;row++)
{
for(sp=5;sp>=row;sp--)
{
printf(" ");
}
for(i=1;i<=2*row-1;i++)
{
printf("*");
}
printf("\n");
}
return 0;
}
