/*
    Author: Tajwar Saiyeed
    Date: 2024-07-09 08:08:11
    File: matrix-addition.c
*/

// C program to add two matrices

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

    return 0;
}