/*
    Author: Tajwar Saiyeed
    Date: 2024-07-09 07:34:29
    File: Printing_digits.c
*/

// C program to print the digits of a number

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    while (n != 0)
    {
        printf("%d\n", n % 10);
        n = n / 10;
    }

    return 0;
}