/*
    Author: Tajwar Saiyeed
    Date: 2024-05-26 13:15:44
    File: Printing digits.c
*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    /*
        Explanation of Printing digits: To print the digits of a number.

        It first checks if the number is less than 0, then it will print "Invalid Input".
        If the number is greater than or equal to 0, it will print the digits of the number.

        Example:
        - If the number is 123, it will print "3 2 1"
        - If the number is 1234, it will print "4 3 2 1"
    */

    if (n < 0)
    {
        printf("Invalid Input");
        return 0;
    }

    while (n)
    {
        int x = n % 10;
        printf("%d ", x);
        n /= 10;
    }

    return 0;
}