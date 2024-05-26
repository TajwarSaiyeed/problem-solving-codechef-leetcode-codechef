/*
    Author: Tajwar Saiyeed
    Date: 2024-05-26 12:48:40
    File: a) Vowel consonant identification.c
*/
#include <stdio.h>

/**
 * This program takes a character as input and identifies whether it is a vowel or a consonant.
 */
int main()
{
    char ch;

    // INPUT
    scanf("%c", &ch);

    // Switch statement: The character is a vowel or a consonant
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        // If the character is a vowel, print that it is a vowel
        printf("%c is a vowel.", ch);
        break;
    default:
        // If the character is not a vowel, print that it is a consonant
        printf("%c is a consonant.", ch);
    }

    return 0;
}