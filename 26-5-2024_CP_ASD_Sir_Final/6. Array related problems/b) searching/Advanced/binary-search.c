/*
    Author: Tajwar Saiyeed
    Date: 2024-05-28 22:52:12
    File: binary-search.c
*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int search_number;
    scanf("%d", &search_number);

    int left = 0, right = n - 1, mid, index = -1;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (arr[mid] == search_number)
        {
            index = mid;
            break;
        }
        else if (arr[mid] < search_number)
            left = mid + 1;
        else
            right = mid - 1;
    }

    /*
        Explanation:
        Initially, i have taken left = 0, right = n - 1, mid, index = -1.

        Then, i have iterated through the array and checked if the current element is equal to the search number or not. @arr[mid] == search_number

        If it is equal, then i have updated the index with the current index and break the loop. @index = mid, break

        If the current element is less than the search number, then i have updated the left with mid + 1. @left = mid + 1

        If the current element is greater than the search number, then i have updated the right with mid - 1. @right = mid - 1

        Finally, i have printed the index.

        Time Complexity: O(log n)

        @example
        n = 5
        arr = {1, 2, 3, 4, 5}
        search_number = 3

        left = 0, right = 4, mid = 2, index = -1

        mid = 2
        arr[2] = 3
        3 == 3
        index = 2
        break
    */

    printf("Index: %d\n", index);
    return 0;
}