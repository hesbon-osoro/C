#include<stdio.h>
int main()
{
int i,n,c;
printf("Enter the number\n");
scanf("%d",&n);
if(n<0)
{
printf("Use positive integers\n");
}
else
{
i=1;
c=1;
while(c<=n)
{
i=i*c++;
}
printf("%d! is %d",n,i);
}
return 0;
}
