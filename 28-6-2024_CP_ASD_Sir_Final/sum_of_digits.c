/*
    Author: Tajwar Saiyeed
    Date: 2024-07-09 07:38:14
    File: sum_of_digits.c
*/

// C program to find the sum of digits of a number

#include <stdio.h>
int main()
{
    int n, sum = 0;
    scanf("%d", &n);

    while (n != 0)
    {
        sum += n % 10;
        n = n / 10;
    }

    printf("Sum of the digits is %d\n", sum);
    return 0;
}