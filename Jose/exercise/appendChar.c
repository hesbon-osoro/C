#include<stdio.h>
/*char x[12]={'H','e','l','l','o',' ',0,1,2,3,4,5};
char *y="world";*/
void append(char* str1, char* str2)
{
printf("Result of append: %s%s",str1,str2);
}
int main()
{
char *x[10];
char *y[10];
printf("Enter first word: ");
scanf("%s",&x);
printf("Enter second word: ");
scanf("%s",&y);
append(x,y);

return 0;
}
