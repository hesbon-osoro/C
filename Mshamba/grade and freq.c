#include<stdio.h>
#include<stdio.h>
int main()
{
int c, count;
char grade;
count =0;
c=1;
while(c<=5)
{
printf("Enter Grade: \n");
scanf("%c",&grade);
c++;
}
switch(grade)
{
case 'A': count=count+1;
printf("A freq=%d",count);
break;
case 'B': count=count+1;
printf("B freq=%d",count);
break;
case 'C': count=count+1;
printf("C freq=%d",count);
break;
case 'D': count=count+1;
printf("D freq=%d",count);
break;
case 'E': count=count+1;
printf("E freq=%d",count);
break;
default:printf("N/A\n");
break;
}
return 0;
}
