/*
    Author: Tajwar Saiyeed
    Date: 2024-06-28 19:49:26
    File: Finding reverse of a number.c
*/
#include<stdio.h>
int main()
{
    int n, rev = 0;
    scanf("%d", &n);

    while (n != 0)
    {
        rev = rev*10 + n%10;
        n = n/10;
    }

    printf("Reverse of the number is %d\n", rev);
    return 0;
}