/*
    Author: Tajwar Saiyeed
    Date: 2024-06-29 10:14:05
    File: Swapping_two_arrays.c
*/

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
    return 0;
}