#include<stdio.h>
#include<string.h>
void main()
{
char string1[]="spark";
char string2[]="programming";
int cmp;
cmp=strcmp(string1,string2);
//my view is that it compares string2 to string1
//therefore the result must be reversed...
if(cmp>0)
{
printf("%d: %s > %s",cmp,string1,string2);
}
else
{
if(cmp<0)
{
printf("%d: %s < %s",cmp,string1,string2);
}
else
{
printf("%d: %s = %s",cmp,string1,string2);
}
}
//Output:1: spark > programming.

/*this is because alphabetically p comes
first then s.so the string compare function
returns difference between
ascii of s and p which would be +ve.*/
}
