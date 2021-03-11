#include<stdio.h>
#include<string.h>
int main()
{
int i,j;
char *sname[100];
for(i=0;i<3;i++)
{
printf("Enter name[%d]: ",i+1);
scanf("%s",&sname[i]);
}
for(i=0;i<3;i++)
{
printf("%s",sname[i]);
}
printf("\n");
return 0;
}
