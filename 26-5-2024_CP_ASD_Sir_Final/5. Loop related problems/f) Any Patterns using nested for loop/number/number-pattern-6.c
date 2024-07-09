/*
    Author: Tajwar Saiyeed
    Date: 2024-07-09 09:05:51
    File: number-pattern-6.c
*/
#include <stdio.h>
int main()
{

    int count = 1;
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }

    return 0;
}