/*
    Author: Tajwar Saiyeed
    Date: 2024-05-26 12:49:18
    File: if-else.c
*/
#include <stdio.h>

/**
 * C program to check if a year is leap year or not using if-else statement
 */

int main()
{
    int year;
    scanf("%d", &year);

    /*
        A year is a leap year if it is divisible by 4 and not divisible by 100.
        However, years divisible by 400 are also leap years.

        @example:
        2000 is a leap year because it is divisible by 400.
        1900 is not a leap year because it is divisible by 100 but not divisible by 400.
        1996 is a leap year because it is divisible by 4 but not divisible by 100.

    */

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("%d is a leap year.", year);
    else
        printf("%d is not a leap year.", year);

    return 0;
}