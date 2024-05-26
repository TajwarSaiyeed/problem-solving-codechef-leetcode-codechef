/*
    Author: Tajwar Saiyeed
    Date: 2024-05-26 13:24:58
    File: Sum of digits.c
*/
#include <stdio.h>
int main()
{
    int n;

    scanf("%d", &n);

    /*
        Explanation of Sum of digits: To find the sum of the digits of a number.

        It first checks if the number is less than 0, then it will print "Invalid Input".
        If the number is greater than or equal to 0, it will find the sum of the digits of the number.

        Example:
        - If the number is 123, it will print "6"
        - If the number is 1234, it will print "10"
    */

    if (n < 0)
    {
        printf("Invalid Input");
        return 0;
    }

    int sum = 0;
    while (n)
    {
        int x = n % 10;
        sum += x;
        n /= 10;
    }

    printf("%d", sum);

    return 0;
}