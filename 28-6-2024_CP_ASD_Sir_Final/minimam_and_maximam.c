/*
    Author: Tajwar Saiyeed
    Date: 2024-06-29 10:10:13
    File: minimam_and_maximam.c
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

    printf("Max: %d\nMin: %d\n", mx, mn);
    return 0;
}