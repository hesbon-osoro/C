#include<stdio.h>
int main()
{
int numbers[4];
int i,j;
printf("Enter the array elements\n");
for(i=0;i<=4;i++)
{
scanf("%d",&numbers[i]);
}
for(j=0;j<=4;j++)
{
printf("%d\n",numbers[j]);
}
return 0;
}
