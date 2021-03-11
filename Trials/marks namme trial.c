#include<stdio.h>
int main()
{
int marks[3];
int pos[3],i;
char sname[30];
for(i=0;i<3;i++)
{
printf("Enter Rank[%d]:",i+1);
scanf("%d",&pos[i]);
printf("Enter Student name[%d]:",i+1);
scanf("%s",&sname[i]);
printf("Enter marks[%d]:",i+1);
scanf("%d",&marks[i]);
}
printf("\nRank\tName\tMarks\n");
for(i=0;i<3;i++)
{
printf("%c\n",sname[i]);
}
return 0;
}
