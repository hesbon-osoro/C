#include<stdio.h>
extern int count;
void write_extern(void)
{
printf("Count is %d\n",count);
}
void main()
{
    write_extern();
}
int count=20;
