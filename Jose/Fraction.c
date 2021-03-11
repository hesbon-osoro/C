/*this code is designed to solve
addition problems for fractions*/
#include<stdio.h>
int main()
{
//int i,j;
int n1,n2,nr;
int d1,d2,dr;
int quo,rem,gcd;
printf("This code performs addition Alone!\n");
printf("Enter num: ");
scanf("%d",&n1);
printf("Enter den: ");
scanf("%d",&d1);
printf("Enter num: ");
scanf("%d",&n2);
printf("Enter den: ");
scanf("%d",&d2);
printf("*_Problem_*\n");
printf("%d / %d +%d / %d\n",n1,d1,n2,d2);
nr=n1*d2+n2*d1;
dr=d1*d2;
quo=nr/dr;
rem=nr%dr;
printf("\n");
printf("*_Solution_*\n");
printf("%d / %d + %d / %d=\n",n1,d1,n2,d2);
if(nr==dr)
{
    printf("Ans = 1\n");
    printf("***Solved***\n");
    return 0;
}
else
{
gcd=GCD(nr,dr);
rem=rem/gcd;
dr=dr/gcd;
printf("%d %d/%d",quo,rem,dr);
}
getch();
return 0;
}
int GCD(int nr, int dr)
{
nr=nr%dr;
if(nr==0)
    return dr;
dr=dr%nr;
if(dr==0)
    return nr;
}
