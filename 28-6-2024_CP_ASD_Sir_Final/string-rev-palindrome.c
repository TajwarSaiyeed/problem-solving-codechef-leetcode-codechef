/*
    Author: Tajwar Saiyeed
    Date: 2024-06-30 06:15:25
    File: string-rev-palindrome.c
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    scanf("%[^\n]s", str);
    int len = strlen(str);
    char rev[100];
    for (int i = len - 1, j = 0; i >= 0; i--, j++)
        rev[j] = str[i];

    rev[len] = '\0';
    if (strcmp(str, rev) == 0)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}