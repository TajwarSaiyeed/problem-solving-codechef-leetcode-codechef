/*
    Author: Tajwar Saiyeed
    Date: 2024-05-26 12:50:14
    File: multiplication-division.c
*/

#include <stdio.h>

/**
 * This program will swap two number using multiplication and division.
 */

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    printf("a = %d, b = %d\n", a, b);

    a = a * b;
    b = a / b;
    a = a / b;

    printf("a = %d, b = %d\n", a, b);

    /*
        Explanation:

        Let's say a = 5 and b = 3

        after the first multiplication:
        a = a * b = 5 * 3 = 15

        after the first division:
        b = a / b = 15 / 3 = 5

        after the second multiplication:
        a = a / b = 15 / 5 = 3

        So, a = 3 and b = 5 after swapping.
    */

    return 0;
}