#include <cs50.h>
#include <stdio.h>
#include <math.h>

float quantity;
const int quarter = 25; 
const int dime = 10; 
const int nickel = 5; 
const int pennie = 1;
int coins, cents;

int main(void)
{
    // asks for change owed in positive quantity
    
    do
    {
        quantity = get_float("Change owed: ");
    }
    while (quantity < 0);

    coins = 0;
    // converts from float to int for precision
    cents = (int) round(quantity * 100);

    // loop until number of coins owed condition cents owed > 0, imcrement coims from quarters,
    //dimes, pennies, nickels to cents
    while (cents > 0)
    {
        /* Determine the largest type of coin you can give, and deduct this from
           amount of change remaining to return */
        if (cents >= quarter)
        {
            cents -= quarter;
        }
        else if (cents >= dime)
        {
            cents -= dime;
        }
        else if (cents >= nickel)
        {
            cents -= nickel;
        }
        else if (cents >= penny)
        {
            cents -= penny;
        }
        
        // increment the coin counter
        coins++;
    }
    
    // total number of coins owed
    printf("you are owed %i coins\n", coins);
}