#include<stdio.h>
#include<string.h>
int main()
{
int i=NULL;
char *name[100];
int *ptr_name=&name[i];
for(i=0;i<3;i++)
{
printf("Enter name[%d]: ",i+1);
scanf("%s",&name[i]);
}

for(i=0;i<3;i++)
{
printf("%d %s\n",i+1,ptr_name);
}
return 0;
}
