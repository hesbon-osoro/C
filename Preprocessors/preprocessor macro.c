#include <stdio.h>
main()
{
   printf("File :%s\n", __FILE__ );
   printf("Date :%s\n", __DATE__ );
   printf("Time :%s\n", __TIME__ );
   printf("Line :%d\n", __LINE__ );
   printf("ANSI :%d\n", __STDC__ );
   /*__STDC__  Defined as 1 when the compiler
   complies with the ANSI standard.*/
}
