/*
    Author: Tajwar Saiyeed
    Date: 2024-06-03 07:40:43
    File: star-pattern-7.c
*/
#include <stdio.h>
int main()
{
    int space = 8;
    for (int i = 0; i < 5; i++)
    {
        for (int k = space; k >= 0; k--)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        space -= 2;
        printf("\n");
    }

    /*
     *
     * *
     * * *
     * * * *
     * * * * *
     */
    return 0;
}
