/*
    Author: Tajwar Saiyeed
    Date: 2024-05-26 13:05:24
    File: Checking palindrome Two Pointer.c
*/
#include <stdio.h>
int main()
{
    char str[100];
    scanf("%s", str);

    /*
        Explanation of Palindrome: To check whether a number is a palindrome or not using two pointers.

        It first checks if the number is less than 0, then it is not a palindrome.
        If the number is greater than or equal to 0, it will check if the number is equal to the reverse of the number.
        If the number is equal to the reverse of the number, then it is a palindrome.

        Example:
        - If the number is 121, it will print "121 is a palindrome."
        - If the number is 123, it will print "123 is not a palindrome."
    */

    int i = 0, j = 0;
    while (str[j] != '\0')
    {
        j++;
    }
    j--;

    while (i < j)
    {
        if (str[i] != str[j])
        {
            printf("%s is not a palindrome.", str);
            return 0;
        }
        i++;
        j--;
    }

    printf("%s is a palindrome.", str);

    return 0;
}