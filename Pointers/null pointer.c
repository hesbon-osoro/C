#include<stdio.h>
int main()
{
int *ptr=NULL;
printf("The value of ptr is : %x\n",ptr);
return 0;
}
/*To check for a null pointer, you can use an ‘if’
statement as follows:*/
//if(ptr)     /* succeeds if p is not null */
//if(!ptr)    /* succeeds if p is null */
