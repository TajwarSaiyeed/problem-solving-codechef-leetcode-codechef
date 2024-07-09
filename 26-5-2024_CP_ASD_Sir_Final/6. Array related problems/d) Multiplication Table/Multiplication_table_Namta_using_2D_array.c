/*
    Author: Tajwar Saiyeed
    Date: 2024-07-09 08:05:47
    File: Multiplication_table_Namta_using_2D_array.c
*/

// C program to print the multiplication table of a number using 2D array

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[10][10];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= 10; j++)
            arr[i][j] = i * j;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 10; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}