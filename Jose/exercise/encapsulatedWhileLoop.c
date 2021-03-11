#include<stdio.h>
int main()
{
int n;
int i;
char input;
printf("Enter a number:");
scanf("%d",&n);
i=1;
while(i<=n)
{
if(i<=n)
{
 for(i=1;i<=n;i++)
{
printf("%d\n",i);
}
}
begin:
printf("Run again (y/n): ");
scanf(" %c",&input);
if(input=='y')
{
printf("Give a number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%d\n",i);
}
goto begin;
break;
}
else if(input=='n')
{
printf("Exiting...");
return 0;
}

if(input!='y'||input!='n'){
printf("Use y or n characters\n");
goto begin;
break;
}
}
return 0;
}
