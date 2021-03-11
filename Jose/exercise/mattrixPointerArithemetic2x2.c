#include<stdio.h>
int mat1[2][2],mat2[2][2],matSum[2][2];
int matSub[2][2],matMul[2][2];
float matDiv[2][2];
void matrixSum(int mat1[2][2],int mat2[2][2]);
void matrixSub(int mat1[2][2],int mat2[2][2]);
void matrixMul(int mat1[2][2],int mat2[2][2]);
void matrixDiv(int mat1[2][2],int mat2[2][2]);
int main()
{
int i,j;
int *matX[2][2],*matY[2][2];
//first matrix
printf("The First Matrix\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("Enter value[%d][%d]: ",i,j);
scanf("%d",&matX[i][j]);
}
}
//second matrix
printf("\nThe Second Matrix\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("Enter value[%d][%d]: ",i,j);
scanf("%d",&matY[i][j]);
}
}
matrixSum(matX,matY);
matrixSub(matX,matY);
matrixMul(matX,matY);
matrixDiv(matX,matY);
getch();
return 0;
}
void matrixSum(int mat1[2][2],int mat2[2][2])
{
int i,j;

for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
matSum[i][j]=mat1[i][j]+mat2[i][j];
}
}
printf("\nThe Matrix Sum is:\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d\t",matSum[i][j]);
}
printf("\n");
}
}
void matrixSub(int mat1[2][2],int mat2[2][2])
{
int i,j;

for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
matSub[i][j]=mat1[i][j]-mat2[i][j];
}
}
printf("\nThe Matrix Difference is:\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d\t",matSub[i][j]);
}
printf("\n");
}
}
void matrixMul(int mat1[2][2],int mat2[2][2])
{
int i,j,k;
int sum=0;
//calculating the product
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
for(k=0;k<2;k++)
{
sum=sum+mat1[i][k]*mat2[k][j];
}
matMul[i][j]=sum;
sum=0;
}
}
printf("\nThe Matrix Product is:\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d\t",matMul[i][j]);
}
printf("\n");
}
}
void matrixDiv(int mat1[2][2],int mat2[2][2])
{
int i,j;

for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
matDiv[i][j]=(float)(mat1[i][j]/mat2[i][j]);
}
}
printf("\nThe Matrix Division is:\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%.4f\t",matDiv[i][j]);
}
printf("\n");
}
}
