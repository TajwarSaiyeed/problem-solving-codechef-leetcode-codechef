/*
    Author: Tajwar Saiyeed
    Date: 2024-05-28 23:07:00
    File: matrix-addition.c
*/
#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    int matrix1[row][col], matrix2[row][col], sum[row][col];

    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", &matrix1[i][j]);

    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", &matrix2[i][j]);

    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            sum[i][j] = matrix1[i][j] + matrix2[i][j];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    /*
        Explanation:
        Initially, i have taken two integers row and col as input. @row @col

        Then, i have taken two matrices matrix1 and matrix2 as input. @matrix1 @matrix2

        Then, i have added the two matrices and stored the result in sum matrix. @sum[i][j] = matrix1[i][j] + matrix2[i][j]

        Finally, i have printed the sum matrix.

        Time Complexity: O(n^2)

        @example
        row = 2
        col = 2

        matrix1 = 1 2
                  3 4

        matrix2 = 5 6
                  7 8

        sum = 6 8
              10 12
    */

    return 0;
}