/*
    Author: Tajwar Saiyeed
    Date: 2024-05-26 22:38:36
    File: star-pattern-2.c
*/
#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    /*
        example: n = 5

        Output:
        *****
        ****
        ***
        **
        *
    */

    int k = n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        printf("\n");
        k--;
    }
    return 0;
}