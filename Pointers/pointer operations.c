#include<stdio.h>
int main()
{
int var=20;//actual variable declaration
int *ip;//pointer variable declaration
ip=&var;//store address of var in pointer variable

printf("Address of var variable: %x\n",&var);
//address stored in pointer variable
printf("Address stored in ip variable: %x\n",ip);
printf("Address of ip variable: %x\n",&ip);//rem variables use diff mem locations
//access the value using the pointer
printf("Value of *ip variable: %d\n",*ip);
return 0;
}
