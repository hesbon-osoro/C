#include<stdio.h>
int main()
{
int index,i,sum,marks[3];
float count,average;
sum=0;
index=1;
count=0;
for(i=0;i<3;i++)
{
printf("Marks[%d]: ",i+1);
scanf("%d",&marks[i]);
}
printf("*************\n***Data***\nIndex\tMarks\n");
for(i=0;i<3;i++)
{
printf("%d\t%d\n",index++,marks[i]);
sum=sum+marks[i];
count++;
}
average=sum/count;
printf("***********\n");
printf("Mean: %.2f",average);
getch();
return 0;
}
