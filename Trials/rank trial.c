#include<stdio.h>
int main()
{
int marks[5]={23,43,454,465,87,98};
int pos[5]={5,4,2,1,3};
int i;
printf("Rank\tMarks\n");
for(i=0;i<5;i++)
{
printf("%d\t%d\n",pos[i],marks[i]);
}
return 0;
}
