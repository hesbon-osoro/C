#include<stdio.h>
int main()
{
int row, i, k,sp;
k=1;
for(row=5;row>=1;row--)
{
for(sp=1;sp<=k;sp++)
{
printf(" ");
}
for(i=row*2-1;i>=1;i--)
{
printf("*");
}
k++;
printf("\n");
}
return 0;
}
