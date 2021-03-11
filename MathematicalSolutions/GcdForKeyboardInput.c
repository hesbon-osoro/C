#include<stdio.h>
int main()
{
int i,k,n,m;
int hcf=1;
printf("This program generates factors of two numbers:\n");
printf("Enter the first number:\n");
scanf("%d",&n);
printf("Enter the second number:\n");
scanf("%d",&m);
printf("GCD of %d & %d:\n",(n<m)?n:m,(n>m)?n:m);
k=(n<m)?n:m;
printf("Least No k, %d",k);
for(i=1;i<=k;i++)
{
if((n%k==0)&&(m%k==0))
{
}
}
hcf=k;
printf("\nHCF : %d\n",hcf);
printf("\n***Success***\n");
getch();
return 0;
}
