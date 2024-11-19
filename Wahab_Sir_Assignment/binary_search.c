#include <stdio.h>

int main()
{

    int arr[] = {9, 19, 20, 27, 35, 39, 54, 66,78};
    int target = 5;
    int l = 0;
    int r = 8;
    int found = -1;

    while(l<=r) {
        int mid = (l + r) / 2;
        if (arr[mid] == target) {
            found = 1;
            break;
        }


        if (arr[mid] < target) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    if (found == 1) {
        printf("Target Found");
    } else {
        printf("Not Found");
    }

    return 0;
}