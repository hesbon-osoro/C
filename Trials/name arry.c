#include<stdio.h>
int main()
{
char name[10];
int marks[5]={20,80,90,48,50};
int row[5]={1,2,3,4,5,6};
int i;
for(i=0;i<5;i++)
{
printf("Enter a name[%d]: \n",i+1);
gets(name);
}
for(i=0;i<5;i++)
{
printf("%d",row[i]);

printf("\t");
puts(name);
}
for(i=0;i<5;i++)
{
printf("\t%d\n",marks[i]);
}
return 0;
}
