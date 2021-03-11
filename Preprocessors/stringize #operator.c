#include <stdio.h>
#define  message_for(a, b) \
    printf(#a " and " #b ": We love you!\n")
int main(void)
{
   message_for(Carole, Debra);
   return 0;
}

/*The macro continuation operator (\)
 is used to continue a macro that is
 too long for a single line*/
