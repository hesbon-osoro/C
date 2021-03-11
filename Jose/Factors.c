#include<stdio.h>
int Fact_N(int n,int d);
int main()
{
int n=32;
int d=16;
Fact_N(n,d);
return 0;
}
int Fact_N(int n,int d)
{
int i;
for(i=2;i<n;i++)
{
if(n%i==0)
{
n=n/i;
if(d%i==0)
{
d=d/i;
printf("%d/%d ",n,d);
}

}
}
printf("\n");
}
