#include<stdio.h>
int main(int argc, char *argv[])
{
printf("Enter a Command Line Argument\n");
scanf("%d",&argc);
if(argc==2)
{
printf("The argument supplied is %s\n",argv[1]);
}
else if(argc>2)
{
printf("Too many arguments supplied.\n");
}
else
{
printf("One argument expected.\n");
}
printf("Below is the name of the program itself...\n");
printf("%s\n",argv[0]);
return 0;
}
