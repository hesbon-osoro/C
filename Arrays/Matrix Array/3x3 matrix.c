#include<stdio.h>
int main()
{
int i,j,a[3][3];
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("Enter value[%d][%d]: ",i,j);
scanf("%d",&a[i][j]);
}
}
printf("\nThe 3x3 Matrix is:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
getch();
return 0;
}
