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

    /*
        Explanation of Sieve of Eratosthenes: To check whether a number is prime or not.

        It first checks if the number is less than 2, then it is not a prime number.
        If the number is greater than or equal to 2, it will check if the number is divisible by any number from 2 to the square root of the number.
        If the number is divisible by any number from 2 to the square root of the number, then it is not a prime number.
        If the number is not divisible by any number from 2 to the square root of the number, then it is a prime number.

        Example:
        - If the number is 5, it will print "5 is a prime number."
        - If the number is 4, it will print "4 is not a prime number."
    */

    if (num < 2)
    {
        printf("%d is not a prime number.", num);
    }
    else
    {
        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                printf("%d is not a prime number.", num);
                return 0;
            }
        }
        printf("%d is a prime number.", num);
    }
    return 0;
}