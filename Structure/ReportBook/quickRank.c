#include<stdio.h>
#define SIZE 10
int main()
{
int arr[10]={45,1,84,25,98,74,56,65,56,1};
int i,j,temp,rank,sum=0,rcount=0;
int rankA[SIZE];

printf("Original Elements\n");
printf("*** --- --- ***\n");
printf("No.\tElement\n");
for(i=0;i<SIZE;i++)
{
printf("%d]\t%d\n",i+1,arr[i]);
}
printf("\n");
printf("Sorted Elements\n");
printf("*** --- --- ***\n");
printf("No.\tArr\n");
for(i=SIZE-1;i>=0;i--)
{
    for(j=0;j<i;j++)
  {
 if(arr[j]<arr[j+1])
 {
     temp=arr[j];
     arr[j]=arr[j+1];
     arr[j+1]=temp;

    }
 }
 printf("%d]\t%d\n",i+1,arr[i]);
}


printf("\n");
printf("Ranked Elements\n");
printf("*** --- --- ***\n");
printf("No.\tArr\tRank\n");

for(i=SIZE-1;i>=0;i--)
{
  rank=1;rcount=1;sum=1;
    for(j=0;j<i;j++){
    if(j!=i&&arr[j]>arr[j+1]){
     rcount++;
     rank++;
     }
   if(j!=i&&arr[j]==arr[j+1])
     {
    sum++;
    rcount++;
    }
 }
 rankA[i]=rank+(sum-1)/rcount;
}
for(i=0;i<SIZE;i++){
printf("%d]\t%d\t%d\n",i+1,arr[i],rankA[i]);
}
printf("\n");
return 0;
}
