/*
    Author: Tajwar Saiyeed
    Date: 2024-07-09 07:05:45
    File: a) Vowel consonant identification.c
*/

// C program to check whether a character is a vowel or a consonant

#include <stdio.h>

int main()
{
    char ch;

    scanf("%c", &ch);

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
        printf("%c is a vowel.\n", ch);
        break;
    default:
        printf("%c is a consonant.\n", ch);
    }

    return 0;
}