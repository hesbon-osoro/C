#include<stdio.h>
int n1,n2;
void sum(int n1,int n2);
void sub(int n1,int n2);
void mul(int n1,int n2);
void div(int n1,int n2);
int main()
{
int *x;
int *y;
printf("Enter first number: ");
scanf("%d",&x);
printf("Enter second number: ");
scanf("%d",&y);
sum(x,y);
sub(x,y);
mul(x,y);
div(x,y);
return 0;
}
void sum(int n1,int n2)
{
int sum;
sum=n1+n2;
printf("Sum of %d and %d: %d\n",n1,n2,sum);
}
void sub(int n1,int n2)
{
int sub;
sub=n1-n2;
printf("Difference of %d and %d: %d\n",n1,n2,sub);
}
void mul(int n1,int n2)
{
int mul;
mul=n1*n2;
printf("Multiplication of %d and %d: %d\n",n1,n2,mul);
}
void div(int n1,int n2)
{
float div;
div=n1/(float)n2;
printf("Division of %d and %d: %f\n",n1,n2,div);
}
