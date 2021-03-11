#include<stdio.h>
int main()
{
int count=10;
int *ptr=&count;
printf("Value of count variable is: %d\n",count);
printf("Address of count variable is: %X\n",ptr);
//noticed that 'x' and 'X' gives different outputs,..
printf("Value retrieved through pointer: %d\n",*ptr);
/*dereferencing the value of count*/
*ptr=5;
printf("The new value of count= %d\n",count);
printf("The new value of ptr= %d\n",*ptr);
return 0;
}
