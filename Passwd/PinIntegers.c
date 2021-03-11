#include <stdio.h>

int main()
{

    int return_val = 0;
    int account_number = 0;
    int pin_number = 0;
    int pin_number_verify = 0;
    int valid_pin = 0;


    // Account # Validation
    while(1)
    {
        printf ("Please enter your 8 digit account number:\n");
        return_val = scanf("%d", &account_number);

        if((account_number > 9999999) && (account_number < 99999999))
        {
            if (return_val == 1)
            {
                break;
            }
        }

        printf("Invalid account number. Account number must be 8 digits.\n\n");

        while (getchar() != '\n');  /* Clear keyboard input buffer */
    }

    return_val = 0;


    // Pin # Validation
    while(1)
    {
        printf ("\nPlease choose a 4 digit pin number:\n");
        return_val = scanf("%d", &pin_number);

        while (getchar() != '\n');  /* Clear keyboard input buffer */

        if((pin_number > 999) && (pin_number < 9999))
        {
            if (return_val == 1)
            {
                while(1)
                {
                    printf("Re-enter pin number:\n");
                    return_val = scanf("%d", &pin_number_verify);
                    while (getchar() != '\n');  /* Clear keyboard input buffer */

                    if(pin_number != pin_number_verify)
                    {
                        printf("Pin setup unsuccessful\n\n");
                        break;
                    }
                    else
                    {
                        valid_pin = 1;
                        break;
                    }
                }
            }
        }

        if (valid_pin == 1) {
            break;
        }

        printf("Invalid pin number. Pin number must be 4 digits.\n");

        while (getchar() != '\n');  /* Clear keyboard input buffer */
    }


    // Successful account setup prompt
    printf("\nPin setup successful!\n");
    printf("Account #: %d\n", account_number);
    printf("Pin #: %d\n", pin_number);
    printf("Have a nice day.\n");

    return 0;
}
