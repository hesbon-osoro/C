#include<stdio.h>
int main()
{
int i,j,row[2][2]={3,2,5,9};
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
