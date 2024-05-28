/*
    Author: Tajwar Saiyeed
    Date: 2024-05-28 22:49:52
    File: b) Searching an element from an array (Linear search).c
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

    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search_number)
        {
            index = i;
            break;
        }
    }

    /*
        Explanation:
        I have taken a variable index and initialized it with -1. @index = -1

        Then, i have iterated through the array and checked if the current element is equal to the search number or not. @arr[i] == search_number

        If it is equal, then i have updated the index with the current index and break the loop. @index = i, break

        Finally, i have printed the index.

        Time Complexity: O(n)

        @example
        n = 5
        arr = {1, 2, 3, 4, 5}
        search_number = 3

        index = -1

        i = 0
        arr[0] = 1
        1 != 3

        i = 1
        arr[1] = 2
        2 != 3

        i = 2
        arr[2] = 3
        3 == 3
        index = 2
        break

        index = 2
    */

    printf("Found on Index: %d\n", index);

    return 0;
}