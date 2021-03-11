#include<stdio.h>
int main()
{
int n;
printf("Enter an integer\n");
scanf("%d",&n);
/*if n is completely divisible by 2 then prints even otherwise n is odd*/
if(n%2==0)
printf("Even\n");
else
printf("Odd\n");
return 0;
}
