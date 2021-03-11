#include<stdio.h>
#include<string.h>
void main()
{
char string1[]="spark";
char string2[]="SPArk";
int cmp;
cmp=strcmpi(string1,string2);
/*This function is similar to strcmp().
The onlyy difference is that
it ignores the case.example
SparK and spark both are same.*/
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
}
