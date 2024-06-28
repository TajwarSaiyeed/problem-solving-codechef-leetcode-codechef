/*
    Author: Tajwar Saiyeed
    Date: 2024-06-28 17:43:59
    File: a) Finding divisors of a number.c
*/
#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}