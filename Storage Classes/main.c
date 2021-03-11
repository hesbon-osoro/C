#include<stdio.h>
extern int count=5;
extern void write_extern();
int main()
{
write_extern();
return 0;
}
extern void write_extern()
{
    //extern int count;
    printf("Count= %d",count);
}
