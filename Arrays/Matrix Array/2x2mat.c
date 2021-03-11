#include<stdio.h>
int main()
{
int n,i,j,row[2][2];
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("Enter [%d][%d]:",i,j);
scanf("%d",&row[i][j]);
}
}
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d\t",row[i][j]);
}
printf("\n");
}
return 0;
}
