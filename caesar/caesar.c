#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

// This program hides a message using caesar's cypher
// It takes a positive integer, that we call key, as argument and moves the letters +key positions in the alphabet

bool only_digits(char number[]);

int main(int argc, string argv[])
{
    int key = 0;
    // convert string to int: stdlib
    if (argc == 2)
    {
        key = atoi(argv[1]);
    }

    //if key more than alfabethtake the modulus of key by 26
    if (key >= 26)
    {
        key %= 26;
    }

    // if no arguments entered or key less or equal 0 print usage or argument not a number
    if (argc != 2 || key <= 0 || !only_digits(argv[1]))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // gets message to encrypt from user
    string text = get_string("plaintext: ");


    if (argc == 2)
    {
        // loop through letters in text
        for (int i = 0, n = strlen(text); i < n; i++)
        {
            // uppercase letters
            if (text[i] >= 65 && text[i] <= 90)
            {
                // subtract 26 if letter greater than 90
                if (text[i] + key > 90)
                {
                    text[i] -= 26;
                }
                // add key to ascii value of letter
                text[i] += key;
            }
            // lowercase letters
            else if (text[i] >= 97 && text[i] <= 121)
            {
                // if key greater than 121 subtract 26 from letter
                if (text[i] + key > 121)
                {
                    text[i] -= 26;
                }
                // add key to ascii value of letter
                text[i] += key;
            }
        }
    }

    // print encrypted text
    printf("ciphertext: %s\n", text);
    return 0;
}

bool only_digits(char number[])
{
    int i = 0;

    for (; number[i] != 0; i++)
    {
        //if (number[i] > '9' || number[i] < '0')
        if (!isdigit(number[i]))
        {
          return false;
        }
    }
    return true;
}