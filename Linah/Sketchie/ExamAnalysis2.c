
#include<stdio.h>

int main()
{
  int marks[10]={69,78,74,78,76,98,96,20};
  int i,n;
  printf("Enter number of Marks entries: ");
  scanf("%d",&n);
  /*for(i=0;i<n;i++)
  {
    printf("Enter marks[%d]: ",i+1);
    scanf("%d",&marks[i]);
  }*/
  printf("Marks\tGrade\n");
  for(i=0;i<n;i++)
  {
    printf("%d\t",marks[i]);
      Grade(&marks[i],n);
  }
  Highest(marks,n);
  Lowest(marks,n);
  Mean(marks,n);
  return 0;
}
void Grade(int *marks,int n)
{
  int i,average,sum=0;
  float aver;
  for(i=0;i<n;i++)
  {
    sum=sum+marks[i];
  }
  aver=(float)sum/n;
  average=aver;
  if(average>=90&&average<=100){
     printf("A\n");
  }
  if(average>=80&&average<90){
    printf("B+\n");
  }
  if(average>=70&&average<80){
     printf("B\n");
  }
  if(average>=60&&average<70){
    printf("B-\n");
  }
  if(average>=50&&average<60){
    printf("C+\n");
  }
  if(average>=40&&average<50){
     printf("C\n");
  }
  if(average>=30&&average<40){
     printf("C-\n");
  }
  if(average>=20&&average<30){
     printf("D\n");
  }
  if(average>=10&&average<20){
     printf("E\n");
  }else{
  printf("N/A\n");
  }
}
void Highest(int marks[10],int n)
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
      high=marks[j];
    }
  }
    printf("%d\t",high);
    Grade(&high,n);
    printf("\n");
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
    Grade(&low,n);
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
  Grade(&mean,n);

}
