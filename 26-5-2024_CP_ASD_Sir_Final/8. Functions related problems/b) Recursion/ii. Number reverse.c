/*
    Author: Tajwar Saiyeed
    Date: 2024-05-29 20:28:05
    File: ii. Number reverse.c
*/
#include <stdio.h>

int reverse(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        printf("%d", n % 10);
        return reverse(n / 10);
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    reverse(n);

    /*
        Explanation:

        The reverse() function takes an integer n as an argument.

        If n is 0, the function returns 0.

        Otherwise, the function recursively calls itself with n / 10 as the argument and prints the last digit of n.

        The main() function reads an integer n from the user.

        It then calls the reverse() function with n as the argument.

        The reverse() function prints the digits of n in reverse order.

        Example:

        Let's take n = 12345.

        The output of the program will be:

        54321
    */
    return 0;
}