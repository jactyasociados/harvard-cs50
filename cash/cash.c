#include <cs50.h>  /* include cs50.h  Header file */
#include <stdio.h>
#include <math.h>  /* include math.h Header file */

int main(int argc, char *argv[]) /* the river Code */
{
    /*cointCounter is Variable to hold the number of coin
     will be used as counter initialize to zero for now*/
    int cointCounter = 0;

    int cents; // cents variable

    float userIput; // Variable to hold user input

    do
    {
        // Ask user to input  the amount of dollars to chance

        userIput = get_float("Change owed  :");

        // converts user input money from dollars to cents
        cents = round(userIput * 100);
    }
    //  telling user to in input only non-negative value.
    while (userIput < 0);

    /* handle corner cases */

    while (cents >= 25) // to count quarters change
    {
        cents = cents - 25;
        cointCounter++; // increment cointCounter by one
    }

    while (cents >= 10) // to count dimes  change
    {
        cents = cents - 10;
        cointCounter++; // increment cointCounter by one
    }
    while (cents >= 5)  // to count nickels change
    {
        cents = cents - 5;
        cointCounter++; // increment cointCounter by one
    }
    while (cents >= 1) // to count pennies change
    {
        cents = cents - 1;
        cointCounter++; // increment cointCounter by one
    }

    printf("%i \n", cointCounter); // print the result

    return 0;// signal to operating system everything works fine

}/** End of main function */