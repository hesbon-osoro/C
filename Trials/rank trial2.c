#include<stdio.h>
int main()
{
int pos[3],marks[3],i;
for(i=0;i<3;i++)
{
printf("Rank[%d]\n",i+1);
scanf("%d",&pos[i]);
printf("Marks:\n");
scanf("%d",&marks[i]);
}
printf("Rank\tMarks\n");
for(i=0;i<3;i++)
{
printf("%d\t%d\n",pos[i],marks[i]);
}
return 0;
}
