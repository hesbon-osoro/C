#include<stdio.h>
#include<string.h>
int main()
{
int i;
char ch;
printf("Enter a character\n");
scanf("%c",&ch);
switch(ch)
{
case 'a': printf("True\n");
break;
default: printf("False\n");
}
return 0;
}
