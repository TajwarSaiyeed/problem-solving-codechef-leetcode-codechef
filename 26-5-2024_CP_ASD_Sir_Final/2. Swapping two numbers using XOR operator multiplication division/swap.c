/*
    Author: Tajwar Saiyeed
    Date: 2024-07-09 07:02:13
    File: swap.c
*/

// C program to swap two numbers using XOR operator

#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}