/*
    Author: Tajwar Saiyeed
    Date: 2024-07-09 07:18:44
    File: c_Checking_Armstrong_number.c
*/

// C program to check whether a number is Armstrong number or not

#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);

    int cp = n;
    int cnt = log10(n) + 1;

    int sum = 0;

    while (cp)
    {
        int x = cp % 10;
        sum += pow(x, cnt);
        cp /= 10;
    }

    if (sum == n)
    {
        printf("%d is an Armstrong number.\n", n);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", n);
    }

    return 0;
}