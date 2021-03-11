#include<stdio.h>
float avg(float average,int arr[], int sum);
int main()
{
int bal[3]={200,100,500};
float average;
int sum;
average=avg(average,bal[3],sum);
printf("Average = %.4f",average);
return 0;
}
float avg(float average,int arr[], int sum)
{
int i;

sum=0;
for(i=0;i<3;i++)
{
sum+=arr[i];
}
average=sum/i;
return average;
}
