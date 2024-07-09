/*
    Author: Tajwar Saiyeed
    Date: 2024-07-09 09:16:40
    File: star-pattern.c
*/
#include <stdio.h>
int main()
{
    int space = 4;
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
        space--;
        printf("\n");
    }
    return 0;
}