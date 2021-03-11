#include<stdio.h>
int fact(int n, int f);
int main()
{
int row,n,f;
for(row=0;row<=5;row++)
{
for(n=0;n<=row;n++)
{
printf("%d",fact(row)/(fact(n)*fact(row-n)));
}
printf("\n");
}
return 0;
}
int fact(int n, int f)
{
n=1;
for(f=1;f<=row;f++)
{
f=f*n;
}
return f;
}
