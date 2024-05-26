/*
    Author: Tajwar Saiyeed
    Date: 2024-05-26 12:50:30
    File: swap.c
*/

#include <stdio.h>

/**
 * This program swaps the values of two integers using the XOR operator.
 * It takes two integers as input and prints the values before and after swapping.
 */
int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping using XOR (^) operator

    /*
        Let's say a = 5 and b = 3

        if a = 5 (101 in binary) and b = 3 (011 in binary)

        then after the first XOR operation:
        a = a ^ b = 101 ^ 011 = 110 (6 in decimal)
        a = 5 ^ 3 = 5 ^ 3 = 6

        after the second XOR operation:
        b = a ^ b = 110 ^ 011 = 101 (5 in decimal)
        b = 6 ^ 3 = 6 ^ 3 = 5

        after the third XOR operation:
        a = a ^ b = 110 ^ 101 = 011 (3 in decimal)
        a = 6 ^ 5 = 6 ^ 5 = 3

        So, a = 3 and b = 5 after swapping.
    */
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}