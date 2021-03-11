/*this code is designed to solve
addition problems for fractions*/
#include<stdio.h>
void main()
{
int i,j;
int n1,n2,nr;
int d1,d2,dr;
int rem,quo;
float nR,dR,ans;
int nFac,dFac;
char oper='+';
printf("This code performs addition Alone!\n");
printf("Enter num: ");
scanf("%d",&n1);
printf("Enter den: ");
scanf("%d",&d1);
/*printf("Operation [+,-,*,/]: ");
scanf("%s",&oper);*/
printf("Enter num: ");
scanf("%d",&n2);
printf("Enter den: ");
scanf("%d",&d2);
printf("*_Problem_*\n");
printf("%d / %d %c %d / %d\n",n1,d1,oper,n2,d2);
nr=n1*d2+n2*d1;
dr=d1*d2;
quo=nr/dr;
rem=nr%dr;
printf("\n");
printf("*_Solution_*\n");
printf("%d / %d %c %d / %d=\n",n1,d1,oper,n2,d2);
if(nr==dr)
{
    printf("Ans = 1\n");
    printf("***Solved***\n");
    return 0;
}
if(quo==0)
{
float rec,dRec;
int a,d;
rec=(float)nr/(float)dr;
dRec=(1-rec);
a=rec/dRec;
d=rem/a;
{
int i;
for(i=2;i<nr;i++)
{
if(nr%i==0)
{
nr=nr/i;
if(dr%i==0)
{
dr=dr/i;
}
}
}
//printf("%d/%d ",nr,dr);
printf("\n");
}/**/

printf("%d/%d\n",nr,dr );
printf("***Solved***\n");
return 0;
}
else
{
printf("%d %d/%d\n",quo,rem,dr);
printf("***Solved***\n");jn
return 0;
}
getch();
}
