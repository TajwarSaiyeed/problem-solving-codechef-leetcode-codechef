/*
    Author: Tajwar Saiyeed
    Date: 2024-05-26 22:43:06
    File: number-pattern-3.c
*/

#include <stdio.h>
int main()
{

    int n, k;
    scanf("%d", &n);

    /*
        example: n = 5

        Output:
        12345
        1234
        123
        12
        1
    */

    k = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            printf("%d", j);
        }
        k--;
        printf("\n");
    }
    return 0;
}