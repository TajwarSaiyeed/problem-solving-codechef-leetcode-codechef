/*
    Author: Tajwar Saiyeed
    Date: 2024-06-29 12:06:13
    File: fibo-for-loop.c
*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[100];
    for (int i = 0; i <= n; i++)
        arr[i] = -1;
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i <= n; i++)
        arr[i] = arr[i - 1] + arr[i - 2];
    printf("%d\n", arr[n]);
    return 0;
}