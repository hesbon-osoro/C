#include<stdio.h>
int main()
{
int i,j,k=0;
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%c\t",'a'+k);
k++;
}
printf("\n");
}
return 0;
}
