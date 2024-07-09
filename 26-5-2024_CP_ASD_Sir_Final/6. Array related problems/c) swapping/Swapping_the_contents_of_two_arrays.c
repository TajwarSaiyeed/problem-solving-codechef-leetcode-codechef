/*
    Author: Tajwar Saiyeed
    Date: 2024-07-09 08:00:12
    File: Swapping_the_contents_of_two_arrays.c
*/

// C program to swap the contents of two arrays

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr1[n], arr2[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr1[i]);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr2[i]);

    for (int i = 0; i < n; i++)
    {
        arr1[i] = arr1[i] + arr2[i];
        arr2[i] = arr1[i] - arr2[i];
        arr1[i] = arr1[i] - arr2[i];
    }

    for (int i = 0; i < n; i++)
        printf("%d ", arr1[i]);

    printf("\n");

    for (int i = 0; i < n; i++)
        printf("%d ", arr2[i]);

    printf("\n");
    return 0;
}