/*
    Author: Tajwar Saiyeed
    Date: 2024-06-28 19:52:40
    File: sum_of_digits.c
*/
#include<stdio.h>
int main()
{
    int n, sum = 0;
    scanf("%d", &n);

    while (n != 0)
    {
        sum += n%10;
        n = n/10;
    }

    printf("Sum of the digits is %d\n", sum);
    return 0;
}