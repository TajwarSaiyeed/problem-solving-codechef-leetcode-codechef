/*
    Author: Tajwar Saiyeed
    Date: 2024-06-30 05:03:12
    File: finding-memory-address.c
*/
#include <stdio.h>
int main()
{
    int a = 10;
    int *p;
    p = &a;
    printf("Address of a: %p\n", &a);
    printf("Address of a: %p\n", p);
    printf("Value of a: %d\n", a);
    printf("Value of a: %d\n", *p);
    return 0;
}