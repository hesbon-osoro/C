//simple C program to encrypt and decrypt a string
#include<stdio.h>
int main()
{
int i,x;
char str[100];
printf("Please enter a string:");
gets(str);
printf("Please choose an option: \n");
printf("1. Encryption\n");
printf("2. Decryption\n");
scanf("%d",&x);
//using switch case statements
switch(x)
{
case 1:
for(i=0;(i<100&&str[i]!='\0');i++)

str[i]=str[i]+3;/*the key encryption is 3
that is added to ASCII value*/

printf("Encrypted string: %s\n",str);
break;
case 2:
for(i=0;(i<100&&str[i]!='\0');i++)

str[i]=str[i]-3;/*the key encryption is 3
that is subtracted for ASCII value*/
printf("Decrypted string: %s\n",str);
break;
default:printf("Error\n");
}
return 0;
}
