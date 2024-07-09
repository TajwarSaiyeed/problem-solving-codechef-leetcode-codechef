/*
    Author: Tajwar Saiyeed
    Date: 2024-07-09 07:54:20
    File: Searching_an_element_from_an_array_Linear_search.c
*/

// C program to search an element from an array using Linear Search

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

    if (index == -1)
        printf("Element not found\n");
    else
        printf("Element found at index %d\n", index);

    return 0;
}