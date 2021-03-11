#include<stdio.h>
int main()
{
int i;
char name[100];
printf("Enter the Name String\n");
gets(name);
for(i=0;name[i]!='\0';i++)
{
printf("%c",name[i]);

}
return 0;
}
