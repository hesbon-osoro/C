#include<stdio.h>
int main()
{
int marks[10],n,sum=0,i;
float average;
printf("Enter the value of n:\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nEnter the number %d:",i++);
}
scanf("%d",&marks[i]);
sum+=marks[i];
average=sum/n;
printf("Sum =%d",sum);
printf("Average =%.2f",average);
return 0;
}
