#include<stdio.h>
int main()
{
int i,n,m;
int hcf=1;
m=25;n=4;
printf("GCD %d & %d:\n",(n<m)?n:m,(n>m)?n:m);
//k=(n<m)?n:m;
for(i=2;i<=n&& i<=m;i++)
{
if((m%i==0)&&(n%i==0))
hcf=i;
}
printf("\nHCF : %d\n",hcf);
printf("\n***Success***\n");
getch();
return 0;
}
