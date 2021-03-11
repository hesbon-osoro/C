#include<stdio.h>
int main()
{
char ch;
printf("Enter a Character\n");
scanf("%c",&ch);
if(ch>='a'&&ch<='z')
{
printf("The Character is in Lowercase\n");
}
else if(ch>='A'&&ch<='Z')
{
printf("The Character is in Uppercase\n");
}
else
{
    printf("Use a Character!\n");
}

return 0;
}
