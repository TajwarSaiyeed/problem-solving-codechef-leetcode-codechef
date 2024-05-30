/*
    Author: Tajwar Saiyeed
    Date: 2024-05-29 19:42:15
    File: c) Counting vowels, consonants, digits, and spaces from a string.c
*/
#include <stdio.h>
int main()
{
    char str[100];
    int i, vowels, consonants, digits, spaces;
    vowels = consonants = digits = spaces = 0;

    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowels++;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            consonants++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
        else if (str[i] == ' ')
        {
            spaces++;
        }
    }

    printf("\nVowels: %d", vowels);
    printf("\nConsonants: %d", consonants);
    printf("\nDigits: %d", digits);
    printf("\nSpaces: %d", spaces);

    /*
        Explanation:

        Let's take a string str[] = "Tajwar Saiyeed Abid 018 AA".

        The for loop will run until the null character '\0' is found.

        The first if condition checks if the character is a vowel. If it is, the vowels variable is incremented by 1.

        The second else if condition checks if the character is an alphabet. If it is, the consonants variable is incremented by 1.

        The third else if condition checks if the character is a digit. If it is, the digits variable is incremented by 1.

        The fourth else if condition checks if the character is a space. If it is, the spaces variable is incremented by 1.

        The final printf() statements print the number of vowels, consonants, digits, and spaces in the string.

        The output of the program will be:

        Vowels: 10
        Consonants: 9
        Digits: 3
        Spaces: 4

        @ref: https://www.geeksforgeeks.org/taking-string-input-space-c-3-different-methods/
    */

    return 0;
}