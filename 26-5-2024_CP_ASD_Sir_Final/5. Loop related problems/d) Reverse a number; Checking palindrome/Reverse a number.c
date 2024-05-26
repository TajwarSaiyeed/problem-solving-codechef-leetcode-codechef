/*
    Author: Tajwar Saiyeed
    Date: 2024-05-26 22:53:52
    File: Reverse a number.c
*/
#include <stdio.h>
int main()
{
    int n, reverse = 0;
    scanf("%d", &n);

    /*
        Explanation of Reversing a number: To reverse a number.

        It first checks if the number is less than 0, then it is not a palindrome.
        If the number is greater than or equal to 0, it will reverse the number.
        If the number is 123, it will print "321".
    */

    while (n)
    {
        int x = n % 10;
        reverse = reverse * 10 + x;
        n /= 10;
    }

    printf("%d", reverse);
    return 0;
}