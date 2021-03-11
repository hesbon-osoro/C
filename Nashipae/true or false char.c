#include<stdio.h>
#include<string.h>
int main()
{
int i;
char ch;
printf("Enter a character\n");
scanf("%c",&ch);
for(i='a';i<='z';++i)
{
if(ch==i)
{
printf("True\n");
break;
}
else
{
printf("False\n");
break;
}
}
return 0;
}
