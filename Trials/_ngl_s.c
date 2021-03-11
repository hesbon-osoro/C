#include<stdio.h>
#include<math.h>
int main()
{
int x;
float i,j,k;
x=0;
double pie=3.141592654;
printf("\tTan\t\tSin\t\tCos\n");
do
{
i=tan(pie*x/180);
j=sin(pie*x/180);
k=cos(pie*x/180);
printf("%d:\t%.4f\t\t%.4f\t\t%.4f",x,i,j,k);
printf("\n");
x=x+30;
}while(x<=360);
getch();
return 0;
}
