/*
    Author: Tajwar Saiyeed
    Date: 2024-07-09 07:28:06
    File: Reverse a number.c
*/

// C program to reverse a number

#include <stdio.h>
int main()
{
    int n, reverse = 0;
    scanf("%d", &n);

    while (n)
    {
        int x = n % 10;
        reverse = reverse * 10 + x;
        n /= 10;
    }

    printf("%d\n", reverse);
    return 0;
}