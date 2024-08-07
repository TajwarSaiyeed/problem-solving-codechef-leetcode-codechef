/*
    Author: Tajwar Saiyeed
    Date: 2024-07-09 08:12:56
    File: matrix-subtraction.c
*/

// C program to subtract two matrices

#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int matrix1[row][col], matrix2[row][col], sub[row][col];
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", &matrix1[i][j]);

    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", &matrix2[i][j]);

    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            sub[i][j] = matrix1[i][j] - matrix2[i][j];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            printf("%d ", sub[i][j]);
        printf("\n");
    }

    return 0;
}