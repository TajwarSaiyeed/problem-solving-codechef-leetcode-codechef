/*
    Author: Tajwar Saiyeed
    Date: 2024-06-29 20:18:05
    File: reverse_number.c
*/
#include <stdio.h>

int reverse_number(int rev, int n)
{
    if (n == 0)
        return rev;
    else
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
        return reverse_number(rev, n);
    }
}

int main()
{

    int n;
    scanf("%d", &n);
    int rev = 0;

    printf("Reverse of %d is %d\n", n, reverse_number(rev, n));

    return 0;
}