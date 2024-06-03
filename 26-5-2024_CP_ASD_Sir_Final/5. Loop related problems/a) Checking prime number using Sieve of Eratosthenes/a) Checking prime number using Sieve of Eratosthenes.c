/*
    Author: Tajwar Saiyeed
    Date: 2024-05-26 12:57:28
    File: a) Checking prime number using Sieve of Eratosthenes.c
*/
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

    /*
        Explanation:

        Let's say the number is 30

        1. We will create an array of size 31 (30 + 1) and initialize all the elements of the array to 1.

        2. We will start from 2 and mark all the multiples of 2 as 0. So, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 will be marked as 0.

        3. We will start from 3 and mark all the multiples of 3 as 0. So, 6, 9, 12, 15, 18, 21, 24, 27, 30 will be marked as 0.

        4. We will start from 5 and mark all the multiples of 5 as 0. So, 10, 15, 20, 25, 30 will be marked as 0.

        5. We will start from 7 and mark all the multiples of 7 as 0. So, 14, 21, 28 will be marked as 0.

        6. We will print all the numbers which are marked as 1. So, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29 will be printed.

        7. So, the prime numbers from 1 to 30 are 2, 3, 5, 7, 11, 13, 17, 19, 23, 29.

        8. So, the output will be 2 3 5 7 11 13 17 19 23 29
    */

    return 0;
}