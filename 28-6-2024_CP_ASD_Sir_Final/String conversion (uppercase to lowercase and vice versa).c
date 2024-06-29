/*
    Author: Tajwar Saiyeed
    Date: 2024-06-29 13:07:04
    File: String conversion (uppercase to lowercase and vice versa).c
*/
#include <stdio.h>
int main()
{
    char str[100];
    fgets(str, 100, stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        else if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }
    printf("%s", str);
    return 0;
}