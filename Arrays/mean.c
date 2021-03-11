#include<stdio.h>
int main()
{
int x[10];
int i,n;
float sum, mean;
printf("Enter the no. of elements: \n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Element[%d]: ",i+1);
scanf("%d",&x[i]);
}
sum=0;
for(i=0;i<n;i++)
{
sum=sum+x[i];
}
mean=sum/n;
printf("\nMean: %f",mean);
getch();
return 0;
}
