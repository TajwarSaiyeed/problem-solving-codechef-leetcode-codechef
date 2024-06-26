/*
    Author: Tajwar Saiyeed
    Date: 2024-05-28 23:01:49
    File: normal_for_loop.c
*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", n, i, n * i);

    /*
        Explanation:
        Initially, i have taken an integer n as input. @n

        Then, i have iterated through the loop from 1 to 10 and printed the multiplication table of n. @for (int i = 1; i <= 10; i++)

        Finally, i have printed the multiplication table of n.

        Time Complexity: O(1)

        @example
        n = 5

        5 x 1 = 5
        5 x 2 = 10
        5 x 3 = 15
        5 x 4 = 20
        5 x 5 = 25
        5 x 6 = 30
        5 x 7 = 35
        5 x 8 = 40
        5 x 9 = 45
        5 x 10 = 50
    */

    return 0;
}