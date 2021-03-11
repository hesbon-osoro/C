#include<stdio.h>
double average( int arr[], int size);
int main()
{
int i,arr,size;
double sum, average;
average=average(arr[],size);
printf("Sum=%f",sum);
printf("Average=%f",average);
return 0;
}
double average( int arr[], int size)
{
int i;
double sum, average;
for(i=0;i<size;i++)
{
sum+=arr[i];
}
average=sum/size;
return average;
}
