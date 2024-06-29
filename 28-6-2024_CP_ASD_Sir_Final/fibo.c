/*
    Author: Tajwar Saiyeed
    Date: 2024-06-29 11:54:53
    File: fibo.c
*/
#include <stdio.h>
int arr[100];

int fibo(int n)
{
    if (n == 0 || n == 1)
        return n;
    if (arr[n] != -1)
        return arr[n];
    return arr[n] = fibo(n - 1) + fibo(n - 2);
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
        arr[i] = -1;
    arr[0] = 0;
    arr[1] = 1;
    fibo(n);
    printf("%d\n", arr[n]);
    return 0;
}