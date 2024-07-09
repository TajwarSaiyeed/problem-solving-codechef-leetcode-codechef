/*
    Author: Tajwar Saiyeed
    Date: 2024-07-09 07:51:00
    File: Largest_and_smallest_element_from_array.c
*/

// C program to find the largest and smallest element from an array

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int mx = arr[0], mn = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > mx)
            mx = arr[i];
        if (arr[i] < mn)
            mn = arr[i];
    }

    printf("Largest element: %d\n", mx);
    printf("Smallest element: %d\n", mn);
    return 0;
}