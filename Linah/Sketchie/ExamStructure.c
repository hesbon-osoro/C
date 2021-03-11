#include<stdio.h>
typedef struct Marks
{
  int marks;
}Exam;
int main()
{
  Exam result[10]={69,78,74,78,76,98,96,20};
  int i,n;
  printf("Enter number of Marks entries: ");
  scanf("%d",&n);
  /*for(i=0;i<n;i++)
  {
    printf("Enter marks[%d]: ",i+1);
    scanf("%d",&result[i].marks);
  }*/
  Display(result,n);
  Highest(result,n);
  Lowest(result,n);
  Mean(result,n);
  return 0;
}
void Highest(Exam result[],int n)
{
  int i,j,temp,high;
  //ascend sort
    printf("\nHighest Mark\n");
 for(i=n-1;i>=0;i--)
{
    for(j=1;j<=i;j++)
    {
    if(result[j-1].marks>result[j].marks)
    {
      /*if lower index value has less value,
      swap the values to higher index*/
      temp=result[j-1].marks;
      result[j-1].marks=result[j].marks;
      result[j].marks=temp;
      high=result[j].marks;
    }
  }
    printf("%d\t",high);
   switch(high/10)
 {
   case 9: printf("A\n");
   break;
   case 8: printf("B+\n");
   break;
   case 7: printf("B\n");
   break;
   case 6: printf("B-\n");
   break;
   case 5: printf("C+\n");
   break;
   case 4: printf("C\n");
   break;
   case 3: printf("C-\n");
   break;
   case 2: printf("D\n");
   break;
   case 1: printf("E\n");
   break;
   default:printf("N/A\n");
   break;
  }
  break;
  }
}
void Lowest(int marks[10],int n)
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
    switch(low/10)
 {
   case 9: printf("A\n");
   break;
   case 8: printf("B+\n");
   break;
   case 7: printf("B\n");
   break;
   case 6: printf("B-\n");
   break;
   case 5: printf("C+\n");
   break;
   case 4: printf("C\n");
   break;
   case 3: printf("C-\n");
   break;
   case 2: printf("D\n");
   break;
   case 1: printf("E\n");
   break;
   default:printf("N/A\n");
   break;
  }
    printf("\n");
    break;
  }
}
void Mean(int marks[10],int n)
{
  int i,mean,sum=0;
  float average;
  for(i=0;i<n;i++)
  {
    sum=sum+marks[i];
  }
  average=(float)sum/n;
  mean=average;
  printf("Mean Mark\n%.2f\t",average);
switch(mean/10)
 {
   case 9: printf("A\n");
   break;
   case 8: printf("B+\n");
   break;
   case 7: printf("B\n");
   break;
   case 6: printf("B-\n");
   break;
   case 5: printf("C+\n");
   break;
   case 4: printf("C\n");
   break;
   case 3: printf("C-\n");
   break;
   case 2: printf("D\n");
   break;
   case 1: printf("E\n");
   break;
   default:printf("N/A\n");
   break;
  }
}
void Display(Exam result[],int n)
{
  int i;
  printf("Marks\tGrade\n");
  for(i=0;i<n;i++)
  {
    printf("%d\t",result[i].marks);
    switch(result[i].marks/10)
 {
   case 9: printf("A\n");
   break;
   case 8: printf("B+\n");
   break;
   case 7: printf("B\n");
   break;
   case 6: printf("B-\n");
   break;
   case 5: printf("C+\n");
   break;
   case 4: printf("C\n");
   break;
   case 3: printf("C-\n");
   break;
   case 2: printf("D\n");
   break;
   case 1: printf("E\n");
   break;
   default:printf("N/A\n");
   break;
  }
  }
}

