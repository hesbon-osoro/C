#include<stdio.h>
int main()
{
int i,j,n,m;
int hcf=1;
i=1;//prime nos start from 2
printf("This program generates factors of two numbers:\n");
printf("Enter the first number:\n");
scanf("%d",&n);
printf("Enter the second number:\n");
scanf("%d",&m);
printf("GCD %d & %d:\n",(n<m)?n:m,(n>m)?n:m);
while((n!=1)&&(m!=1))
{
if((n%j==0)&&(m%j==0)){
//printf("%d ",hcf);
n=n/j;m=m/j;j=2;
}else{
   j++;
}
}
hcf=i*j;
printf("\nHCF : %d\n",hcf);
printf("\n***Success***\n");
getch();
return 0;
}
