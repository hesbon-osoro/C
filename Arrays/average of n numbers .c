#include<stdio.h>
int main()
{
int marks[10],n,sum,i,j;
float count,average;
sum=0;
count=0;
printf("Enter the value of n\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the number %d: ",i+1);
scanf("%d",&marks[i]);
}
for(j=0;j<n;j++)
{
sum=sum+marks[j];
count++;
}
average=sum/count;
printf("Sum = %d\n",sum);
printf("Average =%.2f\n",average);
return 0;
}
