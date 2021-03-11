#include<stdio.h>

int main()
{
int row,k, n;
k=1;/*k controls increment of n*/
/*loop for printing rows*/
for(row=1;row<=5;row++)
{
/*loop for printing stars*/
for(n=1;n<=k;n++)
{
printf("*");
}
k+=2;
printf("\n");
}
return 0;
}
