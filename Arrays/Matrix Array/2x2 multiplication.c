#include<stdio.h>
int main()
{
int n,i,j,sum,k,a[2][2],b[2][2],c[2][2];
sum=0;
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
//calculating the product
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
for(k=0;k<2;k++)
{
sum=sum+a[i][k]*b[k][j];
}
c[i][j]=sum;
sum=0;
}
}
//displaying matrix 1
printf("Matrix 1\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("**\n");
//displaying matrix 2
printf("Matrix 2\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
//displaying product of the two matrices
//product of the matrices
printf("\nThe Product is:\n");
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
