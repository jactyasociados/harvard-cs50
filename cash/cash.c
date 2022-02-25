#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // asks for change owed in positive quantity
    float quantity;
    do
    {
        quantity = get_float("Change owed: ");
    }
    while (quantity <= 0);

    int coins = 0;
    // converts from float to int for precision
    int cents = round(quantity * 100);

    // loop until number of coins owed condition cents owed > 0, imcrement coims from quartes to cents
    while (cents > 0)
    {
        // count cents owed in number of coins from quaters to cents
        if (cents >= 25)
        {
            cents -= 25;
            coins++;
        }
        else if (cents >= 10)
        {
            cents -= 10;
            coins++;
        }
        else if (cents >= 5)
        {
            cents -= 5;
            coins++;
        }
        else
        {
            cents -= 1;
            coins++;
        }
    }
    // total number of coins owed
    printf("you are owed %i coins\n", coins);
}