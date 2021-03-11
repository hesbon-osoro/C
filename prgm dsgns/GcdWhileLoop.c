#include<stdio.h>
int main()
{
int i,k,n,m;
int hcf;
printf("This program generates factors of two numbers:\n");
printf("Enter the first number:\n");
scanf("%d",&n);
printf("Enter the second number:\n");
scanf("%d",&m);
printf("GCD of %d & %d:\n",(n<m)?n:m,(n>m)?n:m);
k=(n<m)?n:m;
i=1;
while(i<=k)
{
if((n%i==0)&&(m%i==0))
   {
n=n/i;m=m/i;i++;
}else{
   }
   i=1;
}
hcf=i;
printf("\nHCF : %d\n",hcf);
printf("\n***Success***\n");
getch();
return 0;
}
