/*
    Author: Tajwar Saiyeed
    Date: 2024-05-26 22:48:57
    File: hash-pattern-2.c
*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    /*
        example: n = 5

        Output:
        #       #
         #     #
          #   #
           # #
            #
           # #
          #   #
         #     #
        #       #
    */

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if (i == j || j == 2 * n - i)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}