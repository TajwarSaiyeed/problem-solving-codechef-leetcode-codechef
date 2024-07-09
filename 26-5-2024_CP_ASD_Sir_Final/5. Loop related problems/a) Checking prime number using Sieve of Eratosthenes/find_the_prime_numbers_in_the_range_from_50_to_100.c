/*
    Author: Tajwar Saiyeed
    Date: 2024-07-09 07:13:31
    File: find_the_prime_numbers_in_the_range_from_50_to_100.c
*/

// C program to find the prime numbers in the range from 50 to 100

#include <stdio.h>
int main()
{
    int prime[100];

    for (int i = 2; i <= 100; i++)
    {
        prime[i] = 1;
    }

    for (int i = 2; i <= 100; i++)
    {
        if (prime[i])
        {
            for (int j = i + i; j <= 100; j += i)
            {
                prime[j] = 0;
            }
        }
    }

    for (int i = 50; i <= 100; i++)
    {
        if (prime[i])
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}