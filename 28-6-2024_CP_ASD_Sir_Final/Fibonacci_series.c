/*
    Author: Tajwar Saiyeed
    Date: 2024-07-09 07:24:14
    File: Fibonacci_series.c
*/

// C program to find the nth Fibonacci number using memoization

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

    for (int i = 0; i <= n; i++)
    {
        printf("%d ", fibo(i));
    }
    printf("\n");
    return 0;
}