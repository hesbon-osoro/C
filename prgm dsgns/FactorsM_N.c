#include<stdio.h>
int main()
{
int i,j,n,m;
j=2;i=2;//prime nos start from 2/*
printf("This program generates factors of two numbers:\n");
printf("Enter the first number:\n");
scanf("%d",&n);
printf("Enter the second number:\n");
scanf("%d",&m);
printf("Factors of %d :\n",n);
while(n!=1)
{
if(n%j==0){
printf("%d ",j);
n=n/j;j=2;//you may /may not reinitialize j
}else{
   j++;
}
}
printf("\nFactors of %d :\n",m);
while(m!=1)
{
if(m%i==0){
printf("%d ",i);
m=m/i;i=2;//you may /may not reinitialize j
}else{
   i++;
}
}
printf("\n***Success***\n");
getch();
return 0;
}
