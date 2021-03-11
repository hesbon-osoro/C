#include<stdio.h>
#define tokenpaster(n) printf ("token" #n " = %d", token##n)
int main(void)
{
   int token34 = 40;

   tokenpaster(34);
   return 0;
}
/*It happened so because this example
 results in the following actual
 output from the preprocessor:
printf ("token34 = %d", token34); */


/*This example shows the concatenation
of token##n into token34 and here we have
used both stringize and token-pasting.*/
