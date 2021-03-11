#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,h,i;
float x1,x2,x3,x4;
int sq;
float sq2,sqt,sqt2;
printf("Quadratic Equation is in form of ax^2+bx+c=0\n\n");
printf("Enter coefficient of a\n");
scanf("%f",&a);
printf("Enter coefficient of b\n");
scanf("%f",&b);
printf("Enter coefficient of c\n");
scanf("%f",&c);
sq=(b*b)-(4*a*c);
printf("The square of the roots is: %d\n",sq);
{
switch(sq>0)
{
case 1:
x1=(-b+sqt)/(2*a);
x2=(-b-sqt)/(2*a);sqt=sqrt(sq);
printf("The roots are Real and Distinct\nThe Square root is:%.4f\n x is either :%.2f or :%.2f\n",sqt,x1,x2);
break;
}
switch(sq<0)
{
case 1:
x3=(-b)/(2*a);sq2=-1*sq;sqt2=sqrt(sq2);
x4=(-b)/(2*a);i=sqt2/(2*a);h=sqt2/(2*a);
printf("The roots are Complex (i.e Real and Imaginary)\nThe Square root is:%.4f i\n x is either :%.2f + %.2fi or :%.2f - %.2fi \n",sqt2,x3,i,x4,h);
break;
}
switch(sq){
case 0:
sq=(b*b)-(4*a*c);
printf("The roots are Real and Repeated\nThe Square root is:%.4f\n x is :%.2f\n",sq,x1);
break;}
}
return 0;
}
