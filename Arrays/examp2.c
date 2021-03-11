#include<stdio.h>
int main()
{
int n[4];
int i,j;
printf("Enter the Array elements\n");
for(i=0;i<=4;i++)
{
scanf("%d",&n[i]);
}
for(j=0;j<=4;j++)
{
printf("%d\t",n[j]);
}
return 0;
}
