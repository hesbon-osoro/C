#include <stdio.h>
int main()
{
int i,j,abc[5][4] ={
            {0,1,2,3},
            {4,5,6,7},
            {8,9,10,11},
            {12,13,14,15},
            {16,17,18,19}
            };
for (i=0;i<=4; i++)
{
for(j=0;j<4;j++)
{
printf("%d\t",abc[i][j]);
}
printf("\n");
}
return 0;
}
