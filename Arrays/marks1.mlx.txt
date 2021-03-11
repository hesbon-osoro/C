#include<stdio.h>
int main()
{
int roll_no[7]={1,2,3,4,5,6,7};
int marks[7]={20,40,50,60,70,60,80};
int i;
/*printing array elements*/
printf("Roll_number\tMarks\n");
for(i=0;i<7;i++)
{
printf("\t%d\t%d\n",roll_no[i],marks[i]);
}
return 0;
}
