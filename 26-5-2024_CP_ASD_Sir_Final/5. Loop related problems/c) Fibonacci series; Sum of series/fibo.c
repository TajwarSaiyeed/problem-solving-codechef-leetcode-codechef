/*
    Author: Tajwar Saiyeed
    Date: 2024-06-03 12:23:35
    File: fibo.c
*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int fibo[100] = {0};
    fibo[0] = 0;
    fibo[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }

    printf("%d", fibo[n]);

    return 0;
}
