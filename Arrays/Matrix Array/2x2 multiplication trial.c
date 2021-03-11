#include<stdio.h>
int main()
{
int n,i,j,a[2][2],b[2][2],c[2][2];
int f[2][2],g[2][2],h[2][2],k[2][2];
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
//product of the matrices

f[0][0]=a[0][0]*b[0][0]+a[0][1]*b[1][0];
g[1][0]=a[0][0]*b[0][1]+a[0][1]*b[1][1];
h[0][1]=a[1][0]*b[0][0]+a[1][1]*b[1][0];
k[1][1]=a[1][0]*b[0][1]+a[1][1]*b[1][1];

printf("\nThe Product is:\n");
printf("%d\t%d\n%d\t%d",f[0][0],g[1][0],h[0][1],k[1][1]);

getch();
return 0;
}
