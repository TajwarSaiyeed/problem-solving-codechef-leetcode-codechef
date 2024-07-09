/*
    Author: Tajwar Saiyeed
    Date: 2024-07-09 09:14:45
    File: pattern2.c
*/

#include <stdio.h>
int main()
{
    char ch[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    for (int i = 5; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c ", ch[j]);
        }
        printf("\n");
    }

    /*
        A B C D E
        A B C D
        A B C
        A B
        A
    */
    return 0;
}