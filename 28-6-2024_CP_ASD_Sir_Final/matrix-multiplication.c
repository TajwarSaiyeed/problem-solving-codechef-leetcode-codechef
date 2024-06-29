/*
    Author: Tajwar Saiyeed
    Date: 2024-05-28 23:33:51
    File: matrix-multiplication.c
*/
#include <stdio.h>
int main()
{
    int row1, col1, row2, col2;
    scanf("%d %d", &row1, &col1);

    int matrix1[row1][col1];
    for (int i = 0; i < row1; i++)
        for (int j = 0; j < col1; j++)
            scanf("%d", &matrix1[i][j]);

    scanf("%d %d", &row2, &col2);

    int matrix2[row2][col2];

    for (int i = 0; i < row2; i++)
        for (int j = 0; j < col2; j++)
            scanf("%d", &matrix2[i][j]);

    if (col1 != row2)
    {
        printf("Matrix multiplication is not possible\n");
        return 0;
    }

    int product[row1][col2];

    memset(product, 0, sizeof(product));

    for (int i = 0; i < row1; i++)
        for (int j = 0; j < col2; j++)
            for (int k = 0; k < col1; k++)
                product[i][j] += matrix1[i][k] * matrix2[k][j];

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
            printf("%d ", product[i][j]);
        printf("\n");
    }

    /*
        Explanation:
        Initially, i have taken two integers row1 and col1 as input. @row1 @col1

        Then, i have taken a matrix matrix1 as input. @matrix1

        Then, i have taken two integers row2 and col2 as input. @row2 @col2

        Then, i have taken a matrix matrix2 as input. @matrix2

        Then, i have checked if the number of columns of matrix1 is equal to the number of rows of matrix2. If not, then matrix multiplication is not possible.

        Then, i have initialized a product matrix with 0. @product

        Then, i have multiplied the two matrices and stored the result in the product matrix. @product[i][j] += matrix1[i][k] * matrix2[k][j]

        Finally, i have printed the product matrix.

        Time Complexity: O(n^3)

        @example
        row1 = 2
        col1 = 2

        matrix1 = 1 2
                  3 4

        row2 = 2
        col2 = 2

        matrix2 = 5 6
                  7 8

        product = 19 22
                  43 50

        More expressions:
         1 2   5 6   1*5+2*7 1*6+2*8 = 19 22
         3 4   7 8   3*5+4*7 3*6+4*8 = 43 50

        @ref : https://www.youtube.com/watch?v=2spTnAiQg4M


    */
    return 0;
}