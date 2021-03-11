#include<stdio.h>
int main()
{
int arry[3][4];
int i,j,k;
printf("This is a 3x4 array\n");
printf("Enter the array elements\n");
for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
{
printf("[%d][%d]:",i,j);
scanf("%d",&arry[i][j]);
}
}
for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
{
printf("%d  ",arry[i][j]);
}
}
return 0;
}
