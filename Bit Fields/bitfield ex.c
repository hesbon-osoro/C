#include<stdio.h>
#include<string.h>
//define simple structure
struct
{
unsigned int widthValidated;
unsigned int heightValidated;
}status1;
//define structure with bit fields
struct
{
unsigned int widthValidated:1;//1 bit means it accepts 1 and 0 only
unsigned int heightValidated:1;//coz 0 and 1 are the only decimal numbers having 1bit in binary form
}status2;
void main()
{

printf("Memory size occupied by status1: %d\n",sizeof(status1));
printf("Memory size occupied by status2: %d\n",sizeof(status2));
}
