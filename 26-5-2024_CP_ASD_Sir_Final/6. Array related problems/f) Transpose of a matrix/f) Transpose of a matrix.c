/*
    Author: Tajwar Saiyeed
    Date: 2024-05-29 00:17:44
    File: f) Transpose of a matrix.c

    @ref https://byjus.com/maths/transpose-of-a-matrix/
*/
#include <stdio.h>
int main()
{
    int a[10][10], transpose[10][10], r, c, i, j;
    scanf("%d %d", &r, &c);
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
        {
            transpose[j][i] = a[i][j];
        }

    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
            printf("%d\t", transpose[i][j]);
        printf("\n");
    }

    /*
        Explanation:
        Initially, i have taken two integers r and c as input. @r @c

        Then, i have taken a matrix a as input. @a

        Then, i have transposed the matrix and stored the result in transpose matrix. @transpose[j][i] = a[i][j]

        Finally, i have printed the transpose matrix.

        Time Complexity: O(n^2)

        @example
        r = 2
        c = 2

        a = 1 2
            3 4

        transpose = 1 3
                    2 4

        @ref https://byjus.com/maths/transpose-of-a-matrix/

    */

    return 0;
}