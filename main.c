/*
 * main.c
 *
 *  Created on: Nov 13, 2018
 *      Author: Wizard
 */
#include <stdio.h>                                                     /*For std printf() and scanf() and setvbuf() functions */
#include "conio.h"                                                     /*N/B; THIS HEADER FILE IS NOT AVAILABLE IN SOME COMPILERS, THAT'S WHY IT IS IN QUOTES AND INCLUDED HEREIN */     /*  For {terminal_lnbuf() and terminal_echo() } */

int main( )
{
    char user[ 100 ] = "Raiden Tommylee";                              /* Legal user's name*/       /* Add your full name here. N/B: The program only checks the first 6 letters of the name, If you change this, make sure the numbers { 5 } below in the code are also changed to 1 less than your surname.*/

    char name[ 20 ] = "name";                                          /* Variable array to store input username */

    terminal_lnbuf( 0 );                                               /* No need to press Enter everytime. */

    terminal_echo( 0 );                                                /* Hide the username as it is typed */

    setvbuf( stdout, NULL, _IONBF, 0);                                 /* Set {stdout} to unbuffered */



    printf("Enter Username to Continue: ");


    for( int i = 0; i <= 5 ; i++ )
    {
        scanf(" %c", &name[ i ]);
        printf(" * ");                                                  /* Some feedback for the hidden password */

    }


    for( int i = 0; i <= 5 ; i++ )
    {
        if( user[i] != name[i] )                                        /* Confirm if the Legal username is not same as the one entered */
        {
            printf("\n\n\tSorry! That did not work! Access Dennied! Goodbye!\n\n\n");          /* Wrong username Entered */
            return 0;                                                                          /* Terminate the program at this point, the username entered was fake */
        }
    }


    printf("\n\n\n\t Access Granted!\n\n\n");                           /* It means our condition was true( correct username given ) */

    sleep( 4 );                                                         /* Make the CPU wait for 4 seconds before execution continues */

    printf("\n\t Welcome Mr %s!\n" , user );                            /* Welcome the Legal user */

    sleep( 4 );

    printf("\nThe program ends in 10 seconds: \n");


    for( int i = 0; i <= 10 ; i++ )
    {
      printf("%d  ", i );                                               /* Print the current second being elapsed */
      sleep( 1 );                                                       /* Wait 1 second before we continue to output the next second to be elapsed */
      printf("\r\r\r   \r\r\r");                                        /* Go back to the start of line, print spaces to rub the current elapsed seconds to give space for the next second to be elapsed to be printed: Then go back to start of line to print the next number to be elapsed */
    }

    sleep( 2 );                                                         /* CPU wait, the user must see 10 */


    printf("\n\n Made by: @That Wizard\n\n");                             /* Consider donating a KDF , hahahahahaha */
    printf(" Goodbye %s \n\n", user );

    return 0;                                                           /* End the program here, if username supplied was the Legal suename */
}





