/*
    Author: Tajwar Saiyeed
    Date: 2024-07-09 07:11:59
    File: Checking_prime_number_using_Sieve_of_Eratosthenes.c
*/

// C program to check prime numbers using Sieve of Eratosthenes

#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);

    int prime[num + 1];

    for (int i = 2; i <= num; i++)
    {
        prime[i] = 1;
    }

    for (int i = 2; i <= num; i++)
    {
        if (prime[i])
        {
            for (int j = i + i; j <= num; j += i)
            {
                prime[j] = 0;
            }
        }
    }

    for (int i = 2; i <= num; i++)
    {
        if (prime[i] && i >= 50)
        {
            printf("%d ", i);
        }
    }

    return 0;
}