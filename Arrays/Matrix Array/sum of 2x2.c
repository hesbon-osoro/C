#include<stdio.h>
int main()
{
int n,i,j,a[2][2],b[2][2],c[2][2];
//first matrix
printf("First Matrix\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("Enter [%d][%d]:",i,j);
scanf("%d",&a[i][j]);
}
}
//second matrix
printf("\nSecond Matrix\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("Enter [%d][%d]:",i,j);
scanf("%d",&b[i][j]);
}
}
//sum of the matrices
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
printf("\nThe sum is:\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
getch();
return 0;
}
