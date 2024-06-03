/*
    Author: Tajwar Saiyeed
    Date: 2024-06-03 07:40:43
    File: star-pattern-7.c
*/
#include <stdio.h>
int main()
{
    int x = 1;
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", x++);
        }
        printf("\n");
    }

    /*
    1
    2 3
    4 5 6
    7 8 9 10

     */
    return 0;
}
