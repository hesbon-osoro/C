#include<stdio.h>
int main()
{
int roll_no[7]={1,2,3,4,5,6,7};
int marks[7]={20,40,50,60,70,60,80};
int i;
char *name[]={"Iris","Mary","Saidimu","Nashipae","Virus","Grace","Lucy"};
printf("Roll_number\tName\t\tMarks\n");
for(i=0;i<7;i++)
{
printf("\t%d\t%s\t%d\n",roll_no[i],*(name+i),marks[i]);
}
return 0;
}
