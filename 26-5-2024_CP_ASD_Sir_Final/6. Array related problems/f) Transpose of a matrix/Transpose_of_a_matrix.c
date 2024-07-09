/*
    Author: Tajwar Saiyeed
    Date: 2024-07-09 08:17:07
    File: Transpose_of_a_matrix.c
*/

// C program to find the transpose of a matrix

#include <stdio.h>
int main()
{
    int a[10][10], transpose[10][10], r, c, i, j;
    scanf("%d %d", &r, &c);
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            transpose[j][i] = a[i][j];

    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
            printf("%d\t", transpose[i][j]);
        printf("\n");
    }

    return 0;
}