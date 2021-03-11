#include<stdio.h>
int main()
{
int row,n,k,sp;
for(row=1;row<=5;row++)
{
for(sp=5;sp>=row;sp--)
{
printf(" ");
}
for(n=1;n<=2*row-1;n++)
{
printf("*");
}
printf("\n");
}
for(n=1;n<=2*6-1;n++)
{
printf("*");
}
printf("\n");
k=1;
for(row=5;row>=1;row--)
{
for(sp=1;sp<=k;sp++)
{
printf(" ");
}
for(n=1;n<=row*2-1;n++)
{
printf("*");
}
k++;
printf("\n");
}
return 0;
}
