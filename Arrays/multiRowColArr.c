/*------------------- program 6.1 ----------------------*/
/* Program 6.1 from PTRTUT10.HTM   6/13/97*/
#include <stdio.h>
#define ROWS 5
#define COLS 10
int multi[ROWS][COLS];
int main(void)
{
int row, col;
for (row = 0; row < ROWS; row++)
{
for (col = 0; col < COLS; col++)
{
multi[row][col] = row*col;
}
}
for (row = 0; row < ROWS; row++)
{
for (col = 0; col < COLS; col++)
{
printf("\nmulti[%d][%d]: %d  ",row,col,multi[row][col]);
printf("%d ",*(*(multi + row) + col));
}
}
return 0;
}
/*----------------- end of program 6.1 ---------------------*/
