/*
    Author: Tajwar Saiyeed
    Date: 2024-05-26 22:36:39
    File: star-pattern-1.c
*/

#include <stdio.h>
int main()
{

    int n, k = 1;
    scanf("%d", &n);

    /*
        example: n = 5

        Output:
        *
        **
        ***
        ****
        *****
    */

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        printf("\n");
        k++;
    }
    return 0;
}