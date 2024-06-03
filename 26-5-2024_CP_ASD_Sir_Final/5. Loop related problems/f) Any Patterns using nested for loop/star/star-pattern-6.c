/*
    Author: Tajwar Saiyeed
    Date: 2024-06-03 07:35:09
    File: star-pattern-6.c
*/
#include <stdio.h>
int main()
{

    int space = 4;
    for (int i = 1; i <= 5; i++)
    {
        for (int k = 0; k < space; k++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        space--;
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