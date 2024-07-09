/*
    Author: Tajwar Saiyeed
    Date: 2024-07-09 07:03:35
    File: multiplication-division.c
*/

// C program to swap two numbers using multiplication and division

#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    printf("a = %d, b = %d\n", a, b);

    a = a * b;
    b = a / b;
    a = a / b;

    printf("a = %d, b = %d\n", a, b);

    return 0;
}