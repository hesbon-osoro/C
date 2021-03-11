#include<stdio.h>
int main()
{
int arr[]={1,3,5,4,7,1,2,5};
int i,j,var;
printf("The elements are\n");
printf("--- --- --- --- --- ---\n");
for(i=0;i<8;i++)
{
printf("%d  ",arr[i]);
}
//Ascend Sort goes here

printf("\nSorted array: Ascend\n");
printf("--- --- --- --- --- ---\n");
for(j=0;j<8;j++)
{
for(i=8-1;i>=j;i--)
{
 if(arr[i]>arr[i+1])
 {
 var=arr[i];
 arr[i]=arr[i+1];
 arr[i+1]=var;
 }
}
printf("%d  ",arr[j]);
}
printf("\n");
//descend sort goes here
printf("\nSorted array: Descend\n");
printf("--- --- --- --- --- ---\n");
for(j=8-1;j>=0;j--)
{
for(i=0;i<=j;i++)
{
 if(arr[i]>arr[i+1])
 {
 var=arr[i];
 arr[i]=arr[i+1];
 arr[i+1]=var;
 }
}
printf("%d  ",arr[j]);
}
printf("\n");
return 0;
}
