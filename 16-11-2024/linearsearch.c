#include <stdio.h>

int main()
{
    int arr[] = {27, 50, 48, 30, 2, 9};
    int target = 9;
    int found = -1;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == target)
        {
            found = i;
            break;
        }
    }

    if (found == -1)
    {
        printf("Not Found\n");
    }
    else
    {
        printf("Found %d\n", found);
    }
    return 0;
}