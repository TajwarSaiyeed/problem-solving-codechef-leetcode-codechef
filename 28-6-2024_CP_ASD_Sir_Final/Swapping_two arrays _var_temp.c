/*
    Author: Tajwar Saiyeed
    Date: 2024-06-29 10:12:15
    File: Swapping_two arrays _var_temp.c
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
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
    
    for (int i = 0; i < n; i++)
        printf("%d ", arr1[i]);

    printf("\n");

    for (int i = 0; i < n; i++)
        printf("%d ", arr2[i]);
    return 0;
}