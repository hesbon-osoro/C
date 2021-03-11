#include<stdio.h>
int const J=4;
int main()
{
char *names[]={"Jane","Naomi","Lucy","HB"};
int i;
int *ptr;/*i don't understand why an
integer pointer points
to a character type...!!*/
//ascending
printf("***Names***\n");
for(i=0;i<J;i++)
{
printf("%d %s\n",i+1,names[i]);
}
//descending
printf("***Names***\n");
ptr=&names[J-1];
for(i=J;i>0;i--)
{
printf("%d: %s\n",i,*ptr);
ptr--;
}
return 0;
}
