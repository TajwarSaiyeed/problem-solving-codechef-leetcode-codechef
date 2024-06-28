/*
    Author: Tajwar Saiyeed
    Date: 2024-06-28 17:45:05
    File: b) Checking prime number (Especially using Sieve).c
*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int prime[n + 1];

    for (int i = 1; i <= n; i++)
    {
        prime[i] = 1;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i] == 1)
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = 0;
            }
        }
    }

    if (prime[n] == 1)
    {
        printf("Prime\n");
    }
    else
    {
        printf("Not Prime\n");
    }

    return 0;
}