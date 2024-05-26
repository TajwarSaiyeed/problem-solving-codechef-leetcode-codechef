/*
    Author: Tajwar Saiyeed
    Date: 2024-05-26 22:25:10
    File: number-pattern-1.c
*/
#include <stdio.h>
int main()
{
    int i, j, n;
    scanf("%d", &n);

    /*
        example: n = 5

        Output:
        1
        12
        123
        1234
        12345
    */

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}