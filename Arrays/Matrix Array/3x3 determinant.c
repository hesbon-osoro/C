#include<stdio.h>
void main()
{
int n,i,j,det,arr[3][3];
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("Enter [%d][%d]:",i,j);
scanf("%d",&arr[i][j]);
}
}
//printing the elements
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",arr[i][j]);
}
printf("\n");
}
//determinant expression
printf("************************\n");
det=arr[0][0]*((arr[1][1]*arr[2][2])-(arr[1][2]*arr[2][1]))\
-arr[0][1]*((arr[1][0]*arr[2][2])-(arr[1][2]*arr[2][0]))\
+arr[0][2]*((arr[1][0]*arr[2][1])-(arr[1][1]*arr[2][0]));
//the property employed is a(e.i-f.h)-b(d.i-f.g)+c(d.h-e.g)
printf("The determinant is: %d",det);
getch();
}
