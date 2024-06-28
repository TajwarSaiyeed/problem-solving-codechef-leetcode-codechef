/*
    Author: Tajwar Saiyeed
    Date: 2024-06-28 19:51:59
    File: Printing digits.c
*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    while (n != 0)
    {
        printf("%d\n", n%10);
        n = n/10;
    }

    
    return 0;
}