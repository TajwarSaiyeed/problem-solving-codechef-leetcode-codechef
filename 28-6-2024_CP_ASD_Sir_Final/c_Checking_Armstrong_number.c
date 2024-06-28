/*
    Author: Tajwar Saiyeed
    Date: 2024-06-28 17:49:36
    File: c) Checking Armstrong number.c
*/
#include<stdio.h>
#include<math.h>
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