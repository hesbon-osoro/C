#include<stdio.h>
int main()
{
int r, D;
float A,C;
printf("Enter the Radius[r]\n");
scanf("%d",&r);
D= 2*r;
C= 22/(float)7*D;
A= 22/(float)7*r*r;
printf("The Diameter is:%d\n",D);
printf("The Circumference is:%.4f\n",C);
printf("The Area is:%.4f\n",A);
return 0;
}
