#include<stdio.h>
void main()
{
int i,j;
int n1,n2,nr;
int d1,d2,dr;
int rem,quo;
char oper='+';
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
int i;
for(i=2;i<=nr;i++)
{
 if((nr%i==0) & (dr%i==0))
{
nr=nr/i;
dr=dr/i;
}
}
printf("%d/%d\n",nr,dr );
}
else if(quo!=0)
{
printf("%d %d/%d\n",quo,rem,dr);
printf("***Solved***\n");
return 0;
}
}
