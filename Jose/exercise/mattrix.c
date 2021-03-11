#include<stdio.h>
int mat1[3][3],mat2[3][3],matSum[3][3];
void matsum(int mat1[3][3],int mat2[3][3]);
int main()
{
int i,j;
matsum(mat1,mat2);

getch();
return 0;
}
void matsum(int mat1[3][3],int mat2[3][3])
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
