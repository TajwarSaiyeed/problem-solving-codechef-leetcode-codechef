/*
    Author: Tajwar Saiyeed
    Date: 2024-07-09 09:02:52
    File: number-pattern-5.c
*/
#include <stdio.h>
int main()
{
    int space = 4;
    for (int i = 1; i <= 5; i++)
    {
        for (int k = 0; k < space; k++)
            printf(" ");
        for (int j = 1; j <= 5; j++)
        {
            printf("%d ", j);
        }
        space--;
        printf("\n");
    }

    /*
            1 2 3 4 5
           1 2 3 4 5
          1 2 3 4 5
         1 2 3 4 5
        1 2 3 4 5
    */
    return 0;
}