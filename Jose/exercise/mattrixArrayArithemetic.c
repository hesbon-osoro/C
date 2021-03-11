#include<stdio.h>
int mat1[3][3],mat2[3][3],matSum[3][3];
int matSub[3][3];
void matrixSum(int mat1[3][3],int mat2[3][3]);
void matrixSub(int mat1[3][3],int mat2[3][3]);
int main()
{
int i,j;
//first matrix
printf("The First Matrix\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("Enter value[%d][%d]: ",i,j);
scanf("%d",&mat1[i][j]);
}
}
//second matrix
printf("\nThe Second Matrix\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("Enter value[%d][%d]: ",i,j);
scanf("%d",&mat2[i][j]);
}
}
matrixSum(mat1,mat2);
matrixSub(mat1,mat2);
getch();
return 0;
}
void matrixSum(int mat1[3][3],int mat2[3][3])
{
int i,j;

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
matSum[i][j]=mat1[i][j]+mat2[i][j];
}
}
printf("\nThe Sum of the 3x3 Matrix is:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",matSum[i][j]);
}
printf("\n");
}
}
void matrixSub(int mat1[3][3],int mat2[3][3])
{
int i,j;

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
matSub[i][j]=mat1[i][j]-mat2[i][j];
}
}
printf("\nThe Difference of the 3x3 Matrix is:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",matSub[i][j]);
}
printf("\n");
}
}
