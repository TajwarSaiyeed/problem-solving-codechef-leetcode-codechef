/*
    Author: Tajwar Saiyeed
    Date: 2024-05-26 13:03:22
    File: Checking palindrome.c
*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    /*
        Explanation of Palindrome: To check whether a number is a palindrome or not.

        It first checks if the number is less than 0, then it is not a palindrome.
        If the number is greater than or equal to 0, it will reverse the number and check if the reversed number is equal to the original number.
        If the reversed number is equal to the original number, then it is a palindrome.
        If the reversed number is not equal to the original number, then it is not a palindrome.

        Example:
        - If the number is 121, it will print "121 is a palindrome."
        - If the number is 123, it will print "123 is not a palindrome."
    */

    int cp = n; // Copying the number to another variable. For example, 121 is copied to cp.
    int rev = 0;

    while (n) // Reversing the number. For example, 121 is reversed to 121.
    {
        int x = n % 10;     // Extracting the last digit of the number. For example, 1.
        rev = rev * 10 + x; // Reversing the number. For example, 121 = 0 * 10 + 1 = 1, 1 * 10 + 2 = 12, 12 * 10 + 1 = 121.
        n /= 10;            // Removing the last digit of the number. For example, 121 = 12.
    }

    if (rev == cp) // Checking if the reversed number is equal to the original number.
    {
        printf("%d is a palindrome.", cp);
    }
    else
    {
        printf("%d is not a palindrome.", cp);
    }
    return 0;
}