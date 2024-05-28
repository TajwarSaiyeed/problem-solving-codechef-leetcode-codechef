/*
    Author: Tajwar Saiyeed
    Date: 2024-05-28 22:44:57
    File: a) Largest and smallest element from array.c
*/
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

    /*
        Explanation:
        Initially, i have taken the first element of the array as the largest and smallest element.
        Then, i have iterated through the array and checked if the current element is greater than the maximum element or not.

        If it is greater, then i have updated the maximum element. @example mx = arr[i]

        Similarly, if the current element is smaller than the minimum element, then i have updated the minimum element. @example mn = arr[i]

        Finally, i have printed the maximum and minimum element.

        Time Complexity: O(n)

        @example
        n = 3
        arr = {1, 56, 8}

        mx = 1, mn = 1

        i = 1
        arr[1] = 56
        mx = 56, mn = 1

        i = 2
        arr[2] = 8
        mx = 56, mn = 1

        Largest element: 56
        Smallest element: 1
    */

    printf("Largest element: %d\n", mx);
    printf("Smallest element: %d\n", mn);
    return 0;
}