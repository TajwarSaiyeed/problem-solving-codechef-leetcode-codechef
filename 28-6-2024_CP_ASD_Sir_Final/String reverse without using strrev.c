/*
    Author: Tajwar Saiyeed
    Date: 2024-06-29 13:00:54
    File: String reverse without using strrev.c
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    fgets(str, 100, stdin);
    int len = strlen(str);
    for (int i = len - 1; i >= 0; i--)
        printf("%c", str[i]);

    return 0;
}