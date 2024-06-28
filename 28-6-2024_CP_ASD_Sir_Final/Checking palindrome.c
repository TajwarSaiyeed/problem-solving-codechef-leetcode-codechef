/*
    Author: Tajwar Saiyeed
    Date: 2024-06-28 19:51:10
    File: Checking palindrome.c
*/
#include<stdio.h>
int main()
{
    int n, rev = 0, temp;
    scanf("%d", &n);

    temp = n;
    while (n != 0)
    {
        rev = rev*10 + n%10;
        n = n/10;
    }

    if (temp == rev)
    {
        printf("The number is a palindrome\n");
    }
    else
    {
        printf("The number is not a palindrome\n");
    }
    return 0;
}