/*
    Author: Tajwar Saiyeed
    Date: 2024-05-26 13:26:11
    File: Number of digits of a number.c
*/
#include <stdio.h>
int main()
{
    int n;

    scanf("%d", &n);

    /*
        Explanation of Number of digits of a number: To find the number of digits of a number.

        It first checks if the number is less than 0, then it will print "Invalid Input".
        If the number is greater than or equal to 0, it will find the number of digits of the number.

        Example:
        - If the number is 123, it will print "3"
        - If the number is 1234, it will print "4"
    */

    if (n < 0)
    {
        printf("Invalid Input");
        return 0;
    }

    int count = 0;
    while (n)
    {
        count++;
        n /= 10;
    }

    printf("%d", count);
    return 0;
}