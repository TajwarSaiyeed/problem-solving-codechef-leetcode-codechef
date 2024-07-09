/*
    Author: Tajwar Saiyeed
    Date: 2024-07-09 07:44:37
    File: average_of_digits.c
*/

// C program to find the average of digits of a number

#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    float sum = 0;
    int cnt = log10(n) + 1;

    while (n != 0)
    {
        sum += n % 10;
        n = n / 10;
    }

    printf("Average of the digits is %.2f\n", sum / cnt);
    return 0;
}