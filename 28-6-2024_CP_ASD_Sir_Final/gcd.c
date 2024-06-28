/*
    Author: Tajwar Saiyeed
    Date: 2024-06-28 19:32:41
    File: gcd.c
*/
#include<stdio.h>


int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a%b);
}


int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    printf("GCD of %d and %d is %d\n", a, b, gcd(a, b));
    
    return 0;
}