/*
    Author: Tajwar Saiyeed
    Date: 2024-07-09 09:13:32
    File: pattern1.c
*/
#include <stdio.h>
int main()
{
    char ch[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c ", ch[j]);
        }
        printf("\n");
    }

    /*
        A
        A B
        A B C
        A B C D
        A B C D E
    */
    return 0;
}