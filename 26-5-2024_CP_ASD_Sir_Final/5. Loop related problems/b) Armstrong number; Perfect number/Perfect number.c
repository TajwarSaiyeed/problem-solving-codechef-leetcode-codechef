/*
    Author: Tajwar Saiyeed
    Date: 2024-05-30 20:13:53
    File: Perfect number.c
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    if (sum == n)
        printf("Perfect\n");
    else
        printf("NOT Perfect\n");

    /*
        Explanation:

        A perfect number is a positive integer that is equal to the sum of its proper divisors, excluding itself.

        Let's say the number is 6

        The divisors of 6 are 1, 2, 3, 6

        The sum of the divisors is 1 + 2 + 3 = 6

        So, 6 is a perfect number.
    */

    return 0;
}
