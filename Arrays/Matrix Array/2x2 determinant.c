#include<stdio.h>
void main()
{
int n,i,j,det,arr[2][2];
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("Enter [%d][%d]:",i,j);
scanf("%d",&arr[i][j]);
}
}
//printing the elements
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d\t",arr[i][j]);
}
printf("\n");
}
//determinant function
printf("************************\n");
det=(arr[0][0]*arr[1][1])-(arr[0][1]*arr[1][0]);
printf("The determinant is: %d",det);
getch();
}
