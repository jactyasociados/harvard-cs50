#include <cs50.h>
#include <stdio.h>
#include <math.h>
 
//Define Variables
 
int cents;
int quarters;
int dimes;
int nickels;
int pennies;

// Prototype functions

int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);
 
int main(void)
{
    float change;
    do
    {
        change = get_float("Change owed: ");
        cents_owed = round(change * 100);
    }
    while (cents_owed <= 0);
    
    
 
    //Calclate Quarters
    int calculate_quarters(int cents);
    {
        while(cents>=25)
        {
            quarters++;
            cents-=25;
        }
    }
 
    //Calculate Dimes
    int calculate_dimes(int cents);
    {
        while(cents>=10)
        {
            dimes++;
            cents-=10;
        }
    }
 
    //Calculate Nickels
    int calculate_nickels(int cents);
    {
        while(cents>=5)
        {
            nickels++;
            cents-=5;
        }
    }
 
    //Calculate Pennies
    int calculate_pennies(int cents);
    {
        while(cents>=1)
        {
            pennies++;
            cents-=1;
        }
    }
    
    calculate_quarters(cents_owed);
    calculate_dimes(cents_owed);
    calculate_nickels(cents_owed);
    calculate_pennies(cents_owed);
    //Total Coins
    int coins=quarters+dimes+nickels+pennies;
    printf("You have %d coins. \n",coins);
 
 
}