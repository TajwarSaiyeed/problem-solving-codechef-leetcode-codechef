/*
    Author: Tajwar Saiyeed
    Date: 2024-06-03 07:04:56
    File: number-pattern-4.c
*/
#include <stdio.h>
int main()
{
    int end = 9, space = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int k = 0; k < space; k++)
            printf(" ");

        for (int j = 1; j <= end; j++)
        {
            printf("%d ", j);
        }
        end -= 2;
        space += 2;
        printf("\n");
    }

    /*
        1 2 3 4 5 6 7 8 9
          1 2 3 4 5 6 7
           1 2 3 4 5
            1 2 3
              1
    */

    return 0;
}
