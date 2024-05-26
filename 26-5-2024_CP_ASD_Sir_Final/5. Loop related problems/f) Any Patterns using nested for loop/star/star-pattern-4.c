/*
    Author: Tajwar Saiyeed
    Date: 2024-05-26 22:40:51
    File: star-pattern-4.c
*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    /*
        example: n = 5

        Output:
        *********
         *******
          *****
           ***
            *
    */

    int space = 0, star = (2 * n) - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= star; k++)
        {
            printf("*");
        }
        space++;
        star -= 2;
        printf("\n");
    }

    return 0;
}
