#include<stdio.h>
int main()
{
int n,a;
float sqt;
n=5;
sqt=sqrt(n);
a=sqt;
{
if(a==sqt)
{
printf("%d is a Perfect Square\n",n);
}
if(a!=sqt)
{
printf("%d is Not a Perfect Square\n",n);
}
}
return 0;
}
