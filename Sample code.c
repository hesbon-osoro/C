#include <stdio.h>
float Average (void);
main ()
{
printf ("The average is: %f", Average() );
}
float Average (void)
{
int NumbersRead = 0;
int Number;
int Total = 0;
while (scanf("%d\n", &Number) == 1)
{
Total = Total + Number;
NumbersRead = NumbersRead + 1;
}
return (Total / NumbersRead);
}

