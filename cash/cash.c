#include <stdio.h>
#include <math.h>
#include <cs50.h>

// Function to get the change owed in a float value.
float getValue(void);
// Function that counts the cents coins as an integer.
int coins(int cents);

int main(void)
{
    float owed = getValue();
    int cents = round(owed * 100);
    // print number of cent coins returned
    printf("Coins returned: %d\n", coins(cents));
}

float getValue(void)
{
    float change;
    do
    {
        change = get_float("Change owed: ");
    }
    while (change < 0.00);
    return change;
}

int coins(int cents)
{
    int count = 0;
    
    while (cents > 0)
    {
        if (cents >= 25) // check number of quarters to cents.
        {
            cents -= 25;
            count++;
        }
        else if (cents >= 10) // check number of dimes to cents.
        {
            cents -= 10;
            count++;
        }
        else if (cents >= 5) // check number of nickles to cents.
        {
            cents -= 5;
            count++;
        }
        else
        {
            cents -= 1; // check number of pennies to cents.
            count++;
        }
    }
    return count;
}