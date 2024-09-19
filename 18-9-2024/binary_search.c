#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int search;
    scanf("%d", &search);

    int low = 0, high = n - 1, mid;
    while (low <= high)
    {
        mid = low + (high - low) / 2;

        if (arr[mid] == search)
        {
            printf("Element found at index %d", mid);
            return 0;
        }
        else if (arr[mid] < search)
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
    }

    printf("Element not found");

    return 0;
}