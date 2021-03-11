#include<stdio.h>
int main()
{
int i,j,a[3][3],b[3][3],c[3][3];
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
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
printf("\nThe Sum of the 3x3 Matrix is:\n");
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
