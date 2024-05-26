/*
    Author: Tajwar Saiyeed
    Date: 2024-05-26 22:37:29
    File: number-pattern-2.c
*/
#include <stdio.h>
int main()
{
    int n, space;
    scanf("%d", &n);

    /*
        example: n = 5

        Output:
            1
           21
          321
         4321
        54321
    */

    space = n - 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int k = i; k > 0; k--)
        {
            printf("%d", k);
        }
        space--;
        printf("\n");
    }
    return 0;
}