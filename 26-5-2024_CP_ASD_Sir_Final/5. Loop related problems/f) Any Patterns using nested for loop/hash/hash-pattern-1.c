/*
    Author: Tajwar Saiyeed
    Date: 2024-05-26 22:34:19
    File: hash-pattern.c
*/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    /*
        example: n = 5

        Output:
              #
             ---
            #####
           -------
          #########
           -------
            #####
             ---
              #
    */

    int space = n - 1, star = 1;
    for (int i = 1; i <= (2 * n - 1); i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= star; k++)
        {
            if (i % 2 == 0)
                printf("-");
            else
                printf("#");
        }
        if (i <= n - 1)
        {
            space--;
            star += 2;
        }
        else
        {
            space++;
            star -= 2;
        }
        printf("\n");
    }

    return 0;
}
