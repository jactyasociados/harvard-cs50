#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main()
{
    float dollars_owed;
    int cents_owed;

    do
    {
        dollars_owed = get_float("Change owed: ");
        cents_owed = round(dollars_owed * 100);
    }
    while (cents_owed <= 0);

    int quarters = cents_owed / 25;
    int dimes = (cents_owed % 25) / 10;
    int nickels = ((cents_owed % 25) % 10) / 5;
    int pennies = ((cents_owed % 25) % 10) % 5;

    printf("You are owed: %d\n", quarters + dimes + nickels + pennies);
}