#include<stdio.h>
int main()
{
char greeting[6]={'H','e','l','l','o','\0'};
printf("Greeting message: %s\n",greeting);
int i;
printf("\nGreeting message:\n");
for(i=0;i<6;i++)
{
printf("%c",greeting[i]);
}
return 0;
}
