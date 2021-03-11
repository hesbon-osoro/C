#include<stdio.h>
int main()
{
int *ptr=1000;
char *ch=1000;
ch++;/*location 1001 because the next character
 will be available at 1001.*/
ptr++;/*it will point to the next integer location
which is 4 bytes*/
printf("increments %c\t%d",ch,ptr);
//character increments deals with ASCII then prints the merging character...
return 0;
}
