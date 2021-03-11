#include<stdio.h>
int main()
{
int index[3],marks[3],i;
char sname[3];
for(i=0;i<3;i++)
{
printf("Enter the name[%d]: ",i+1);
scanf("%s",&sname[i]);
}
for(i=0;sname[i]!='\0';i++)
{
printf("%c",sname[i]);
}
return 0;
}
