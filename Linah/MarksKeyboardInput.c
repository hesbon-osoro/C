#include<stdio.h>
int main()
{
system("color cb");
system("mode 100");
int marks[100];
int i,n,cluster;
printf("Enter the number of marks input: ");
scanf("%d",&n);
while(n<2)
{
  printf("Use positive numbers greater than 1\n");
  printf("\nEnter the number of marks input: ");
  scanf("%d",&n);
}
//keyboard input for marks
printf("Input Marks\n");
for(i=0;i<n;i++){
printf("Marks[%d]: ",i+1);
scanf("%d",&marks[i]);
}
printf("\nMarks\tGrade\n");
for(i=0;i<n;i++){
cluster=marks[i]/10;
printf("%d\t",marks[i]);
Grade(cluster);
printf("\n");
}

Highest(marks,n);
Lowest(marks,n);
Mean(marks,n);
Distribution(marks,n);

return 0;
}
void Grade(int Cluster)
{
  switch(Cluster)
  {
   case 9: printf("A\t");
   break;
   case 8: printf("B+\t");
   break;
   case 7: printf("B\t");
   break;
   case 6: printf("B-\t");
   break;
   case 5: printf("C+\t");
   break;
   case 4: printf("C\t");
   break;
   case 3: printf("C-\t");
   break;
   case 2: printf("D+\t");
   break;
   case 1: printf("D-\t");
   break;
   case 0: printf("E\t");
   break;
   default:printf("N/A\t");
   break;
  }
}
void Lowest(int marks[100],int n)
{
  int i,j,temp,low;
  //ascend sort
  printf("\nLowest Mark\n");
 for(i=n-1;i>=0;i--)
{
    for(j=1;j<=i;j++)
    {
    if(marks[j-1]<marks[j])
    {
      /*if lower index value has less value,
      swap the values to higher index*/
      temp=marks[j-1];
      marks[j-1]=marks[j];
      marks[j]=temp;
      low=marks[j];
    }
  }
printf("%d\t",low);
Grade(low/10);
printf("\n");
break;
}
}
void Highest(int marks[100],int n)
{
  int i,j,temp,high;
  //ascend sort
    printf("\nHighest Mark\n");
 for(i=n-1;i>=0;i--)
{
    for(j=1;j<=i;j++)
    {
    if(marks[j-1]>marks[j])
    {
      /*if lower index value has less value,
      swap the values to higher index*/
      temp=marks[j-1];
      marks[j-1]=marks[j];
      marks[j]=temp;
    }
    high=marks[j];
  }
printf("%d\t",high);
Grade(high/10);
printf("\n");
break;
}
}
void Mean(int marks[100],int n)
{
  int i,mean,sum=0;
  float average;
  for(i=0;i<n;i++)
  {
    sum=sum+marks[i];
  }
  average=(float)sum/n;
  mean=average;
  printf("\nMean Mark\n%.2f\t",average);
  Grade(mean/10);
  printf("\n");
}
void Distribution(int marks[100],int n)
{
  int cluster[100];
  int i,j,temp,count;
printf("\nGrade Distribution\n");
printf("Grade\tCount\n");
  for(i=0;i<n;i++)
  {
    cluster[i]=marks[i]/10;
  }
  printf("\n");
for(i=n-1;i>=0;i--)//start at last element
{
    for(j=1;j<=i;j++)
    {
        if(cluster[j-1]<cluster[j])
        {
            temp=cluster[j-1];
            cluster[j-1]=cluster[j];
            cluster[j]=temp;
        }
     }
}
count=1;
  for(i=0;i<n;i++)
  {
    for(j=0;j<i;j++)
    {
    if(cluster[j+1]==cluster[j]){
      count++;
      }else{
    count=1;
    }
  }
  while(cluster[i]==cluster[i+1]){
      i++;
      count++;
  }
  Grade(cluster[i]);
  printf("%d\n",count);
  }
}
