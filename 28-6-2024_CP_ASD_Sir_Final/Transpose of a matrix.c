/*
    Author: Tajwar Saiyeed
    Date: 2024-06-29 10:10:46
    File: Transpose of a matrix.c
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
    
    return 0;
}