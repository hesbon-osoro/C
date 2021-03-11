#include<stdio.h>
int main()
{
int i,j,k,sum,a[3][3],b[3][3],c[3][3];
sum=0;
//first matrix
printf("The First Matrix\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("Enter value[%d][%d]: ",i,j);
scanf("%d",&a[i][j]);
}
}
//second matrix
printf("\nThe Second Matrix\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("Enter value[%d][%d]: ",i,j);
scanf("%d",&b[i][j]);
}
}
//calculating the product
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
for(k=0;k<3;k++)
{
sum=sum+a[i][k]*b[k][j];
}
c[i][j]=sum;
sum=0;
}
}
printf("\nThe Product of the 3x3 Matrix is:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
getch();
return 0;
}
