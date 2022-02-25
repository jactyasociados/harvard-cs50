#include <cs50.h>
#include <stdio.h>
#include <math.h>

float quantity;
int cents;
int quarter = 25; int dime = 10; int nickel = 5; int pennie = 1;
int total_count, quaters_count, dimes_count, nickles_count, pennies_count;

int main(void)
{
    // asks for change owed in positive quantity
    
    do
    {
        quantity = get_float("Change owed: ");
    }
    while (quantity < 0);

    int coins = 0;
    // converts from float to int for precision
    int cents = round(quantity * 100);

    // loop until number of coins owed condition cents owed > 0, imcrement coims from quartes to cents
    
        while (cents >= quarter)
    {
        cents = cents - quarter;
        quaters_count++;
    }

    while (cents >= dime)
    {
        cents = cents - dime;
        dimes_count++;
    }

    while (cents >= nickel)
    {
        cents = cents - nickel;
        nickles_count++;
    }

    while (cents >= pennie)
    {
        cents = cents - pennie;
        pennies_count++;
    }

    // count total number of coins
    coins = quaters_count + dimes_count + nickles_count + pennies_count;
    
    // total number of coins owed
    printf("you are owed %i coins\n", coins);
}