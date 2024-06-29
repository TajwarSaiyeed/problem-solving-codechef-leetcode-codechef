/*
    Author: Tajwar Saiyeed
    Date: 2024-06-29 10:14:22
    File: Linear search.c
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
    
    printf("Found on Index: %d\n", index);

    return 0;
}