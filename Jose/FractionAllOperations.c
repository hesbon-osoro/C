//this uses a switch to do basic functions
/*#include<stdio.h>
void main()
{
//int i,j;
float n1,n2,nr;
float d1,d2,dr;
float rem,quo;
float nR,dR,ans;
float nFac,dFac;
char oper;
printf("Enter num: ");
scanf("%d",&n1);
printf("Enter den: ");
scanf("%d",&d1);
printf("Operation [+,-,*,/]: ");
scanf("%s",&oper);
printf("Enter num: ");
scanf("%d",&n2);
printf("Enter den: ");
scanf("%d",&d2);
printf("*_Problem_*\n");
printf("%d / %d %c %d / %d\n",n1,d1,oper,n2,d2);
switch(oper)
{
case '+':
{nr=(n1*d2)+(n2*d1);
dr=d1*d2;
quo=nr/dr;
rem=(int)nr%(int)dr;}
break;
case '-':
{nr=(n1*d2)-(n2*d1);
dr=d1*d2;
quo=nr/dr;
rem=(int)nr%(int)dr;}
break;
default:printf("Invalid Operation Character\n");
return 0;
break;
}
//addition

printf("\n");
printf("*_Solution_*\n");
printf("%.0f / %d %c %d / %d=\n",n1,d1,oper,n2,d2);
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
printf("%d/%d\n",a,d);
printf("***Solved***\n");
return 0;
}
else
{
printf("%d %d/%d\n",quo,rem,dr);
printf("***Solved***\n");
return 0;
}
getch();
}*/
