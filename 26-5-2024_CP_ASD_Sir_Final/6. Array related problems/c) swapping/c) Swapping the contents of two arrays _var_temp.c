/*
    Author: Tajwar Saiyeed
    Date: 2024-05-28 22:57:41
    File: c) Swapping the contents of two arrays _var_temp.c
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

    /*
        Explanation:
        Initially, i have taken two arrays arr1 and arr2.
        Then, i have iterated through the arrays and swapped the contents of the arrays.
        @example
        arr1 = {1, 2, 3}
        arr2 = {4, 5, 6}

        i = 0
        arr1[0] = 1, arr2[0] = 4
        temp = arr1[0] = 1
        arr1[0] = arr2[0] = 4
        arr2[0] = temp = 1

        i = 1
        arr1[1] = 2, arr2[1] = 5
        temp = arr1[1] = 2
        arr1[1] = arr2[1] = 5
        arr2[1] = temp = 2

        i = 2
        arr1[2] = 3, arr2[2] = 6
        temp = arr1[2] = 3
        arr1[2] = arr2[2] = 6
        arr2[2] = temp = 3

        arr1 = {4, 5, 6}
        arr2 = {1, 2, 3}
    */

    for (int i = 0; i < n; i++)
        printf("%d ", arr1[i]);

    printf("\n");

    for (int i = 0; i < n; i++)
        printf("%d ", arr2[i]);
    return 0;
}