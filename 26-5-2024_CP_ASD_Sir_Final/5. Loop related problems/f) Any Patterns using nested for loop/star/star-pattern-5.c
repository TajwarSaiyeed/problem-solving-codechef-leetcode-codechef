/*
    Author: Tajwar Saiyeed
    Date: 2024-06-03 07:24:50
    File: star-pattern-5.c
*/
#include <stdio.h>
int main()
{

    int space = 3;
    for (int i = 1; i <= 4; i++)
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
    space = 1;
    for (int i = 3; i >= 1; i--)
    {
        for (int k = 0; k < space; k++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        space++;
        printf("\n");
    }

    /*
     *
     * *
     * * *
     * * * *
     * * *
     * *
     *
     */

    return 0;
}