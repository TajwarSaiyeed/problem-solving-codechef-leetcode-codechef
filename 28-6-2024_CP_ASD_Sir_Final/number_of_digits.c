/*
    Author: Tajwar Saiyeed
    Date: 2024-07-09 07:41:16
    File: number_of_digits.c
*/

// C program to find the number of digits in a number

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int cnt = log10(n) + 1;
    printf("Number of digits in %d is %d\n", n, cnt);
    return 0;
}