/*
    Author: Tajwar Saiyeed
    Date: 2024-07-09 07:20:21
    File: Perfect_number.c
*/

// C program to check whether a number is a perfect number or not

#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    if (sum == n)
    {
        printf("%d is a perfect number\n", n);
    }
    else
    {
        printf("%d is not a perfect number\n", n);
    }
    return 0;
}